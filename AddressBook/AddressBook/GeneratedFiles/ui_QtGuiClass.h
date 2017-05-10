/********************************************************************************
** Form generated from reading UI file 'QtGuiClass.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTGUICLASS_H
#define UI_QTGUICLASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtGuiClass
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *NameLabel;
    QLineEdit *NameEdit;
    QLineEdit *EmailEdit;
    QLabel *EmailLabel;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *okButton;

    void setupUi(QDialog *QtGuiClass)
    {
        if (QtGuiClass->objectName().isEmpty())
            QtGuiClass->setObjectName(QStringLiteral("QtGuiClass"));
        QtGuiClass->resize(314, 155);
        layoutWidget = new QWidget(QtGuiClass);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 30, 271, 111));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        NameLabel = new QLabel(layoutWidget);
        NameLabel->setObjectName(QStringLiteral("NameLabel"));

        gridLayout->addWidget(NameLabel, 0, 0, 1, 1);

        NameEdit = new QLineEdit(layoutWidget);
        NameEdit->setObjectName(QStringLiteral("NameEdit"));

        gridLayout->addWidget(NameEdit, 0, 1, 1, 1);

        EmailEdit = new QLineEdit(layoutWidget);
        EmailEdit->setObjectName(QStringLiteral("EmailEdit"));

        gridLayout->addWidget(EmailEdit, 1, 1, 1, 1);

        EmailLabel = new QLabel(layoutWidget);
        EmailLabel->setObjectName(QStringLiteral("EmailLabel"));

        gridLayout->addWidget(EmailLabel, 1, 0, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(158, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        okButton = new QPushButton(layoutWidget);
        okButton->setObjectName(QStringLiteral("okButton"));

        horizontalLayout->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(QtGuiClass);
        QObject::connect(okButton, SIGNAL(clicked()), QtGuiClass, SLOT(accept()));

        QMetaObject::connectSlotsByName(QtGuiClass);
    } // setupUi

    void retranslateUi(QDialog *QtGuiClass)
    {
        QtGuiClass->setWindowTitle(QApplication::translate("QtGuiClass", "AddEmail", Q_NULLPTR));
        NameLabel->setText(QApplication::translate("QtGuiClass", "Name:", Q_NULLPTR));
        EmailLabel->setText(QApplication::translate("QtGuiClass", "Email:", Q_NULLPTR));
        okButton->setText(QApplication::translate("QtGuiClass", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtGuiClass: public Ui_QtGuiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTGUICLASS_H
