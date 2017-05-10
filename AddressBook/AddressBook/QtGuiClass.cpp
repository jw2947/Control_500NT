#include "QtGuiClass.h"

QtGuiClass::QtGuiClass(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
}

QtGuiClass::~QtGuiClass()
{
}
