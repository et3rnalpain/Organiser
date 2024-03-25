#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlRecord>

#include <QtCharts/QChartView>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QHorizontalStackedBarSeries>
#include <QtCharts/QLineSeries>
#include <QtCharts/QCategoryAxis>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>

#include <QVector>
#include <QList>

#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void createNewBouqetWidget(int rowNum, QString flname, QString flprice, QString consist);
    void createNewClientWidget(int rowNum, QString s_name, QString f_name, QString m_name, QString sex, QString age);
    void createNewOrderWidget(int rowNum,QString id_, QString data, QString b_name, QString client_fio, QString price);
    void createPieChart();
    void createBarChartBouqets();
    void createBarChartOrders();
    void createNewFlowerBouqetConnection();

private slots:

    void on_closemenu_clicked();

    void on_openmenu_clicked();

    void on_inventory_clicked();

    void on_flowers_clicked();

    void on_clients_clicked();

    void on_stats_clicked();

    void on_inventory_2_clicked();

    void on_flowers_2_clicked();

    void on_clients_2_clicked();

    void on_stats_2_clicked();

    void on_but_AddFlower_clicked();

    void on_info_clicked(const QModelIndex &index);

    void on_but_DelFlower_clicked();

    void on_orders_clicked();

    void on_orders_2_clicked();

    void onAddClicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel* model;
    QSqlTableModel* model2;
    int currentRowFlower;
};
#endif // MAINWINDOW_H
