#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
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
    void createNewBouqetWidget(int rowNum, QString flname, QString flprice);
    void createPieChart();

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

    void on_pie_chart_sex_customContextMenuRequested(const QPoint &pos);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel* model;
};
#endif // MAINWINDOW_H
