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
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
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
    QSpacerItem *verticalSpacer;
    QWidget *fullmenu;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *closemenu;
    QPushButton *inventory;
    QPushButton *flowers;
    QPushButton *clients;
    QPushButton *stats;
    QSpacerItem *verticalSpacer_2;
    QWidget *content;
    QGridLayout *gridLayout;
    QStackedWidget *contentWidget;
    QWidget *page_4;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *bouqetContentLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *bouqetName;
    QLabel *consistof;
    QSpacerItem *horizontalSpacer;
    QLabel *price;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QHBoxLayout *horizontalLayout_4;
    QTableView *info;
    QWidget *page_sklad;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_2;
    QLabel *label;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(891, 600);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/omenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/omenu2.png"), QSize(), QIcon::Normal, QIcon::On);
        closemenu->setIcon(icon5);
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
        stats->setAutoExclusive(true);

        verticalLayout_2->addWidget(stats);


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
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        horizontalLayout_5 = new QHBoxLayout(page_4);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        scrollArea = new QScrollArea(page_4);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 693, 580));
        bouqetContentLayout = new QVBoxLayout(scrollAreaWidgetContents_2);
        bouqetContentLayout->setSpacing(6);
        bouqetContentLayout->setObjectName("bouqetContentLayout");
        frame = new QFrame(scrollAreaWidgetContents_2);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(100, 50));
        frame->setMaximumSize(QSize(10000, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        bouqetName = new QLabel(frame);
        bouqetName->setObjectName("bouqetName");

        horizontalLayout_6->addWidget(bouqetName);

        consistof = new QLabel(frame);
        consistof->setObjectName("consistof");

        horizontalLayout_6->addWidget(consistof);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        price = new QLabel(frame);
        price->setObjectName("price");

        horizontalLayout_6->addWidget(price);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        bouqetContentLayout->addWidget(frame);

        verticalSpacer_3 = new QSpacerItem(20, 1000, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        bouqetContentLayout->addItem(verticalSpacer_3);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_5->addWidget(scrollArea);

        contentWidget->addWidget(page_4);
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        horizontalLayout_4 = new QHBoxLayout(page_3);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        info = new QTableView(page_3);
        info->setObjectName("info");
        sizePolicy.setHeightForWidth(info->sizePolicy().hasHeightForWidth());
        info->setSizePolicy(sizePolicy);

        horizontalLayout_4->addWidget(info);

        contentWidget->addWidget(page_3);
        page_sklad = new QWidget();
        page_sklad->setObjectName("page_sklad");
        horizontalLayout_2 = new QHBoxLayout(page_sklad);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_2 = new QPushButton(page_sklad);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        label = new QLabel(page_sklad);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("background-color:#;"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label);

        contentWidget->addWidget(page_sklad);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        horizontalLayout_3 = new QHBoxLayout(page_2);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(page_2);
        label_2->setObjectName("label_2");
        label_2->setStyleSheet(QString::fromUtf8("background-color:#;"));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_2);

        pushButton = new QPushButton(page_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);

        contentWidget->addWidget(page_2);

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

        contentWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        openmenu->setText(QString());
        inventory_2->setText(QString());
        flowers_2->setText(QString());
        clients_2->setText(QString());
        stats_2->setText(QString());
        closemenu->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\274\320\265\320\275\321\216", nullptr));
        inventory->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        flowers->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\272\320\265\321\202\321\213", nullptr));
        clients->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        stats->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
        bouqetName->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        consistof->setText(QCoreApplication::translate("MainWindow", "Consistof", nullptr));
        price->setText(QCoreApplication::translate("MainWindow", "price", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\272\320\275\320\276\320\277\320\272\320\260 \320\275\320\270\320\272\320\270\321\202\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "page1", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "page2", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\320\236\320\241\320\230 \320\245\320\243\320\231", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
