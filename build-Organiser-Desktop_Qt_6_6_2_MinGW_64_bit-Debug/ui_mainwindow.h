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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *iconmenu;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_5;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QWidget *fullmenu;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QSpacerItem *verticalSpacer_2;
    QWidget *content;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(800, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(191, 189, 190);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        iconmenu = new QWidget(centralwidget);
        iconmenu->setObjectName("iconmenu");
        iconmenu->setGeometry(QRect(12, 12, 41, 581));
        verticalLayout_3 = new QVBoxLayout(iconmenu);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        pushButton_5 = new QPushButton(iconmenu);
        pushButton_5->setObjectName("pushButton_5");
        pushButton_5->setMinimumSize(QSize(35, 35));
        pushButton_5->setMaximumSize(QSize(35, 35));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icon/icons/menu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon);
        pushButton_5->setIconSize(QSize(25, 25));
        pushButton_5->setCheckable(true);
        pushButton_5->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_5);

        pushButton = new QPushButton(iconmenu);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(35, 35));
        pushButton->setMaximumSize(QSize(35, 35));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/icon/icons/sklad.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        pushButton->setCheckable(true);
        pushButton->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(iconmenu);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(35, 35));
        pushButton_2->setMaximumSize(QSize(35, 35));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/icon/icons/flowers.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon2);
        pushButton_2->setIconSize(QSize(25, 25));
        pushButton_2->setCheckable(true);
        pushButton_2->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(iconmenu);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMinimumSize(QSize(35, 35));
        pushButton_3->setMaximumSize(QSize(35, 35));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/new/icon/icons/clients.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon3);
        pushButton_3->setIconSize(QSize(25, 25));
        pushButton_3->setCheckable(true);
        pushButton_3->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(iconmenu);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setMinimumSize(QSize(35, 35));
        pushButton_4->setMaximumSize(QSize(35, 35));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/icon/icons/stats.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon4);
        pushButton_4->setIconSize(QSize(25, 25));
        pushButton_4->setCheckable(true);
        pushButton_4->setAutoExclusive(true);

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 399, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        fullmenu = new QWidget(centralwidget);
        fullmenu->setObjectName("fullmenu");
        fullmenu->setEnabled(true);
        fullmenu->setGeometry(QRect(10, 10, 144, 581));
        verticalLayout_4 = new QVBoxLayout(fullmenu);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_6 = new QPushButton(fullmenu);
        pushButton_6->setObjectName("pushButton_6");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton_6->sizePolicy().hasHeightForWidth());
        pushButton_6->setSizePolicy(sizePolicy);
        pushButton_6->setMinimumSize(QSize(0, 35));
        pushButton_6->setMaximumSize(QSize(170, 35));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bahnschrift")});
        font.setPointSize(12);
        pushButton_6->setFont(font);
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/icon/icons/omenu.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setIconSize(QSize(25, 25));
        pushButton_6->setCheckable(true);
        pushButton_6->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_6);

        pushButton_7 = new QPushButton(fullmenu);
        pushButton_7->setObjectName("pushButton_7");
        sizePolicy.setHeightForWidth(pushButton_7->sizePolicy().hasHeightForWidth());
        pushButton_7->setSizePolicy(sizePolicy);
        pushButton_7->setMinimumSize(QSize(35, 35));
        pushButton_7->setMaximumSize(QSize(170, 35));
        pushButton_7->setFont(font);
        pushButton_7->setIcon(icon1);
        pushButton_7->setIconSize(QSize(25, 25));
        pushButton_7->setCheckable(true);
        pushButton_7->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(fullmenu);
        pushButton_8->setObjectName("pushButton_8");
        sizePolicy.setHeightForWidth(pushButton_8->sizePolicy().hasHeightForWidth());
        pushButton_8->setSizePolicy(sizePolicy);
        pushButton_8->setMinimumSize(QSize(35, 35));
        pushButton_8->setMaximumSize(QSize(170, 35));
        pushButton_8->setFont(font);
        pushButton_8->setIcon(icon2);
        pushButton_8->setIconSize(QSize(25, 25));
        pushButton_8->setCheckable(true);
        pushButton_8->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(fullmenu);
        pushButton_9->setObjectName("pushButton_9");
        sizePolicy.setHeightForWidth(pushButton_9->sizePolicy().hasHeightForWidth());
        pushButton_9->setSizePolicy(sizePolicy);
        pushButton_9->setMinimumSize(QSize(35, 35));
        pushButton_9->setMaximumSize(QSize(170, 35));
        pushButton_9->setFont(font);
        pushButton_9->setIcon(icon3);
        pushButton_9->setIconSize(QSize(25, 25));
        pushButton_9->setCheckable(true);
        pushButton_9->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(fullmenu);
        pushButton_10->setObjectName("pushButton_10");
        sizePolicy.setHeightForWidth(pushButton_10->sizePolicy().hasHeightForWidth());
        pushButton_10->setSizePolicy(sizePolicy);
        pushButton_10->setMinimumSize(QSize(35, 35));
        pushButton_10->setMaximumSize(QSize(170, 35));
        pushButton_10->setFont(font);
        pushButton_10->setIcon(icon4);
        pushButton_10->setIconSize(QSize(25, 25));
        pushButton_10->setCheckable(true);
        pushButton_10->setAutoExclusive(true);

        verticalLayout_2->addWidget(pushButton_10);


        verticalLayout_4->addLayout(verticalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 401, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_4->addItem(verticalSpacer_2);

        content = new QWidget(centralwidget);
        content->setObjectName("content");
        content->setGeometry(QRect(230, 10, 561, 581));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);
        QObject::connect(pushButton_5, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::show));
        QObject::connect(pushButton_5, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::hide));
        QObject::connect(pushButton_6, &QPushButton::clicked, iconmenu, qOverload<>(&QWidget::show));
        QObject::connect(pushButton_6, &QPushButton::clicked, fullmenu, qOverload<>(&QWidget::hide));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_5->setText(QString());
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_6->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214 \320\274\320\265\320\275\321\216", nullptr));
        pushButton_7->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\273\320\260\320\264", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\272\320\265\321\202\321\213", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\320\232\320\273\320\270\320\265\320\275\321\202\321\213", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
