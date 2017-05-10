/********************************************************************************
** Form generated from reading UI file 'AddressBook.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDRESSBOOK_H
#define UI_ADDRESSBOOK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddressBookClass
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *addButton;
    QPushButton *deleteButton;
    QSpacerItem *verticalSpacer;
    QLabel *nameLabel;
    QListWidget *addressList;
    QLabel *emailLabel;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *AddressBookClass)
    {
        if (AddressBookClass->objectName().isEmpty())
            AddressBookClass->setObjectName(QStringLiteral("AddressBookClass"));
        AddressBookClass->resize(415, 190);
        centralWidget = new QWidget(AddressBookClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 391, 161));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        addButton = new QPushButton(layoutWidget);
        addButton->setObjectName(QStringLiteral("addButton"));

        verticalLayout->addWidget(addButton);

        deleteButton = new QPushButton(layoutWidget);
        deleteButton->setObjectName(QStringLiteral("deleteButton"));

        verticalLayout->addWidget(deleteButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        nameLabel = new QLabel(layoutWidget);
        nameLabel->setObjectName(QStringLiteral("nameLabel"));

        gridLayout->addWidget(nameLabel, 1, 0, 1, 1);

        addressList = new QListWidget(layoutWidget);
        addressList->setObjectName(QStringLiteral("addressList"));

        gridLayout->addWidget(addressList, 0, 0, 1, 1);

        emailLabel = new QLabel(layoutWidget);
        emailLabel->setObjectName(QStringLiteral("emailLabel"));

        gridLayout->addWidget(emailLabel, 2, 0, 1, 1);

        AddressBookClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(AddressBookClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        AddressBookClass->setStatusBar(statusBar);

        retranslateUi(AddressBookClass);

        QMetaObject::connectSlotsByName(AddressBookClass);
    } // setupUi

    void retranslateUi(QMainWindow *AddressBookClass)
    {
        AddressBookClass->setWindowTitle(QApplication::translate("AddressBookClass", "AddressBook", Q_NULLPTR));
        addButton->setText(QApplication::translate("AddressBookClass", "Add", Q_NULLPTR));
        deleteButton->setText(QApplication::translate("AddressBookClass", "Delete", Q_NULLPTR));
        nameLabel->setText(QApplication::translate("AddressBookClass", "<No Item Selected>", Q_NULLPTR));
        emailLabel->setText(QApplication::translate("AddressBookClass", "Empty", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddressBookClass: public Ui_AddressBookClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDRESSBOOK_H
