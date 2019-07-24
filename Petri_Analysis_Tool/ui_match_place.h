/********************************************************************************
** Form generated from reading UI file 'match_place.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATCH_PLACE_H
#define UI_MATCH_PLACE_H

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

class Ui_match_place
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *begin;
    QSpacerItem *horizontalSpacer;
    QPushButton *load;
    QScrollArea *scrollArea;
    QWidget *input_zone;

    void setupUi(QWidget *match_place)
    {
        if (match_place->objectName().isEmpty())
            match_place->setObjectName(QStringLiteral("match_place"));
        match_place->resize(200, 350);
        verticalLayout = new QVBoxLayout(match_place);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        begin = new QPushButton(match_place);
        begin->setObjectName(QStringLiteral("begin"));

        horizontalLayout->addWidget(begin);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        load = new QPushButton(match_place);
        load->setObjectName(QStringLiteral("load"));

        horizontalLayout->addWidget(load);


        verticalLayout->addLayout(horizontalLayout);

        scrollArea = new QScrollArea(match_place);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setWidgetResizable(true);
        input_zone = new QWidget();
        input_zone->setObjectName(QStringLiteral("input_zone"));
        input_zone->setGeometry(QRect(0, 0, 180, 299));
        scrollArea->setWidget(input_zone);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(match_place);

        QMetaObject::connectSlotsByName(match_place);
    } // setupUi

    void retranslateUi(QWidget *match_place)
    {
        match_place->setWindowTitle(QApplication::translate("match_place", "Form", 0));
        begin->setText(QApplication::translate("match_place", "\351\207\215\347\275\256", 0));
        load->setText(QApplication::translate("match_place", "\350\243\205\350\275\275", 0));
    } // retranslateUi

};

namespace Ui {
    class match_place: public Ui_match_place {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATCH_PLACE_H
