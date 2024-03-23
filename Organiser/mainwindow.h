#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlTableModel>

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

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlTableModel* model;
};
#endif // MAINWINDOW_H
