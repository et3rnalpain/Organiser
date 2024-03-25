#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->fullmenu->setVisible(false);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./../../Organiser/Organiser/db/flowers.db");
    if(db.open())
    {
        model = new QSqlTableModel(this,db);
        model->setTable("flowers");
        model->select();
        this->ui->info->setModel(model);
        this->ui->info->setColumnHidden(0, true);
        model->setHeaderData(1, Qt::Horizontal, "Название");
        model->setHeaderData(2, Qt::Horizontal, "Цена (руб)");
        model->setHeaderData(3, Qt::Horizontal, "Количество (шт)");
        //this->ui->info->verticalHeader()->setVisible(false);
        //this->ui->info->setEditTriggers(QAbstractItemView::NoEditTriggers);
        this->ui->info->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
    QSqlQuery query;
    query.exec("SELECT bouqets.Name, consistof.b_id, sum(f_ammount * flowers.Price) FROM bouqets JOIN consistof ON consistof.b_id = bouqets.id JOIN flowers ON consistof.f_id = flowers.id GROUP BY consistof.b_id");
    int currec = 1;

    while(query.next())
    {
        QSqlQuery query2;
        QSqlQuery query3;
        query2.exec("SELECT b_id, f_id, flowers.Name, f_ammount FROM consistof JOIN flowers ON f_id = flowers.id WHERE b_id =" + QString::number(currec));
        QString c;
        while(query2.next())
        {
            c += query2.value(2).toString() +  " ( " + query2.value(3).toString() +  " ) ";
            query3.exec("UPDATE bouqets SET Price = (SELECT sum(f_ammount * flowers.Price) FROM bouqets JOIN consistof ON consistof.b_id = bouqets.id JOIN flowers ON consistof.f_id = flowers.id WHERE b_id = "+query2.value(0).toString() +" GROUP BY consistof.b_id) WHERE bouqets.id = " + query2.value(0).toString());
        }
        QString n = query.value(0).toString();
        QString p = query.value(2).toString();

        createNewBouqetWidget(currec-1,n,p, c);
        currec++;
    }

    query.exec("SELECT clients.LastName, clients.FirstName, clients.MiddleName, clients.Sex, clients.BirthDate FROM clients");
    currec = 1;

    while(query.next())
    {
        QString l_name = query.value(0).toString();
        QString f_name = query.value(1).toString();
        QString m_name = query.value(2).toString();
        QString sex_ = query.value(3).toString();
        QString age_ = query.value(4).toString();
        createNewClientWidget(currec-1, l_name, f_name, m_name, sex_, age_);
        currec++;
    }

    query.exec("SELECT orders.id, orders.date, bouqets.Name, clients.LastName, bouqets.Price, clients.FirstName, clients.MiddleName FROM orders JOIN bouqets ON bouqets.id = orders.bouquete_id JOIN clients ON clients.id = orders.client_id");
    currec = 1;

    while(query.next())
    {
        QString id_ = "Заказ ID: " + query.value(0).toString();
        QString date_ = "Когда: " + query.value(1).toString();
        QString b_name = "Букет: " + query.value(2).toString();
        QString fio_ = query.value(3).toString() + " " + query.value(5).toString()[0] + ". " + query.value(6).toString()[0] + ".";
        QString price_ = "Цена: " + query.value(4).toString() + "₽";

        createNewOrderWidget(currec-1, id_, date_, b_name, fio_, price_);
        currec++;
    }

    QSqlQuery q;q.exec("SELECT Name FROM flowers");
    while(q.next()) ui->flowersComboBox->addItem(q.value(0).toString());
    createPieChart();
    createBarChartBouqets();
    createBarChartOrders();
    createNewFlowerBouqetConnection();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createNewOrderWidget(int rowNum, QString id_, QString data_, QString b_name, QString client_fio, QString price_)
{
    QFrame* frame = new QFrame();
    QString name = "order" + QString::number(rowNum);// + "_" + QString::number(colNum);
    frame->setObjectName(name);
    frame->setMinimumSize(QSize(150, 200));
    frame->setMaximumSize(QSize(10000, 10000));
    frame->setStyleSheet(QString::fromUtf8(
        "QFrame {border: solid; border-width: 2px;background-color: #30343f;border-color: #30343f;border-radius: 4px;}\n"
        "QLabel {background-color: #30343f; font-size: 16px; color: #fafaff}"));
    QVBoxLayout* hframelayout = new QVBoxLayout(frame);
    hframelayout->setObjectName("hfamelayout_order" + QString::number(rowNum));

    QLabel* id = new QLabel(frame);
    QLabel* data = new QLabel(frame);
    QLabel* bouqete_name = new QLabel(frame);
    QLabel* fio = new QLabel(frame);
    QLabel* price = new QLabel(frame);

    id->setObjectName("id_order" + QString::number(rowNum));
    id->setText(id_);
    id->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(0,id,0);

    data->setObjectName("data_order" + QString::number(rowNum));
    data->setText(data_);
    data->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(1,data,0);

    bouqete_name->setObjectName("b_name_order" + QString::number(rowNum));
    bouqete_name->setText(b_name);
    bouqete_name->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(2,bouqete_name,0);

    fio->setObjectName("fio_order" + QString::number(rowNum));
    fio->setText(client_fio);
    fio->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(3,fio,0);

    price->setObjectName("price_order" + QString::number(rowNum));
    price->setText(price_);
    price->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(4,price,0);

    ui->gridLayout_4->addWidget(frame,rowNum - rowNum % 3, rowNum % 3);
}

void MainWindow::createNewClientWidget(int rowNum, QString s_name, QString f_name, QString m_name, QString sex_, QString age_)
{
    QFrame* frame = new QFrame();
    QString name = "client" + QString::number(rowNum);// + "_" + QString::number(colNum);
    frame->setObjectName(name);
    frame->setMinimumSize(QSize(500, 50));
    frame->setMaximumSize(QSize(10000, 50));
    frame->setStyleSheet(QString::fromUtf8(
        "QFrame {border: solid; border-width: 2px;background-color: #30343f;border-color: #30343f;border-radius: 4px;}\n"
        "QLabel {background-color: #30343f; font-size: 16px; color: #fafaff}"));
    QHBoxLayout* hframelayout = new QHBoxLayout(frame);
    hframelayout->setObjectName("hfamelayout_client" + QString::number(rowNum));

    QLabel* first_name = new QLabel(frame);
    QLabel* second_name = new QLabel(frame);
    QLabel* middle_name = new QLabel(frame);
    QLabel* sex = new QLabel(frame);
    QLabel* age = new QLabel(frame);

    second_name->setObjectName("s_name" + QString::number(rowNum));
    second_name->setText(s_name);
    second_name->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(0,second_name,0);

    first_name->setObjectName("f_name" + QString::number(rowNum));
    first_name->setText(f_name);
    first_name->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(1,first_name,0);

    middle_name->setObjectName("m_name" + QString::number(rowNum));
    middle_name->setText(m_name);
    middle_name->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(2,middle_name,0);

    sex->setObjectName("sex" + QString::number(rowNum));
    sex->setText(sex_);
    sex->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(3,sex,0);

    age->setObjectName("sex" + QString::number(rowNum));
    age->setText(age_);
    age->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(4,age,0);

    ui->verticalLayout_8->insertWidget(rowNum,frame,0,Qt::AlignTop);
}

void MainWindow::createBarChartOrders()
{
    QSqlQuery query;
    query.exec("SELECT date, COUNT(date) FROM orders GROUP BY date");
    int current_row = 1;

    QLineSeries* series = new QLineSeries();
    QCategoryAxis *axisX = new QCategoryAxis();
    QValueAxis *axisY = new QValueAxis();

    int max = 0;
    while (query.next())
    {
        series->append(current_row-1, query.value(1).toInt());
        axisX->append(query.value(0).toString(),current_row-1);
        current_row++;
        if (query.value(1).toInt() > max)
            max = query.value(1).toInt();
    }

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Количество заказов по датам");

    chart->createDefaultAxes();
    chart->setAxisX(axisX, series);
    chart->setAxisY(axisY, series);
    axisY->setRange(0, max);

    chart->legend()->setVisible(false);
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->setAnimationOptions(QChart::AllAnimations);

    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setVisible(true);
    chartView->setMinimumSize(1000,400);

    ui->gridLayout_3->addWidget(chartView,1,0);
}

void MainWindow::createBarChartBouqets()
{
    QSqlQuery query;
    query.exec("SELECT bouqets.Name, COUNT(bouquete_id) FROM orders JOIN bouqets ON orders.bouquete_id = bouqets.id JOIN clients ON orders.client_id = clients.id GROUP BY bouquete_id");
    int current_row = 1;

    int size = 1;

    if(query.last())
    {
        size =  query.at() + 1;
        query.first();
        query.previous();
    }

    int max = 0;
    QBarSeries* series = new QBarSeries();
    QBarSet** set = new QBarSet*[size];
    while (query.next()){
        set[current_row - 1] = new QBarSet(query.value(0).toString());
        *set[current_row - 1] << query.value(1).toInt();
        series->append(set[current_row - 1]);
        current_row++;
        if (query.value(1).toInt() > max)
            max = query.value(1).toInt();
    }

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Какой букет покупают чаще всего?");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->setAnimationOptions(QChart::AllAnimations);

    QValueAxis *axisY = new QValueAxis();
    chart->setAxisY(axisY, series);
    axisY->setRange(0, max);

    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    chartView->setVisible(true);
    chartView->setMinimumSize(400,400);

    ui->gridLayout_3->addWidget(chartView,0,0);

    delete[] set;
}

void MainWindow::createPieChart()
{
    QSqlQuery query;

    int male_count = 1, female_count = 1;;

    if (query.exec("SELECT count(*) FROM clients WHERE Sex = 'муж'"))
    {
        query.next();
        male_count = query.value(0).toInt();
    }
    else {
        male_count = 1;
    }

    if (query.exec("SELECT count(*) FROM clients WHERE Sex = 'жен'"))
    {
        query.next();
        female_count = query.value(0).toInt();
    }
    else {
        female_count = 1;
    }

    int total_count = male_count + female_count;

    //int male_count = 10, female_count = 15, total_count = male_count + female_count;

    QPieSeries* series = new QPieSeries();
    series->append("Женщины", female_count/(total_count * 1.0f));
    series->append("Мужчины", male_count/(total_count * 1.0f));

    QPieSlice* slice_male = series->slices().at(0);
    QPieSlice* slice_female = series->slices().at(1);
    slice_male->setLabelVisible(true);
    slice_male->setPen(QPen(Qt::blue,2));
    slice_male->setBrush(Qt::blue);
    slice_female->setLabelVisible(true);
    slice_female->setPen(QPen(Qt::red,2));
    slice_female->setBrush(Qt::red);

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Мужчины/женщины");
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
    chart->setAnimationOptions(QChart::AllAnimations);

    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMinimumSize(400,400);

    ui->gridLayout_3->addWidget(chartView,0,1);
}

void MainWindow::createNewBouqetWidget(int rowNum, QString flname, QString flprice, QString consist)
{
    QFrame* frame = new QFrame();
    QString name = "bouqet" + QString::number(rowNum);// + "_" + QString::number(colNum);
    frame->setObjectName(name);
    frame->setMinimumSize(QSize(500, 50));
    frame->setMaximumSize(QSize(10000, 50));
    frame->setStyleSheet(QString::fromUtf8(
        "QFrame {border: solid; border-width: 2px;background-color: #30343f;border-color: #30343f;border-radius: 4px;}\n"
        "QLabel {background-color: #30343f; font-size: 16px; color: #fafaff}"));
    QHBoxLayout* hframelayout = new QHBoxLayout(frame);
    hframelayout->setObjectName("hfamelayout" + QString::number(rowNum));
    QLabel* bouqetName = new QLabel(frame);
    bouqetName->setObjectName("bouqetName" + QString::number(rowNum));
    bouqetName->setText(flname);
    bouqetName->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(0,bouqetName,0);

    QLabel* consistof = new QLabel(frame);
    consistof->setObjectName("consistof" + QString::number(rowNum));
    consistof->setText(consist);
    consistof->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    hframelayout->insertWidget(1,consistof,0);

    QSpacerItem* hSpacer = new QSpacerItem(600, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

    hframelayout->insertSpacerItem(2,hSpacer);

    QLabel* price = new QLabel(frame);
    price->setObjectName("price" + QString::number(rowNum));
    price->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    price->setText(flprice + "₽");
    hframelayout->insertWidget(3,price,0);
    ui->bouqetContentLayout->insertWidget(rowNum,frame,0,Qt::AlignTop);
}

void MainWindow::createNewFlowerBouqetConnection()
{
    QFrame* exmpl = new QFrame(ui->frame_3);
    exmpl->setObjectName("exmpl");
    exmpl->setFrameShape(QFrame::StyledPanel);
    exmpl->setFrameShadow(QFrame::Raised);
    QHBoxLayout* el = new QHBoxLayout(exmpl);
    el->setObjectName("el");
    QComboBox* comboBox = new QComboBox(exmpl);
    comboBox->setObjectName("flowersComboBox");
    comboBox->setMinimumSize(QSize(100, 20));
    comboBox->setMaximumSize(QSize(16777215, 20));
    comboBox->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    QSqlQuery query;query.exec("SELECT Name FROM flowers");
    while(query.next()) comboBox->addItem(query.value(0).toString());
    el->addWidget(comboBox);

    QSpinBox* spinBox = new QSpinBox(exmpl);
    spinBox->setObjectName("spinBox");
    spinBox->setMinimumSize(QSize(50, 20));
    spinBox->setFont(QFont(QString::fromUtf8("Bahnschrift")));
    spinBox->setMinimum(1);
    el->addWidget(spinBox);

    QPushButton* pb = new QPushButton(exmpl);
    pb->setObjectName("pushButton");
    pb->setMinimumSize(QSize(0, 0));
    pb->setMaximumSize(QSize(20, 20));
    connect(pb,&QPushButton::clicked,this,&MainWindow::onAddClicked);

    el->addWidget(pb);


    ui->addF->addWidget(exmpl);
}

void MainWindow::on_closemenu_clicked()
{
    ui->content->move(QPoint(38,0));
}


void MainWindow::on_openmenu_clicked()
{
    ui->content->move(QPoint(140,0));
}


void MainWindow::on_inventory_clicked()
{
    model->select();
    ui->contentWidget->setCurrentIndex(1);
}


void MainWindow::on_flowers_clicked()
{
    ui->contentWidget->setCurrentIndex(0);
}


void MainWindow::on_clients_clicked()
{
     ui->contentWidget->setCurrentIndex(2);
}


void MainWindow::on_stats_clicked()
{
    ui->contentWidget->setCurrentIndex(3);
}


void MainWindow::on_inventory_2_clicked()
{
    ui->contentWidget->setCurrentIndex(1);
}


void MainWindow::on_flowers_2_clicked()
{
    ui->contentWidget->setCurrentIndex(0);
}


void MainWindow::on_clients_2_clicked()
{
    ui->contentWidget->setCurrentIndex(2);
}


void MainWindow::on_stats_2_clicked()
{
    ui->contentWidget->setCurrentIndex(3);
}


void MainWindow::on_but_AddFlower_clicked()
{
    model->insertRow(model->rowCount());
}


void MainWindow::on_info_clicked(const QModelIndex &index)
{
    this->currentRowFlower = index.row();
}


void MainWindow::on_but_DelFlower_clicked()
{
    model->removeRow(this->currentRowFlower);
    this->currentRowFlower = -1;
    model->select();
}

void MainWindow::on_orders_clicked()
{
    ui->contentWidget->setCurrentIndex(4);
}

void MainWindow::on_orders_2_clicked()
{
    ui->contentWidget->setCurrentIndex(4);
}

void MainWindow::onAddClicked()
{
    createNewFlowerBouqetConnection();
}


