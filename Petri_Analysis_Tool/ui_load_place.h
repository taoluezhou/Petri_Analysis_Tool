/********************************************************************************
** Form generated from reading UI file 'load_place.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOAD_PLACE_H
#define UI_LOAD_PLACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_load_place
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *begin;
    QSpacerItem *horizontalSpacer;
    QPushButton *load;
    QScrollArea *scrollArea;
    QWidget *input_zone;

    void setupUi(QWidget *load_place)
    {
        if (load_place->objectName().isEmpty())
            load_place->setObjectName(QStringLiteral("load_place"));
        load_place->resize(200, 350);
        load_place->setMaximumSize(QSize(16777215, 16777215));
        verticalLayout = new QVBoxLayout(load_place);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        begin = new QPushButton(load_place);
        begin->setObjectName(QStringLiteral("begin"));

        horizontalLayout->addWidget(begin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        load = new QPushButton(load_place);
        load->setObjectName(QStringLiteral("load"));

        horizontalLayout->addWidget(load);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(load_place);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        input_zone = new QWidget();
        input_zone->setObjectName(QStringLiteral("input_zone"));
        input_zone->setGeometry(QRect(0, 0, 180, 299));
        scrollArea->setWidget(input_zone);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(load_place);

        QMetaObject::connectSlotsByName(load_place);
    } // setupUi

    void retranslateUi(QWidget *load_place)
    {
        load_place->setWindowTitle(QApplication::translate("load_place", "Form", 0));
        begin->setText(QApplication::translate("load_place", "\351\207\215\347\275\256", 0));
        load->setText(QApplication::translate("load_place", "\350\243\205\350\275\275", 0));
    } // retranslateUi

};

namespace Ui {
    class load_place: public Ui_load_place {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOAD_PLACE_H
