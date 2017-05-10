#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_AddressBook.h"
#include "ui_QtGuiClass.h"

class AddressBook : public QMainWindow
{
	Q_OBJECT

public:
	AddressBook(QWidget *parent = Q_NULLPTR);

private:
	Ui::AddressBookClass ui;
	Ui::QtGuiClass ui1;
	
private slots:
	void on_addButton_clicked();
	void on_addressList_currentItemChanged();
};



