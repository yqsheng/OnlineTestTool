#include "dlltwo.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	dlltwo w;
	w.show();
	return a.exec();
}
