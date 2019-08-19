/********************************************************************************
** Form generated from reading UI file 'formqwtspec.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMQWTSPEC_H
#define UI_FORMQWTSPEC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormQwtSpec
{
public:
    QVBoxLayout *verticalLayout_2;

    void setupUi(QWidget *FormQwtSpec)
    {
        if (FormQwtSpec->objectName().isEmpty())
            FormQwtSpec->setObjectName(QStringLiteral("FormQwtSpec"));
        FormQwtSpec->resize(400, 300);
        verticalLayout_2 = new QVBoxLayout(FormQwtSpec);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));

        retranslateUi(FormQwtSpec);

        QMetaObject::connectSlotsByName(FormQwtSpec);
    } // setupUi

    void retranslateUi(QWidget *FormQwtSpec)
    {
        FormQwtSpec->setWindowTitle(QApplication::translate("FormQwtSpec", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormQwtSpec: public Ui_FormQwtSpec {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMQWTSPEC_H
