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
        query2.exec("SELECT b_id, f_id, flowers.Name, f_ammount FROM consistof JOIN flowers ON f_id = flowers.id WHERE b_id =" + QString::number(currec));
        QString c;
        while(query2.next())
        {
            c += query2.value(2).toString() +  " ( " + query2.value(3).toString() +  " ) ";
        }
        QString n = query.value(0).toString();
        QString p = query.value(2).toString();
        createNewBouqetWidget(currec-1,n,p, c);
        currec++;
    }
    createPieChart();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createBarChart()
{
    QSqlQuery query;

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
    slice_male->setPen(QPen(Qt::darkBlue,2));
    slice_male->setBrush(Qt::darkBlue);
    slice_female->setLabelVisible(true);
    slice_female->setPen(QPen(Qt::darkRed,2));
    slice_female->setBrush(Qt::darkRed);

    QChart* chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Мужчины/женщины");
    QChartView* chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    chartView->setMaximumSize(400,400);

    ui->gridLayout_3->addWidget(chartView,0,0);
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

