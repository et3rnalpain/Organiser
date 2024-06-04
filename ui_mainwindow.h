/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QWidget *iconmenu;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout;
    QPushButton *openmenu;
    QPushButton *inventory_2;
    QPushButton *flowers_2;
    QPushButton *clients_2;
    QPushButton *stats_2;
    QPushButton *orders_2;
    QSpacerItem *verticalSpacer;
    QWidget *fullmenu;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *closemenu;
    QPushButton *inventory;
    QPushButton *flowers;
    QPushButton *clients;
    QPushButton *stats;
    QPushButton *orders;
    QSpacerItem *verticalSpacer_2;
    QWidget *content;
    QGridLayout *gridLayout;
    QStackedWidget *contentWidget;
    QWidget *Sklad;
    QVBoxLayout *verticalLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *bouqetContentLayout;
    QSpacerItem *verticalSpacer_3;
    QFrame *AddingBouqetFrame;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *NewBouqetName;
    QFrame *frame_3;
    QVBoxLayout *addF;
    QFrame *exmpl1;
    QHBoxLayout *exmplLayout;
    QComboBox *flowersComboBox1;
    QSpinBox *spinBox;
    QPushButton *pushButton1;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *accept;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_3;
    QWidget *page_3;
    QGridLayout *gridLayout_2;
    QVBoxLayout *verticalLayout_7;
    QTableView *info;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *but_AddFlower;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_1;
    QHBoxLayout *horizontalLayout_2;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QFrame *frame;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_3;
    QScrollArea *scrollArea_3;
    QWidget *scrollAreaWidgetContents_3;
    QGridLayout *gridLayout_3;
    QFrame *frame_2;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_9;
    QScrollArea *scrollArea_4;
    QWidget *scrollAreaWidgetContents_4;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QFrame *frame_31;
    QGridLayout *gridLayout_6;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QPushButton *newOrder;
    QLabel *label;
    QComboBox *comboBox_bouqete;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QDateEdit *dateEdit_2;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_sex;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(902, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(1920, 1080));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #eaeaea;"));
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        QSizePolicy sizePolicy(QSizePolicy::Policy::MinimumExpanding, QSizePolicy::Policy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        centralwidget->setMaximumSize(QSize(1200000, 100000));
        centralwidget->setMouseTracking(false);
        centralwidget->setLayoutDirection(Qt::LeftToRight);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iconmenu = new QWidget(centralwidget);
        iconmenu->setObjectName("iconmenu");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Maximum, QSizePolicy::Policy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(iconmenu->sizePolicy().hasHeightForWidth());
        iconmenu->setSizePolicy(sizePolicy1);
        iconmenu->setMinimumSize(QSize(36, 610));
        iconmenu->setMaximumSize(QSize(36, 2000));
        iconmenu->setToolTipDuration(0);
        iconmenu->setStyleSheet(QString::fromUtf8("background-color: #30343f;"));
        verticalLayout_5 = new QVBoxLayout(iconmenu);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(-1, 0, -1, 0);
        openmenu = new QPushButton(iconmenu);
        openmenu->setObjectName("openmenu");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(openmenu->sizePolicy().hasHeightForWidth());
        openmenu->setSizePolicy(sizePolicy2);
        openmenu->setMinimumSize(QSize(37, 36));
        openmenu->setMaximumSize(QSize(37, 35));
        openmenu->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icons/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon.addFile(QString::fromUtf8(":/new/icon/icons/menu2.png"), QSize(), QIcon::Normal, QIcon::On);
        openmenu->setIcon(icon);
        openmenu->setIconSize(QSize(25, 25));
        openmenu->setCheckable(true);
        openmenu->setAutoExclusive(true);

        verticalLayout->addWidget(openmenu);

        inventory_2 = new QPushButton(iconmenu);
        inventory_2->setObjectName("inventory_2");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(inventory_2->sizePolicy().hasHeightForWidth());
        inventory_2->setSizePolicy(sizePolicy3);
        inventory_2->setMinimumSize(QSize(37, 36));
        inventory_2->setMaximumSize(QSize(37, 35));
        inventory_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icons/sklad.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon1.addFile(QString::fromUtf8(":/new/icon/icons/sklad2.png"), QSize(), QIcon::Normal, QIcon::On);
        inventory_2->setIcon(icon1);
        inventory_2->setIconSize(QSize(25, 25));
        inventory_2->setCheckable(true);
        inventory_2->setAutoExclusive(true);

        verticalLayout->addWidget(inventory_2);

        flowers_2 = new QPushButton(iconmenu);
        flowers_2->setObjectName("flowers_2");
        sizePolicy3.setHeightForWidth(flowers_2->sizePolicy().hasHeightForWidth());
        flowers_2->setSizePolicy(sizePolicy3);
        flowers_2->setMinimumSize(QSize(37, 36));
        flowers_2->setMaximumSize(QSize(37, 35));
        flowers_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icons/flowers.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon2.addFile(QString::fromUtf8(":/new/icon/icons/flowers2.png"), QSize(), QIcon::Normal, QIcon::On);
        flowers_2->setIcon(icon2);
        flowers_2->setIconSize(QSize(25, 25));
        flowers_2->setCheckable(true);
        flowers_2->setAutoExclusive(true);

        verticalLayout->addWidget(flowers_2);

        clients_2 = new QPushButton(iconmenu);
        clients_2->setObjectName("clients_2");
        sizePolicy3.setHeightForWidth(clients_2->sizePolicy().hasHeightForWidth());
        clients_2->setSizePolicy(sizePolicy3);
        clients_2->setMinimumSize(QSize(37, 36));
        clients_2->setMaximumSize(QSize(37, 37));
        clients_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icons/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon3.addFile(QString::fromUtf8(":/new/icon/icons/clients2.png"), QSize(), QIcon::Normal, QIcon::On);
        clients_2->setIcon(icon3);
        clients_2->setIconSize(QSize(25, 25));
        clients_2->setCheckable(true);
        clients_2->setAutoExclusive(true);

        verticalLayout->addWidget(clients_2);

        stats_2 = new QPushButton(iconmenu);
        stats_2->setObjectName("stats_2");
        sizePolicy3.setHeightForWidth(stats_2->sizePolicy().hasHeightForWidth());
        stats_2->setSizePolicy(sizePolicy3);
        stats_2->setMinimumSize(QSize(37, 36));
        stats_2->setMaximumSize(QSize(37, 35));
        stats_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icons/stats.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon4.addFile(QString::fromUtf8(":/new/icon/icons/stats2.png"), QSize(), QIcon::Normal, QIcon::On);
        stats_2->setIcon(icon4);
        stats_2->setIconSize(QSize(25, 25));
        stats_2->setCheckable(true);
        stats_2->setAutoExclusive(true);

        verticalLayout->addWidget(stats_2);

        orders_2 = new QPushButton(iconmenu);
        orders_2->setObjectName("orders_2");
        sizePolicy3.setHeightForWidth(orders_2->sizePolicy().hasHeightForWidth());
        orders_2->setSizePolicy(sizePolicy3);
        orders_2->setMinimumSize(QSize(37, 36));
        orders_2->setMaximumSize(QSize(37, 35));
        orders_2->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fff;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/orders2.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/orders.png"), QSize(), QIcon::Normal, QIcon::On);
        orders_2->setIcon(icon5);
        orders_2->setIconSize(QSize(25, 25));
        orders_2->setCheckable(true);
        orders_2->setAutoExclusive(true);

        verticalLayout->addWidget(orders_2);


        verticalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 388, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);


        verticalLayout_5->addLayout(verticalLayout_3);


        horizontalLayout->addWidget(iconmenu);

        fullmenu = new QWidget(centralwidget);
        fullmenu->setObjectName("fullmenu");
        fullmenu->setEnabled(true);
        sizePolicy1.setHeightForWidth(fullmenu->sizePolicy().hasHeightForWidth());
        fullmenu->setSizePolicy(sizePolicy1);
        fullmenu->setMinimumSize(QSize(0, 630));
        fullmenu->setMaximumSize(QSize(16777215, 2000));
        fullmenu->setStyleSheet(QString::fromUtf8("background-color: #30343f;\n"
"text-align: left;\n"
"padding-left: 6px;\n"
"\n"
""));
        verticalLayout_4 = new QVBoxLayout(fullmenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 0, -1, 0);
        closemenu = new QPushButton(fullmenu);
        closemenu->setObjectName("closemenu");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(closemenu->sizePolicy().hasHeightForWidth());
        closemenu->setSizePolicy(sizePolicy4);
        closemenu->setMinimumSize(QSize(0, 36));
        closemenu->setMaximumSize(QSize(170, 36));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(12);
        closemenu->setFont(font);
        closemenu->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/icon/icons/omenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon6.addFile(QString::fromUtf8(":/new/icon/icons/omenu2.png"), QSize(), QIcon::Normal, QIcon::On);
        closemenu->setIcon(icon6);
        closemenu->setIconSize(QSize(25, 25));
        closemenu->setCheckable(true);
        closemenu->setAutoExclusive(true);

        verticalLayout_2->addWidget(closemenu);

        inventory = new QPushButton(fullmenu);
        inventory->setObjectName("inventory");
        sizePolicy4.setHeightForWidth(inventory->sizePolicy().hasHeightForWidth());
        inventory->setSizePolicy(sizePolicy4);
        inventory->setMinimumSize(QSize(35, 36));
        inventory->setMaximumSize(QSize(170, 36));
        inventory->setFont(font);
        inventory->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        inventory->setIcon(icon1);
        inventory->setIconSize(QSize(25, 25));
        inventory->setCheckable(true);
        inventory->setAutoExclusive(true);

        verticalLayout_2->addWidget(inventory);

        flowers = new QPushButton(fullmenu);
        flowers->setObjectName("flowers");
        sizePolicy4.setHeightForWidth(flowers->sizePolicy().hasHeightForWidth());
        flowers->setSizePolicy(sizePolicy4);
        flowers->setMinimumSize(QSize(35, 36));
        flowers->setMaximumSize(QSize(170, 36));
        flowers->setFont(font);
        flowers->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        flowers->setIcon(icon2);
        flowers->setIconSize(QSize(25, 25));
        flowers->setCheckable(true);
        flowers->setAutoExclusive(true);

        verticalLayout_2->addWidget(flowers);

        clients = new QPushButton(fullmenu);
        clients->setObjectName("clients");
        sizePolicy4.setHeightForWidth(clients->sizePolicy().hasHeightForWidth());
        clients->setSizePolicy(sizePolicy4);
        clients->setMinimumSize(QSize(35, 36));
        clients->setMaximumSize(QSize(170, 36));
        clients->setFont(font);
        clients->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        clients->setIcon(icon3);
        clients->setIconSize(QSize(25, 25));
        clients->setCheckable(true);
        clients->setAutoExclusive(true);

        verticalLayout_2->addWidget(clients);

        stats = new QPushButton(fullmenu);
        stats->setObjectName("stats");
        sizePolicy4.setHeightForWidth(stats->sizePolicy().hasHeightForWidth());
        stats->setSizePolicy(sizePolicy4);
        stats->setMinimumSize(QSize(35, 36));
        stats->setMaximumSize(QSize(170, 36));
        stats->setFont(font);
        stats->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        stats->setIcon(icon4);
        stats->setIconSize(QSize(25, 25));
        stats->setCheckable(true);
        stats->setChecked(false);
        stats->setAutoExclusive(true);

        verticalLayout_2->addWidget(stats);

        orders = new QPushButton(fullmenu);
        orders->setObjectName("orders");
        sizePolicy4.setHeightForWidth(orders->sizePolicy().hasHeightForWidth());
        orders->setSizePolicy(sizePolicy4);
        orders->setMinimumSize(QSize(35, 36));
        orders->setMaximumSize(QSize(170, 36));
        orders->setFont(font);
        orders->setStyleSheet(QString::fromUtf8("\n"
"QPushButton\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"padding-top: 1px;\n"
"}\n"
"QPushButton::checked\n"
"{\n"
"float: left;\n"
"border: 0;\n"
"background: #fafaff;\n"
"color:#30343f;\n"
"padding-top: 1px;\n"
"}\n"
"\n"
"\n"
""));
        orders->setIcon(icon5);
        orders->setIconSize(QSize(25, 25));
        orders->setCheckable(true);
        orders->setChecked(false);
        orders->setAutoExclusive(true);

        verticalLayout_2->addWidget(orders);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 388, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);


        horizontalLayout->addWidget(fullmenu);

        content = new QWidget(centralwidget);
        content->setObjectName("content");
        sizePolicy.setHeightForWidth(content->sizePolicy().hasHeightForWidth());
        content->setSizePolicy(sizePolicy);
        content->setMinimumSize(QSize(623, 600));
        content->setMaximumSize(QSize(100000, 100000));
        content->setStyleSheet(QString::fromUtf8("background-color: #fafaff;"));
        gridLayout = new QGridLayout(content);
        gridLayout->setSpacing(0);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        contentWidget = new QStackedWidget(content);
        contentWidget->setObjectName("contentWidget");
        sizePolicy.setHeightForWidth(contentWidget->sizePolicy().hasHeightForWidth());
        contentWidget->setSizePolicy(sizePolicy);
        Sklad = new QWidget();
        Sklad->setObjectName("Sklad");
        verticalLayout_6 = new QVBoxLayout(Sklad);
        verticalLayout_6->setObjectName("verticalLayout_6");
        scrollArea = new QScrollArea(Sklad);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setStyleSheet(QString::fromUtf8("border: none;"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 706, 554));
        bouqetContentLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        bouqetContentLayout->setSpacing(6);
        bouqetContentLayout->setObjectName("bouqetContentLayout");
        verticalSpacer_3 = new QSpacerItem(20, 1000, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        bouqetContentLayout->addItem(verticalSpacer_3);

        AddingBouqetFrame = new QFrame(scrollAreaWidgetContents_2);
        AddingBouqetFrame->setObjectName("AddingBouqetFrame");
        AddingBouqetFrame->setStyleSheet(QString::fromUtf8("QFrame {border: solid; border-width: 2px;background-color: #30343f;border-color: #30343f;border-radius: 4px;}\n"
"QLineEdit,QComboBox,QSpinBox {background-color: #fafaff; font-size: 12px; color: #30343f; border-radius: 2px;}\n"
""));
        AddingBouqetFrame->setFrameShape(QFrame::StyledPanel);
        AddingBouqetFrame->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(AddingBouqetFrame);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        NewBouqetName = new QLineEdit(AddingBouqetFrame);
        NewBouqetName->setObjectName("NewBouqetName");
        NewBouqetName->setMinimumSize(QSize(150, 0));
        NewBouqetName->setMaximumSize(QSize(150, 20));

        horizontalLayout_6->addWidget(NewBouqetName);

        frame_3 = new QFrame(AddingBouqetFrame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(150, 0));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        addF = new QVBoxLayout(frame_3);
        addF->setSpacing(0);
        addF->setObjectName("addF");
        addF->setContentsMargins(0, 0, 0, 0);
        exmpl1 = new QFrame(frame_3);
        exmpl1->setObjectName("exmpl1");
        exmpl1->setFrameShape(QFrame::StyledPanel);
        exmpl1->setFrameShadow(QFrame::Raised);
        exmplLayout = new QHBoxLayout(exmpl1);
        exmplLayout->setSpacing(3);
        exmplLayout->setObjectName("exmplLayout");
        exmplLayout->setContentsMargins(0, 0, 0, 0);
        flowersComboBox1 = new QComboBox(exmpl1);
        flowersComboBox1->setObjectName("flowersComboBox1");
        sizePolicy3.setHeightForWidth(flowersComboBox1->sizePolicy().hasHeightForWidth());
        flowersComboBox1->setSizePolicy(sizePolicy3);
        flowersComboBox1->setMinimumSize(QSize(100, 20));
        flowersComboBox1->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bahnschrift")});
        flowersComboBox1->setFont(font1);
        flowersComboBox1->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 255);"));
        flowersComboBox1->setDuplicatesEnabled(false);
        flowersComboBox1->setFrame(true);

        exmplLayout->addWidget(flowersComboBox1);

        spinBox = new QSpinBox(exmpl1);
        spinBox->setObjectName("spinBox");
        spinBox->setMinimumSize(QSize(50, 20));
        spinBox->setFont(font1);
        spinBox->setMinimum(1);

        exmplLayout->addWidget(spinBox);

        pushButton1 = new QPushButton(exmpl1);
        pushButton1->setObjectName("pushButton1");
        sizePolicy3.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy3);
        pushButton1->setMinimumSize(QSize(0, 0));
        pushButton1->setMaximumSize(QSize(20, 20));

        exmplLayout->addWidget(pushButton1);


        addF->addWidget(exmpl1);


        horizontalLayout_6->addWidget(frame_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        accept = new QPushButton(AddingBouqetFrame);
        accept->setObjectName("accept");
        accept->setMaximumSize(QSize(16777215, 20));
        accept->setFont(font1);
        accept->setStyleSheet(QString::fromUtf8("background-color: #fafaff; font-size: 12px; color: #30343f; border-radius: 2px;"));

        horizontalLayout_6->addWidget(accept);


        bouqetContentLayout->addWidget(AddingBouqetFrame);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_6->addWidget(scrollArea);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_3 = new QPushButton(Sklad);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(100, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bahnschrift")});
        font2.setPointSize(13);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"float: center;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"}"));

        horizontalLayout_5->addWidget(pushButton_3);


        verticalLayout_6->addLayout(horizontalLayout_5);

        contentWidget->addWidget(Sklad);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        gridLayout_2 = new QGridLayout(page_3);
        gridLayout_2->setObjectName("gridLayout_2");
        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setObjectName("verticalLayout_7");
        info = new QTableView(page_3);
        info->setObjectName("info");
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);
        info->setFont(font1);
        info->setStyleSheet(QString::fromUtf8("QTableView {\n"
"         color: #30343f;\n"
"	font-size: 13px;\n"
"         background-color: #fafaff;\n"
"         selection-color: #fafaff;\n"
"         selection-background-color: #30343f;\n"
"    /*border: 2px groove gray;*/\n"
"    border-radius: 0px;\n"
"    padding: 2px 4px;\n"
"}\n"
"QTableView QTableCornerButton::section {\n"
"    background-color: #30343f;\n"
" }\n"
"QHeaderView::section {\n"
"    color:  #fafaff;\n"
"	font-size: 13px;\n"
"    background-color:  #30343f;\n"
"    border: 5px solid #30343f;\n"
"    border-radius:0px;\n"
"    border-color:  #30343f;\n"
"} "));
        info->setGridStyle(Qt::SolidLine);

        verticalLayout_7->addWidget(info);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSpacer_2 = new QSpacerItem(208, 19, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        but_AddFlower = new QPushButton(page_3);
        but_AddFlower->setObjectName("but_AddFlower");
        but_AddFlower->setMinimumSize(QSize(200, 0));
        but_AddFlower->setFont(font2);
        but_AddFlower->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"float: center;\n"
"border: 0;\n"
"background: #30343f;\n"
"color:#fafaff;\n"
"}"));

        horizontalLayout_4->addWidget(but_AddFlower);

        horizontalSpacer_3 = new QSpacerItem(208, 19, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        verticalLayout_7->addLayout(horizontalLayout_4);


        gridLayout_2->addLayout(verticalLayout_7, 0, 0, 1, 1);

        contentWidget->addWidget(page_3);
        page_1 = new QWidget();
        page_1->setObjectName("page_1");
        page_1->setStyleSheet(QString::fromUtf8("border: none;"));
        horizontalLayout_2 = new QHBoxLayout(page_1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        scrollArea_2 = new QScrollArea(page_1);
        scrollArea_2->setObjectName("scrollArea_2");
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 706, 582));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_8->setObjectName("verticalLayout_8");
        frame = new QFrame(scrollAreaWidgetContents);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout_8->addWidget(frame);

        scrollArea_2->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea_2);

        contentWidget->addWidget(page_1);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        horizontalLayout_3 = new QHBoxLayout(page_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        scrollArea_3 = new QScrollArea(page_2);
        scrollArea_3->setObjectName("scrollArea_3");
        scrollArea_3->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 704, 580));
        gridLayout_3 = new QGridLayout(scrollAreaWidgetContents_3);
        gridLayout_3->setObjectName("gridLayout_3");
        frame_2 = new QFrame(scrollAreaWidgetContents_3);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);

        gridLayout_3->addWidget(frame_2, 0, 0, 1, 1);

        scrollArea_3->setWidget(scrollAreaWidgetContents_3);

        horizontalLayout_3->addWidget(scrollArea_3);

        contentWidget->addWidget(page_2);
        page_5 = new QWidget();
        page_5->setObjectName("page_5");
        verticalLayout_9 = new QVBoxLayout(page_5);
        verticalLayout_9->setObjectName("verticalLayout_9");
        scrollArea_4 = new QScrollArea(page_5);
        scrollArea_4->setObjectName("scrollArea_4");
        scrollArea_4->setWidgetResizable(true);
        scrollAreaWidgetContents_4 = new QWidget();
        scrollAreaWidgetContents_4->setObjectName("scrollAreaWidgetContents_4");
        scrollAreaWidgetContents_4->setGeometry(QRect(0, 0, 704, 474));
        gridLayout_5 = new QGridLayout(scrollAreaWidgetContents_4);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");

        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        scrollArea_4->setWidget(scrollAreaWidgetContents_4);

        verticalLayout_9->addWidget(scrollArea_4);

        frame_31 = new QFrame(page_5);
        frame_31->setObjectName("frame_31");
        frame_31->setMinimumSize(QSize(0, 100));
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        gridLayout_6 = new QGridLayout(frame_31);
        gridLayout_6->setObjectName("gridLayout_6");
        lineEdit = new QLineEdit(frame_31);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit, 1, 1, 1, 1);

        label_2 = new QLabel(frame_31);
        label_2->setObjectName("label_2");
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_2, 0, 2, 1, 1);

        lineEdit_3 = new QLineEdit(frame_31);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_3, 1, 3, 1, 1);

        label_3 = new QLabel(frame_31);
        label_3->setObjectName("label_3");
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_3, 0, 3, 1, 1);

        newOrder = new QPushButton(frame_31);
        newOrder->setObjectName("newOrder");

        gridLayout_6->addWidget(newOrder, 4, 2, 1, 2);

        label = new QLabel(frame_31);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777212, 15));
        label->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label, 0, 1, 1, 1);

        comboBox_bouqete = new QComboBox(frame_31);
        comboBox_bouqete->setObjectName("comboBox_bouqete");
        comboBox_bouqete->setEditable(true);

        gridLayout_6->addWidget(comboBox_bouqete, 4, 1, 1, 1);

        lineEdit_2 = new QLineEdit(frame_31);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setClearButtonEnabled(true);

        gridLayout_6->addWidget(lineEdit_2, 1, 2, 1, 1);

        label_6 = new QLabel(frame_31);
        label_6->setObjectName("label_6");
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_6->addWidget(label_6, 4, 4, 1, 1);

        dateEdit_2 = new QDateEdit(frame_31);
        dateEdit_2->setObjectName("dateEdit_2");

        gridLayout_6->addWidget(dateEdit_2, 4, 5, 1, 1);

        dateEdit = new QDateEdit(frame_31);
        dateEdit->setObjectName("dateEdit");

        gridLayout_6->addWidget(dateEdit, 1, 4, 1, 1);

        label_4 = new QLabel(frame_31);
        label_4->setObjectName("label_4");
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_4, 0, 4, 1, 1);

        label_5 = new QLabel(frame_31);
        label_5->setObjectName("label_5");
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_6->addWidget(label_5, 0, 5, 1, 1);

        comboBox_sex = new QComboBox(frame_31);
        comboBox_sex->setObjectName("comboBox_sex");

        gridLayout_6->addWidget(comboBox_sex, 1, 5, 1, 1);


        verticalLayout_9->addWidget(frame_31);

        contentWidget->addWidget(page_5);

        gridLayout->addWidget(contentWidget, 0, 1, 1, 1);


        horizontalLayout->addWidget(content);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(openmenu, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::hide));
        QObject::connect(closemenu, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::show));
        QObject::connect(stats_2, &QPushButton::toggled, stats, &QPushButton::setChecked);
        QObject::connect(flowers_2, &QPushButton::toggled, flowers, &QPushButton::setChecked);
        QObject::connect(closemenu, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::hide));
        QObject::connect(flowers, &QPushButton::toggled, flowers_2, &QPushButton::setChecked);
        QObject::connect(openmenu, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::show));
        QObject::connect(inventory_2, &QPushButton::toggled, inventory, &QPushButton::setChecked);
        QObject::connect(closemenu, &QPushButton::toggled, openmenu, &QPushButton::setChecked);
        QObject::connect(openmenu, &QPushButton::toggled, closemenu, &QPushButton::setChecked);
        QObject::connect(stats, &QPushButton::toggled, stats_2, &QPushButton::setChecked);
        QObject::connect(clients_2, &QPushButton::toggled, clients, &QPushButton::setChecked);
        QObject::connect(clients, &QPushButton::toggled, clients_2, &QPushButton::setChecked);
        QObject::connect(inventory, &QPushButton::toggled, inventory_2, &QPushButton::setChecked);

        contentWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Flower", nullptr));
        openmenu->setText(QString());
        inventory_2->setText(QString());
        flowers_2->setText(QString());
        clients_2->setText(QString());
        stats_2->setText(QString());
        orders_2->setText(QString());
        closemenu->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\274\320\265\320\275\321\216", nullptr));
        inventory->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        flowers->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\272\320\265\321\202\321\213", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        stats->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        orders->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\320\260\320\267\321\213", nullptr));
        NewBouqetName->setPlaceholderText(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\275\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\261\321\203\320\272\320\265\321\202\320\260", nullptr));
        pushButton1->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        accept->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\270\320\275\321\217\321\202\321\214", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        but_AddFlower->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \320\277\320\276\320\267\320\270\321\206\320\270\321\216", nullptr));
        lineEdit->setInputMask(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\230\320\274\321\217", nullptr));
        lineEdit_3->setInputMask(QString());
        lineEdit_3->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        newOrder->setText(QCoreApplication::translate("MainWindow", "\320\236\321\204\320\276\321\200\320\274\320\270\321\202\321\214 \320\267\320\260\320\272\320\260\320\267", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        comboBox_bouqete->setCurrentText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\261\321\203\320\272\320\265\321\202", nullptr));
        lineEdit_2->setInputMask(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\320\263\320\276\320\264\320\275\321\217\321\210\320\275\321\217\321\217 \320\264\320\260\321\202\320\260:", nullptr));
        dateEdit_2->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd-MM-yyyy", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("MainWindow", "dd-MM-yyyy", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \321\200\320\276\320\266\320\264\320\265\320\275\320\270\321\217", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
