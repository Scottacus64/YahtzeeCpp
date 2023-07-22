#include "yahtzee.h"
#include "./ui_yahtzee.h"
#include "mypushbutton.h"
#include <QTimer>
#include <QTableWidgetItem>
#include <cstdio>
#include <iostream>
#include <QDebug>

Yahtzee::Yahtzee(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Yahtzee)
{
    ui->setupUi(this);

    // Access and modify the custom button
    MyPushButton* die0Button = ui->die0;
    MyPushButton* die1Button = ui->die1;
    MyPushButton* die2Button = ui->die2;
    MyPushButton* die3Button = ui->die3;
    MyPushButton* die4Button = ui->die4;
    QPixmap dice1("/Users/scottmiller/QtTest/Yahtzee/resources/dice0.png");
    MyPushButton* dice[5] = {die0Button, die1Button, die2Button, die3Button, die4Button};
    int lastRowClicked = 0;
    int lastColumnClicked = 0;

    for (int i = 0; i < 5; ++i)
    {
        dice[i]->setIcon(QIcon(dice1));
        dice[i]->setValue(0);
        dice[i]->setClicked(false);
        connect(dice[i], &QPushButton::clicked, this, &Yahtzee::onDieClicked);
    }
    ui->tableWidget->setColumnWidth(0, 150);
}

Yahtzee::~Yahtzee()
{
    delete ui;
}

void Yahtzee::on_rollButton_clicked()
{
    if (gameOver == true)
    {
        for (int col=1; col<4; col++)
        {
            for (int row=1; row<22; row++)
            {
                ui->tableWidget->setItem(row, col, nullptr);
            }
        }
        ui->tableWidget_2->setItem(0,1,nullptr);
        ui->rollButton->setText("Roll");
        cellsFilled = 0;
        gameOver = false;
    }
    if (canRoll == true && gameOver == false)
    {
        MyPushButton* die0Button = ui->die0;
        MyPushButton* die1Button = ui->die1;
        MyPushButton* die2Button = ui->die2;
        MyPushButton* die3Button = ui->die3;
        MyPushButton* die4Button = ui->die4;
        MyPushButton* dice[5] = {die0Button, die1Button, die2Button, die3Button, die4Button};
        QPixmap dice1("/Users/scottmiller/QtTest/Yahtzee/resources/dice1.png");
        QPixmap dice2("/Users/scottmiller/QtTest/Yahtzee/resources/dice2.png");
        QPixmap dice3("/Users/scottmiller/QtTest/Yahtzee/resources/dice3.png");
        QPixmap dice4("/Users/scottmiller/QtTest/Yahtzee/resources/dice4.png");
        QPixmap dice5("/Users/scottmiller/QtTest/Yahtzee/resources/dice5.png");
        QPixmap dice6("/Users/scottmiller/QtTest/Yahtzee/resources/dice6.png");
        QTimer timer;
        timer.setInterval(25);

        if (rollNumber == 0)
        {
            for (int i=0; i<5; i++)
            {
                dice[i]->setClicked(false);
                int value = dice[i]->getValue();
                switch(value)
                {
                case 1:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice1.png"));
                    break;
                case 2:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice2.png"));
                    break;
                case 3:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice3.png"));
                    break;
                case 4:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice4.png"));
                    break;
                case 5:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice5.png"));;
                    break;
                default:
                    dice[i]->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice6.png"));
                }
            }
        }
            rollNumber ++;              // increment rollNumber and reset all of these to 0's
            lastColumnClicked = 0;
            lastRowClicked = 0;
            joker[0] = 0;
            joker[1] = 0;

        /*****************************************************************************
            this section takes care of rolling the dice and makes the animation
        *****************************************************************************/
        for (int j=0; j<10; j++)
        {
            for (int i=0; i<5; i++)
            {
                bool clicked = dice[i]->isClicked();
                if (clicked == false)
                {
                    int oldDiceValue = dice[i]->getValue();
                    int diceValue= arc4random_uniform(6)+ 1;

                    if (diceValue == oldDiceValue)              // this just makes sure that the same number is not displayed twice in a row
                    {                                           // that would make the animation look like it stalls for a moment
                        if (diceValue < 6)
                        {
                            diceValue +=1;
                        }
                        else
                        {
                            diceValue = 5;
                        }
                    }

                    dice[i]->setValue(diceValue);
                    switch (diceValue)
                    {
                    case 1:
                        dice[i]->setIcon(QIcon(dice1));
                        break;
                    case 2:
                        dice[i]->setIcon(QIcon(dice2));
                        break;
                    case 3:
                        dice[i]->setIcon(QIcon(dice3));
                        break;
                    case 4:
                        dice[i]->setIcon(QIcon(dice4));
                        break;
                    case 5:
                        dice[i]->setIcon(QIcon(dice5));
                        break;
                    default:
                        dice[i]->setIcon(QIcon(dice6));
                        break;
                    }
                }
            }
            timer.start();
            // Use a loop to wait until the QTimer times out (25ms)
            QEventLoop loop;
            QObject::connect(&timer, &QTimer::timeout, &loop, &QEventLoop::quit);
            loop.exec();
        }
        if (rollNumber > 2) { canRoll = false;}
    }
}

