/********************************************************************************
** Form generated from reading UI file 'dlltwo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLLTWO_H
#define UI_DLLTWO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dlltwoClass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *endH;
    QPushButton *shart;

    void setupUi(QWidget *dlltwoClass)
    {
        if (dlltwoClass->objectName().isEmpty())
            dlltwoClass->setObjectName(QStringLiteral("dlltwoClass"));
        dlltwoClass->resize(374, 155);
        horizontalLayout_2 = new QHBoxLayout(dlltwoClass);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        endH = new QPushButton(dlltwoClass);
        endH->setObjectName(QStringLiteral("endH"));

        horizontalLayout->addWidget(endH);

        shart = new QPushButton(dlltwoClass);
        shart->setObjectName(QStringLiteral("shart"));

        horizontalLayout->addWidget(shart);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(dlltwoClass);

        QMetaObject::connectSlotsByName(dlltwoClass);
    } // setupUi

    void retranslateUi(QWidget *dlltwoClass)
    {
        dlltwoClass->setWindowTitle(QApplication::translate("dlltwoClass", "dlltwo", Q_NULLPTR));
        endH->setText(QApplication::translate("dlltwoClass", "\347\273\223\346\235\237", Q_NULLPTR));
        shart->setText(QApplication::translate("dlltwoClass", "\345\274\200\345\247\213", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class dlltwoClass: public Ui_dlltwoClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLLTWO_H
