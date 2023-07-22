#include "Yahtzee.h"
#include "mypushbutton.h"
#include <QWidget>
#include <QTableWidget>
#include <QGridLayout>

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Yahtzee w;
    w.show();
    return a.exec();
}