void Yahtzee::onDieClicked()
{
    MyPushButton *clickedButton = qobject_cast<MyPushButton*>(sender());
    bool clicked = clickedButton->isClicked();
    clicked = !clicked;
    int value = clickedButton->getValue();
    if (clicked) {
        switch(value)
        {
        case 1:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice1b.png"));
            break;
        case 2:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice2b.png"));
            break;
        case 3:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice3b.png"));
            break;
        case 4:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice4b.png"));
            break;
        case 5:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice5b.png"));;
            break;
        default:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice6b.png"));
        }
    }
    else
    {
        switch(value)
        {
        case 1:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice1.png"));
            break;
        case 2:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice2.png"));
            break;
        case 3:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice3.png"));
            break;
        case 4:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice4.png"));
            break;
        case 5:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice5.png"));;
            break;
        default:
            clickedButton->setIcon(QIcon("/Users/scottmiller/QtTest/Yahtzee/resources/dice6.png"));
        }
    }
    clickedButton->setClicked(clicked);
}

void Yahtzee::on_tableWidget_cellClicked(int row, int column)
{
    qDebug() << row << " " << column;
    if (rollNumber > 0) {cellsFilled ++;}
    qDebug() << "cf: " << cellsFilled;
    canRoll = true;
    rollNumber = 0;
    MyPushButton* dice[5] = {ui->die0, ui->die1, ui->die2, ui->die3, ui->die4};
    int values[5];
    int cellTotal = 0;
    int upperSubTotal[4] = {0,0,0,0};
    int upperTotal[4] = {0,0,0,0};
    int lowerTotal[4] = {0,0,0,0};
    int upperBonus[4] = {0,0,0,0};
    int grandTotal[4] = {0,0,0,0};
    int multiplier[4] = {0,0,0,0};
    int finalScore = 0;

    QTableWidgetItem *item6 = ui->tableWidget->item(row, column);

    if (not item6)     // if the cell is empty then
    {
        if (lastColumnClicked > 0 && lastRowClicked > 0  && lastRowClicked < 7 || lastRowClicked > 10 && lastRowClicked <18 && lastColumnClicked > 0)
        {
            ui->tableWidget->setItem(lastRowClicked, lastColumnClicked, nullptr);
        }

        for (int i=0; i<5; i++)
        {
            values[i] = dice[i]->getValue();
        }

        /*****************************************************************************
                             if the top section is selected
        *****************************************************************************/
        if (row > 0 && row < 7 && column > 0)
        {
            for (int i=0; i<5; i++)
            {
                if (values[i] == row) {cellTotal += values[i];}
            }

            removeOldYahtzeeBonus();
            if (values[0] == row){checkYahtzeeBonus(values, row, column);}
            else {joker[1]=0;}

            QTableWidgetItem *item = new QTableWidgetItem(QString::number(cellTotal));
            ui->tableWidget->setItem(row, column, item);

        }

        /*****************************************************************************
                             if the lower section is selected
        *****************************************************************************/
        if (column > 0 && row > 10 && row < 18)
        {
            int* sortedValues = bubbleSort(values);

            for (int i=0; i<5; i++) {values[i]=sortedValues[i];}

            //three of a kind
            if (row == 11)
            {
                if (values[0]==values[1]&&values[1]==values[2] || values[1]==values[2]&&values[2]==values[3] || values[2]==values[3]&&values[3]==values[4])
                {
                    for (int i=0; i<5; i++)
                    {
                        cellTotal += values[i];
                    }
                }
                removeOldYahtzeeBonus();
                checkYahtzeeBonus(values, row, column);
            }

            //four of a kind
            if (row == 12)
            {
                if (values[0]==values[1]&&values[1]==values[2]&&values[2]==values[3] || values[1]==values[2]&&values[2]==values[3]&&values[3]==values[4])
                {
                    for (int i=0; i<5; i++)
                    {
                       cellTotal += values[i];
                    }
                }
                removeOldYahtzeeBonus();
                checkYahtzeeBonus(values, row, column);
            }

            //full house
            if (row == 13)
            {
                if(values[0]==values[1]&&values[1]==values[2]&&values[3]==values[4] || values[0]==values[1]&&values[2]==values[3]&&values[3]==values[4]) {cellTotal = 25;}
                removeOldYahtzeeBonus();
                checkYahtzeeBonus(values, row, column);
            }

            //small straight
            if (row == 14)
            {
                for (int i=0; i<5; i++)
                {
                    if (values[i]==values[i+1])
                    {values[i]=0;}
                }

                int* sortedValues = bubbleSort(values);
                for (int i=0; i<5; i++) {values[i]=sortedValues[i];}

                if(values[0]+1==values[1]&&values[1]+1==values[2]&&values[2]+1==values[3]&&values[0]>0 ||
                    values[1]+1==values[2]&&values[2]+1==values[3]&&values[3]+1==values[4]&&values[1]>0)
                    {cellTotal = 30;}
                 else {cellTotal = checkForJoker(values, row, column);}
            }

            //large straight
            if (row == 15)
            {
                if(values[0]+1==values[1]&&values[1]+1==values[2]&&values[2]+1==values[3]&&values[3]+1==values[4])
                {cellTotal = 40;}
                else {cellTotal = checkForJoker(values, row, column);}
            }

            //yahtzee
            if (row == 16)
            {
                if(values[0]==values[1]&&values[1]==values[2]&&values[2]==values[3]&&values[3]==values[4])
                {
                    cellTotal = 50;
                }
            }

            //chance
            if (row == 17)
            {
                for (int i=0; i<5; i++)
                {
                    cellTotal += values[i];
                }
                removeOldYahtzeeBonus();
                checkYahtzeeBonus(values, row, column);
            }


            QTableWidgetItem *item = new QTableWidgetItem(QString::number(cellTotal));
            ui->tableWidget->setItem(row, column, item);
        }

        /*****************************************************************************
                             calculate all of the totals
        *****************************************************************************/

        for (int tCol=1; tCol<4; tCol++)
        {
            // this is for the top section
            for (int tRow=1; tRow<7; tRow++)
            {
                QTableWidgetItem *item1 = ui->tableWidget->item(tRow, tCol);
                int intValue = 0;
                if (item1) {intValue = item1->text().toInt();}    //QTableWidget cells are not initialized to a value so need to see if one is there
                upperSubTotal[tCol] +=intValue;
            }

            QTableWidgetItem *item = new QTableWidgetItem(QString::number(upperSubTotal[tCol])); // Subtotal
            ui->tableWidget->setItem(7, tCol, item);

            upperBonus[tCol] = (upperSubTotal[tCol]>62) ?  35 :  0;
            QTableWidgetItem *item1 = new QTableWidgetItem(QString::number(upperBonus[tCol]));   // 35 Point Bonus
            ui->tableWidget->setItem(8, tCol, item1);

            upperTotal[tCol] = upperSubTotal[tCol] + upperBonus[tCol];
            QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(upperTotal[tCol]));   // Total with Bonus Added
            ui->tableWidget->setItem(9, tCol, item2);

            // this is for the lower section
            for (int tRow=11; tRow<19; tRow++)
            {
                QTableWidgetItem *item1 = ui->tableWidget->item(tRow, tCol);
                int intValue = 0;
                if (item1) {intValue = item1->text().toInt();}
                lowerTotal[tCol] +=intValue;
            }

            QTableWidgetItem *item3 = new QTableWidgetItem(QString::number(lowerTotal[tCol]));   // Lower total
            ui->tableWidget->setItem(19, tCol, item3);

            grandTotal[tCol] = upperTotal[tCol]+ lowerTotal[tCol];
            QTableWidgetItem *item4 = new QTableWidgetItem(QString::number(grandTotal[tCol]));   // Top and Lower totals
            ui->tableWidget->setItem(20, tCol, item4);

            multiplier[tCol] = grandTotal[tCol] * tCol;
            QTableWidgetItem *item5 = new QTableWidgetItem(QString::number(multiplier[tCol]));   // Totals times the multipliers
            ui->tableWidget->setItem(21, tCol, item5);
        }

        for (int i=1; i<4; i++) {finalScore += multiplier[i];}
        QTableWidgetItem *item6 = new QTableWidgetItem(QString::number(finalScore));             // Final score of all three columns
        ui->tableWidget_2->setItem(0, 1, item6);

        lastRowClicked = row;
        lastColumnClicked = column;
    }
    else
    {
        int intValue;
        QTableWidgetItem *item1 = ui->tableWidget->item(row, column);
        if (item1) {intValue = item1->text().toInt();}
        qDebug() << intValue;
    }
    if (cellsFilled > 38)
    {
        ui->rollButton->setText("New Game?");
        gameOver = true;
    }
}

