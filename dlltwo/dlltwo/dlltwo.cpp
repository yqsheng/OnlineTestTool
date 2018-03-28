#include "dlltwo.h"
#include <QMessageBox>
dlltwo::dlltwo(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.shart, SIGNAL(clicked()), this, SLOT(startHook()));
	connect(ui.endH, SIGNAL(clicked()), this, SLOT(endHook()));
}
void dlltwo::startHook()
{
	if (dll_obj.startHook())
	{
		QMessageBox::information(this, "yes", "yes");
	}
	else
	{
		QMessageBox::information(this, "no", "no");
	}
}
void dlltwo::endHook()
{
	dll_obj.stopHook();
}
void dlltwo::keyPressEvent(QKeyEvent *event)
{

}

