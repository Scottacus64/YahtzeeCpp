#ifndef YAHTZEE_H
#define YAHTZEE_H

#include <QWidget>
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE
namespace Ui { class Yahtzee; }
QT_END_NAMESPACE

class Yahtzee : public QWidget
{
    Q_OBJECT

public:
    Yahtzee(QWidget *parent = nullptr);
    ~Yahtzee();

public slots:
    void onDieClicked();

private slots:

    void on_rollButton_clicked();
    //    void setIcon();

    //    QString toggleDark(MyPushButton clickedButton);
    //    QString toggleLight(MyPushButton clickedButton);

    void on_tableWidget_cellClicked(int row, int column);
    int checkForJoker(int values[], int row, int column);
    void checkYahtzeeBonus(int values[], int row, int column);
    void removeOldYahtzeeBonus();
    int* bubbleSort(int values[]);

private:
    Ui::Yahtzee *ui;
    int lastRowClicked = 0;
    int lastColumnClicked = 0;
    bool canRoll = true;
    int rollNumber = 0;
    int joker[2] = {0,0};
    int cellsFilled = 0;
    bool gameOver = true;
};
#endif // YAHTZEE_H