void Yahtzee::removeOldYahtzeeBonus()
{
    int intValue = 0;
    if (joker[0] > 0 && joker[1] > 0)
    {
        QTableWidgetItem *item1 = ui->tableWidget->item(18, joker[0]);
        if (item1) {intValue = item1->text().toInt();}
        int yahtzeeBonus = intValue - 100;
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(yahtzeeBonus));
        ui->tableWidget->setItem(18, joker[0], item2);
    }
}

void Yahtzee::checkYahtzeeBonus(int values[], int row, int column)
{
    int intValue = 0;
    for (int i=1; i<4; i++)
    {
        QTableWidgetItem *item1 = ui->tableWidget->item(16, i);
        if (item1) {intValue++;}
    }
    if (values[0]==values[1]&&values[1]==values[2]&&values[2]==values[3]&&values[3]==values[4] && intValue > 2)
    {
        intValue = 0;
        QTableWidgetItem *item1 = ui->tableWidget->item(18, column);
        if (item1) {intValue = item1->text().toInt();}
        int yahtzeeBonus = intValue + 100;
        QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(yahtzeeBonus));
        ui->tableWidget->setItem(18, column, item2);
        joker[0] = column;
        joker[1] = 1;
    }
}

int Yahtzee::checkForJoker(int values[], int row, int column)
{
    int emptyCell = 0;
    int intValue = 0;

    removeOldYahtzeeBonus();

    for (int i=1; i<4; i++)
    {
        QTableWidgetItem *item1 = ui->tableWidget->item(16, i);
        if (item1) {intValue++;}
    }

    if(values[0]==values[1]&&values[1]==values[2]&&values[2]==values[3]&&values[3]==values[4] && intValue > 2)
    {
        intValue = 0;
        for (int i=1; i<4; i++)
        {
            QTableWidgetItem *item = ui->tableWidget->item(values[0], i);
            if (item)
            {
                emptyCell ++;
            }
        }
        qDebug() << "Empty Cell =" << emptyCell;
        if (emptyCell < 3)
        {
            joker[1] = 0;
            return 0;
        }
        else
        {
            QTableWidgetItem *item1 = ui->tableWidget->item(18, column);
            if (item1) {intValue = item1->text().toInt();}
            int yahtzeeBonus = intValue + 100;
            QTableWidgetItem *item2 = new QTableWidgetItem(QString::number(yahtzeeBonus));
            ui->tableWidget->setItem(18, column, item2);
            joker[0] = column;
            joker[1] = 1;
            //if (row == 13) {return 25;}
            if (row == 14) {return 30;}
            if (row == 15) {return 40;}
        }
    }
    else
    {
        return 0;
        joker[1] = 0;
    }
    return 0;
}

int* Yahtzee::bubbleSort(int* values)
{
    int j = 4;
    for (int i=0; i<4; i++)
    {
        for (int k=0; k<j; k++)
        {
            if (values[k] > values[k+1])
            {
                int temp = values[k+1];
                values[k+1] = values[k];
                values[k] = temp;
            }
        }
        j--;
    }



    return values;
}
