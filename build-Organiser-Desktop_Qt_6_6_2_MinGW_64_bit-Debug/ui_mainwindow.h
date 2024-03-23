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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *iconmenu;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *openmenu;
    QPushButton *inventory_2;
    QPushButton *flowers_2;
    QPushButton *clients_2;
    QPushButton *stats_2;
    QWidget *fullmenu;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *closemenu;
    QPushButton *inventory;
    QPushButton *flowers;
    QPushButton *clients;
    QPushButton *stats;
    QSpacerItem *verticalSpacer_2;
    QStackedWidget *content;
    QWidget *page_3;
    QListWidget *listWidget;
    QWidget *page_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setMaximumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #eaeaea;"));
        MainWindow->setTabShape(QTabWidget::Triangular);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(250, 250, 255);"));
        iconmenu = new QWidget(centralwidget);
        iconmenu->setObjectName("iconmenu");
        iconmenu->setGeometry(QRect(-1, -7, 38, 607));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(iconmenu->sizePolicy().hasHeightForWidth());
        iconmenu->setSizePolicy(sizePolicy);
        iconmenu->setMaximumSize(QSize(16777215, 2000));
        iconmenu->setToolTipDuration(0);
        iconmenu->setStyleSheet(QString::fromUtf8("background-color: #30343f;"));
        layoutWidget = new QWidget(iconmenu);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(1, 1, 39, 203));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 4, 0, 0);
        openmenu = new QPushButton(layoutWidget);
        openmenu->setObjectName("openmenu");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(openmenu->sizePolicy().hasHeightForWidth());
        openmenu->setSizePolicy(sizePolicy1);
        openmenu->setMinimumSize(QSize(37, 37));
        openmenu->setMaximumSize(QSize(37, 37));
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

        inventory_2 = new QPushButton(layoutWidget);
        inventory_2->setObjectName("inventory_2");
        inventory_2->setMinimumSize(QSize(37, 37));
        inventory_2->setMaximumSize(QSize(37, 37));
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

        flowers_2 = new QPushButton(layoutWidget);
        flowers_2->setObjectName("flowers_2");
        flowers_2->setMinimumSize(QSize(37, 37));
        flowers_2->setMaximumSize(QSize(37, 37));
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

        clients_2 = new QPushButton(layoutWidget);
        clients_2->setObjectName("clients_2");
        clients_2->setMinimumSize(QSize(37, 37));
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

        stats_2 = new QPushButton(layoutWidget);
        stats_2->setObjectName("stats_2");
        stats_2->setMinimumSize(QSize(37, 37));
        stats_2->setMaximumSize(QSize(37, 37));
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

        fullmenu = new QWidget(centralwidget);
        fullmenu->setObjectName("fullmenu");
        fullmenu->setEnabled(true);
        fullmenu->setGeometry(QRect(-1, -7, 141, 607));
        sizePolicy.setHeightForWidth(fullmenu->sizePolicy().hasHeightForWidth());
        fullmenu->setSizePolicy(sizePolicy);
        fullmenu->setMaximumSize(QSize(16777215, 2000));
        fullmenu->setStyleSheet(QString::fromUtf8("background-color: #30343f;"));
        verticalLayout_4 = new QVBoxLayout(fullmenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 1, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(-1, 6, -1, 0);
        closemenu = new QPushButton(fullmenu);
        closemenu->setObjectName("closemenu");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(closemenu->sizePolicy().hasHeightForWidth());
        closemenu->setSizePolicy(sizePolicy2);
        closemenu->setMinimumSize(QSize(0, 37));
        closemenu->setMaximumSize(QSize(170, 37));
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
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/omenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/omenu2.png"), QSize(), QIcon::Normal, QIcon::On);
        closemenu->setIcon(icon5);
        closemenu->setIconSize(QSize(25, 25));
        closemenu->setCheckable(true);
        closemenu->setAutoExclusive(true);

        verticalLayout_2->addWidget(closemenu);

        inventory = new QPushButton(fullmenu);
        inventory->setObjectName("inventory");
        sizePolicy2.setHeightForWidth(inventory->sizePolicy().hasHeightForWidth());
        inventory->setSizePolicy(sizePolicy2);
        inventory->setMinimumSize(QSize(35, 37));
        inventory->setMaximumSize(QSize(170, 37));
        inventory->setFont(font);
        inventory->setStyleSheet(QString::fromUtf8("\n"
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
        inventory->setIcon(icon1);
        inventory->setIconSize(QSize(25, 25));
        inventory->setCheckable(true);
        inventory->setAutoExclusive(true);

        verticalLayout_2->addWidget(inventory);

        flowers = new QPushButton(fullmenu);
        flowers->setObjectName("flowers");
        sizePolicy2.setHeightForWidth(flowers->sizePolicy().hasHeightForWidth());
        flowers->setSizePolicy(sizePolicy2);
        flowers->setMinimumSize(QSize(35, 37));
        flowers->setMaximumSize(QSize(170, 37));
        flowers->setFont(font);
        flowers->setStyleSheet(QString::fromUtf8("\n"
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
        flowers->setIcon(icon2);
        flowers->setIconSize(QSize(25, 25));
        flowers->setCheckable(true);
        flowers->setAutoExclusive(true);

        verticalLayout_2->addWidget(flowers);

        clients = new QPushButton(fullmenu);
        clients->setObjectName("clients");
        sizePolicy2.setHeightForWidth(clients->sizePolicy().hasHeightForWidth());
        clients->setSizePolicy(sizePolicy2);
        clients->setMinimumSize(QSize(35, 37));
        clients->setMaximumSize(QSize(170, 37));
        clients->setFont(font);
        clients->setStyleSheet(QString::fromUtf8("\n"
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
        clients->setIcon(icon3);
        clients->setIconSize(QSize(25, 25));
        clients->setCheckable(true);
        clients->setAutoExclusive(true);

        verticalLayout_2->addWidget(clients);

        stats = new QPushButton(fullmenu);
        stats->setObjectName("stats");
        sizePolicy2.setHeightForWidth(stats->sizePolicy().hasHeightForWidth());
        stats->setSizePolicy(sizePolicy2);
        stats->setMinimumSize(QSize(35, 37));
        stats->setMaximumSize(QSize(170, 37));
        stats->setFont(font);
        stats->setStyleSheet(QString::fromUtf8("\n"
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
        stats->setIcon(icon4);
        stats->setIconSize(QSize(25, 25));
        stats->setCheckable(true);
        stats->setAutoExclusive(true);

        verticalLayout_2->addWidget(stats);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 409, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        content = new QStackedWidget(centralwidget);
        content->setObjectName("content");
        content->setGeometry(QRect(38, 0, 761, 601));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        listWidget = new QListWidget(page_3);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(10, 10, 741, 581));
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(listWidget->sizePolicy().hasHeightForWidth());
        listWidget->setSizePolicy(sizePolicy3);
        content->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName("page_4");
        content->addWidget(page_4);
        MainWindow->setCentralWidget(centralwidget);
        fullmenu->raise();
        iconmenu->raise();
        content->raise();

        retranslateUi(MainWindow);
        QObject::connect(openmenu, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::show));
        QObject::connect(openmenu, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::hide));
        QObject::connect(closemenu, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::show));
        QObject::connect(closemenu, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::hide));
        QObject::connect(inventory_2, &QPushButton::toggled, inventory, &QPushButton::setChecked);
        QObject::connect(flowers_2, &QPushButton::toggled, flowers, &QPushButton::setChecked);
        QObject::connect(clients_2, &QPushButton::toggled, clients, &QPushButton::setChecked);
        QObject::connect(stats_2, &QPushButton::toggled, stats, &QPushButton::setChecked);
        QObject::connect(stats, &QPushButton::toggled, stats_2, &QPushButton::setChecked);
        QObject::connect(clients, &QPushButton::toggled, clients_2, &QPushButton::setChecked);
        QObject::connect(flowers, &QPushButton::toggled, flowers_2, &QPushButton::setChecked);
        QObject::connect(inventory, &QPushButton::toggled, inventory_2, &QPushButton::setChecked);
        QObject::connect(closemenu, &QPushButton::toggled, openmenu, &QPushButton::setChecked);
        QObject::connect(openmenu, &QPushButton::toggled, closemenu, &QPushButton::setChecked);

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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
