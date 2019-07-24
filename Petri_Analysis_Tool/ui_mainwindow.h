/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *open_file;
    QAction *test_interface_hide;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *step_result;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *test_interface;
    QWidget *dockWidgetContents_8;
    QWidget *load_widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *clear_01;
    QSpacerItem *horizontalSpacer;
    QPushButton *Load_data;
    QPushButton *load_place;
    QWidget *match_widget;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *clear_02;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *match_begin;
    QHBoxLayout *horizontalLayout_16;
    QLabel *match_state;
    QPushButton *check_state;
    QPushButton *match_place;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *count;
    QSpacerItem *horizontalSpacer_15;
    QLabel *count_num;
    QSpacerItem *horizontalSpacer_10;
    QHBoxLayout *horizontalLayout_7;
    QWidget *step_test;
    QHBoxLayout *horizontalLayout_10;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *clear_03;
    QLabel *label_4;
    QPushButton *begin_single;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *clear_04;
    QLabel *label_5;
    QPushButton *begin_deter;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer;
    QPushButton *read_result;
    QSpacerItem *verticalSpacer_2;
    QWidget *c_step_test;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *clear_05;
    QLabel *label_6;
    QPushButton *begin_c_single;
    QHBoxLayout *horizontalLayout_13;
    QPushButton *clear_06;
    QLabel *label_7;
    QPushButton *begin_c_deter;
    QVBoxLayout *verticalLayout_6;
    QLabel *memory_state;
    QPushButton *read_c_result;
    QPushButton *memory_reset;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_7;
    QLabel *label;
    QSpacerItem *horizontalSpacer_8;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_14;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *suspend;
    QSpacerItem *horizontalSpacer_11;
    QPushButton *Continue;
    QSpacerItem *horizontalSpacer_13;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_15;
    QPushButton *connect;
    QSpacerItem *horizontalSpacer_14;
    QLabel *connect_state;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(921, 407);
        open_file = new QAction(MainWindow);
        open_file->setObjectName(QStringLiteral("open_file"));
        test_interface_hide = new QAction(MainWindow);
        test_interface_hide->setObjectName(QStringLiteral("test_interface_hide"));
        test_interface_hide->setCheckable(true);
        test_interface_hide->setChecked(true);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(-1, -1, 311, 341));
        scrollArea->setMinimumSize(QSize(280, 300));
        scrollArea->setWidgetResizable(true);
        step_result = new QWidget();
        step_result->setObjectName(QStringLiteral("step_result"));
        step_result->setGeometry(QRect(0, 0, 309, 339));
        scrollArea->setWidget(step_result);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 921, 23));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        test_interface = new QDockWidget(MainWindow);
        test_interface->setObjectName(QStringLiteral("test_interface"));
        test_interface->setMinimumSize(QSize(600, 350));
        test_interface->setMaximumSize(QSize(600, 350));
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QStringLiteral("dockWidgetContents_8"));
        load_widget = new QWidget(dockWidgetContents_8);
        load_widget->setObjectName(QStringLiteral("load_widget"));
        load_widget->setGeometry(QRect(20, 40, 222, 111));
        verticalLayout = new QVBoxLayout(load_widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);

        label_2 = new QLabel(load_widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        label_2->setFont(font);

        horizontalLayout_2->addWidget(label_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        clear_01 = new QPushButton(load_widget);
        clear_01->setObjectName(QStringLiteral("clear_01"));

        horizontalLayout->addWidget(clear_01);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        Load_data = new QPushButton(load_widget);
        Load_data->setObjectName(QStringLiteral("Load_data"));

        horizontalLayout->addWidget(Load_data);


        verticalLayout->addLayout(horizontalLayout);

        load_place = new QPushButton(load_widget);
        load_place->setObjectName(QStringLiteral("load_place"));

        verticalLayout->addWidget(load_place);

        match_widget = new QWidget(dockWidgetContents_8);
        match_widget->setObjectName(QStringLiteral("match_widget"));
        match_widget->setGeometry(QRect(20, 160, 231, 162));
        verticalLayout_2 = new QVBoxLayout(match_widget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label_3 = new QLabel(match_widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFont(font);

        horizontalLayout_3->addWidget(label_3);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        clear_02 = new QPushButton(match_widget);
        clear_02->setObjectName(QStringLiteral("clear_02"));

        horizontalLayout_4->addWidget(clear_02);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        match_begin = new QPushButton(match_widget);
        match_begin->setObjectName(QStringLiteral("match_begin"));

        horizontalLayout_4->addWidget(match_begin);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setSpacing(6);
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        match_state = new QLabel(match_widget);
        match_state->setObjectName(QStringLiteral("match_state"));

        horizontalLayout_16->addWidget(match_state);

        check_state = new QPushButton(match_widget);
        check_state->setObjectName(QStringLiteral("check_state"));

        horizontalLayout_16->addWidget(check_state);


        verticalLayout_2->addLayout(horizontalLayout_16);

        match_place = new QPushButton(match_widget);
        match_place->setObjectName(QStringLiteral("match_place"));

        verticalLayout_2->addWidget(match_place);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        count = new QPushButton(match_widget);
        count->setObjectName(QStringLiteral("count"));

        horizontalLayout_6->addWidget(count);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_15);

        count_num = new QLabel(match_widget);
        count_num->setObjectName(QStringLiteral("count_num"));
        count_num->setMinimumSize(QSize(20, 0));

        horizontalLayout_6->addWidget(count_num);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));

        horizontalLayout_6->addLayout(horizontalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_6);

        step_test = new QWidget(dockWidgetContents_8);
        step_test->setObjectName(QStringLiteral("step_test"));
        step_test->setGeometry(QRect(260, 40, 331, 111));
        horizontalLayout_10 = new QHBoxLayout(step_test);
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        clear_03 = new QPushButton(step_test);
        clear_03->setObjectName(QStringLiteral("clear_03"));

        horizontalLayout_8->addWidget(clear_03);

        label_4 = new QLabel(step_test);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_8->addWidget(label_4);

        begin_single = new QPushButton(step_test);
        begin_single->setObjectName(QStringLiteral("begin_single"));

        horizontalLayout_8->addWidget(begin_single);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        clear_04 = new QPushButton(step_test);
        clear_04->setObjectName(QStringLiteral("clear_04"));

        horizontalLayout_9->addWidget(clear_04);

        label_5 = new QLabel(step_test);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_9->addWidget(label_5);

        begin_deter = new QPushButton(step_test);
        begin_deter->setObjectName(QStringLiteral("begin_deter"));

        horizontalLayout_9->addWidget(begin_deter);


        verticalLayout_4->addLayout(horizontalLayout_9);


        horizontalLayout_10->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        read_result = new QPushButton(step_test);
        read_result->setObjectName(QStringLiteral("read_result"));

        verticalLayout_3->addWidget(read_result);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);


        horizontalLayout_10->addLayout(verticalLayout_3);

        c_step_test = new QWidget(dockWidgetContents_8);
        c_step_test->setObjectName(QStringLiteral("c_step_test"));
        c_step_test->setGeometry(QRect(260, 160, 331, 111));
        horizontalLayout_11 = new QHBoxLayout(c_step_test);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        clear_05 = new QPushButton(c_step_test);
        clear_05->setObjectName(QStringLiteral("clear_05"));

        horizontalLayout_12->addWidget(clear_05);

        label_6 = new QLabel(c_step_test);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_12->addWidget(label_6);

        begin_c_single = new QPushButton(c_step_test);
        begin_c_single->setObjectName(QStringLiteral("begin_c_single"));

        horizontalLayout_12->addWidget(begin_c_single);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        clear_06 = new QPushButton(c_step_test);
        clear_06->setObjectName(QStringLiteral("clear_06"));

        horizontalLayout_13->addWidget(clear_06);

        label_7 = new QLabel(c_step_test);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_13->addWidget(label_7);

        begin_c_deter = new QPushButton(c_step_test);
        begin_c_deter->setObjectName(QStringLiteral("begin_c_deter"));

        horizontalLayout_13->addWidget(begin_c_deter);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        memory_state = new QLabel(c_step_test);
        memory_state->setObjectName(QStringLiteral("memory_state"));

        verticalLayout_6->addWidget(memory_state);

        read_c_result = new QPushButton(c_step_test);
        read_c_result->setObjectName(QStringLiteral("read_c_result"));

        verticalLayout_6->addWidget(read_c_result);

        memory_reset = new QPushButton(c_step_test);
        memory_reset->setObjectName(QStringLiteral("memory_reset"));

        verticalLayout_6->addWidget(memory_reset);


        horizontalLayout_11->addLayout(verticalLayout_6);

        layoutWidget = new QWidget(dockWidgetContents_8);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 0, 174, 29));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_7);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(15);
        label->setFont(font1);

        horizontalLayout_5->addWidget(label);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_8);

        layoutWidget1 = new QWidget(dockWidgetContents_8);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(260, 290, 321, 25));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_12);

        suspend = new QPushButton(layoutWidget1);
        suspend->setObjectName(QStringLiteral("suspend"));

        horizontalLayout_14->addWidget(suspend);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_11);

        Continue = new QPushButton(layoutWidget1);
        Continue->setObjectName(QStringLiteral("Continue"));

        horizontalLayout_14->addWidget(Continue);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_14->addItem(horizontalSpacer_13);

        layoutWidget2 = new QWidget(dockWidgetContents_8);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(310, 10, 231, 25));
        horizontalLayout_15 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        connect = new QPushButton(layoutWidget2);
        connect->setObjectName(QStringLiteral("connect"));

        horizontalLayout_15->addWidget(connect);

        horizontalSpacer_14 = new QSpacerItem(20, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        horizontalLayout_15->addItem(horizontalSpacer_14);

        connect_state = new QLabel(layoutWidget2);
        connect_state->setObjectName(QStringLiteral("connect_state"));

        horizontalLayout_15->addWidget(connect_state);

        test_interface->setWidget(dockWidgetContents_8);
        MainWindow->addDockWidget(static_cast<Qt::DockWidgetArea>(1), test_interface);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(open_file);
        menu_2->addAction(test_interface_hide);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        open_file->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", 0));
        test_interface_hide->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\347\225\214\351\235\242", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243", 0));
        label_2->setText(QApplication::translate("MainWindow", "Load\345\212\237\350\203\275\345\214\272", 0));
        clear_01->setText(QApplication::translate("MainWindow", "Clear", 0));
        Load_data->setText(QApplication::translate("MainWindow", "Load", 0));
        load_place->setText(QApplication::translate("MainWindow", "Edit Data", 0));
        label_3->setText(QApplication::translate("MainWindow", "Match\345\212\237\350\203\275\345\214\272", 0));
        clear_02->setText(QApplication::translate("MainWindow", "Clear", 0));
        match_begin->setText(QApplication::translate("MainWindow", "Match", 0));
        match_state->setText(QApplication::translate("MainWindow", "\345\214\271\351\205\215\347\212\266\346\200\201\357\274\232\346\227\240", 0));
        check_state->setText(QApplication::translate("MainWindow", "state", 0));
        match_place->setText(QApplication::translate("MainWindow", "Edit Data", 0));
        count->setText(QApplication::translate("MainWindow", "Count", 0));
        count_num->setText(QApplication::translate("MainWindow", "0", 0));
        clear_03->setText(QApplication::translate("MainWindow", "clear", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\215\225\346\255\245", 0));
        begin_single->setText(QApplication::translate("MainWindow", "begin", 0));
        clear_04->setText(QApplication::translate("MainWindow", "clear", 0));
        label_5->setText(QApplication::translate("MainWindow", "\345\256\232\346\255\245", 0));
        begin_deter->setText(QApplication::translate("MainWindow", "begin", 0));
        read_result->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\277\220\350\241\214\347\273\223\346\236\234", 0));
        clear_05->setText(QApplication::translate("MainWindow", "clear", 0));
        label_6->setText(QApplication::translate("MainWindow", "\345\276\252\347\216\257\345\215\225\346\255\245", 0));
        begin_c_single->setText(QApplication::translate("MainWindow", "begin", 0));
        clear_06->setText(QApplication::translate("MainWindow", "clear", 0));
        label_7->setText(QApplication::translate("MainWindow", "\345\276\252\347\216\257\345\256\232\346\255\245", 0));
        begin_c_deter->setText(QApplication::translate("MainWindow", "begin", 0));
        memory_state->setText(QApplication::translate("MainWindow", "\345\255\230\345\202\250\345\231\250\347\212\266\346\200\201\357\274\232\346\227\240", 0));
        read_c_result->setText(QApplication::translate("MainWindow", "\350\257\273\345\217\226\350\277\220\350\241\214\347\273\223\346\236\234", 0));
        memory_reset->setText(QApplication::translate("MainWindow", "\345\255\230\345\202\250\345\231\250\346\273\241\345\244\215\344\275\215", 0));
        label->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\347\225\214\351\235\242", 0));
        suspend->setText(QApplication::translate("MainWindow", "\344\270\255\346\226\255", 0));
        Continue->setText(QApplication::translate("MainWindow", "\347\273\247\347\273\255", 0));
        connect->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245", 0));
        connect_state->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
