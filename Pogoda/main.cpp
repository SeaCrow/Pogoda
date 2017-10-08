#include "pogoda.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	Pogoda w;
	w.show();
	return a.exec();
}
