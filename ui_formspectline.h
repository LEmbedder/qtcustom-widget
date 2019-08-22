/********************************************************************************
** Form generated from reading UI file 'formspectline.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMSPECTLINE_H
#define UI_FORMSPECTLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormSpectLine
{
public:

    void setupUi(QWidget *FormSpectLine)
    {
        if (FormSpectLine->objectName().isEmpty())
            FormSpectLine->setObjectName(QStringLiteral("FormSpectLine"));
        FormSpectLine->resize(400, 300);
        FormSpectLine->setStyleSheet(QStringLiteral(""));

        retranslateUi(FormSpectLine);

        QMetaObject::connectSlotsByName(FormSpectLine);
    } // setupUi

    void retranslateUi(QWidget *FormSpectLine)
    {
        FormSpectLine->setWindowTitle(QApplication::translate("FormSpectLine", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FormSpectLine: public Ui_FormSpectLine {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMSPECTLINE_H
