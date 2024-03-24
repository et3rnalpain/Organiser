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
    }
    this->createNewBouqetWidget(0);
    this->createNewBouqetWidget(0);
    this->createNewBouqetWidget(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::createNewBouqetWidget(int rowNum)
{
    QFrame* frame = new QFrame();
    QString name = "bouqet" + QString::number(rowNum);// + "_" + QString::number(colNum);
    frame->setObjectName(name);
    frame->setMinimumSize(QSize(500, 50));
    frame->setMaximumSize(QSize(10000, 50));
    frame->setStyleSheet(QString::fromUtf8("border: solid;\n"
                                                  "border-width: 2px;\n"
                                                  "background-color: rgb(250, 250, 255);\n"
                                                  "border-color: #30343f;\n"
                                           "border-radius: 4px;"));
    QHBoxLayout* hframelayout = new QHBoxLayout();
    hframelayout->setObjectName("hfamelayout" + QString::number(rowNum));
    QLabel* bouqetName = new QLabel(frame);
    bouqetName->setObjectName("bouqetName" + QString::number(rowNum));
    bouqetName->setText("Govno");
    hframelayout->addWidget(bouqetName);

    QLabel* consistof = new QLabel(frame);
    consistof->setObjectName("consistof" + QString::number(rowNum));

    hframelayout->addWidget(consistof);

    QSpacerItem* hSpacer = new QSpacerItem(400, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

    hframelayout->addItem(hSpacer);

    QLabel* price = new QLabel(frame);
    price->setObjectName("price" + QString::number(rowNum));
    price->setText("1000R");
    hframelayout->addWidget(price);
    ui->bouqetContentLayout->insertWidget(0,frame,0,Qt::AlignTop);
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

