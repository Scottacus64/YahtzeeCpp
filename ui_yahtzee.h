/********************************************************************************
** Form generated from reading UI file 'yahtzee.ui'
**
** Created by: Qt User Interface Compiler version 6.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_YAHTZEE_H
#define UI_YAHTZEE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>
#include "mypushbutton.h"

QT_BEGIN_NAMESPACE

class Ui_Yahtzee
{
public:
    QPushButton *rollButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    MyPushButton *die1;
    MyPushButton *die0;
    MyPushButton *die2;
    MyPushButton *die3;
    MyPushButton *die4;
    QTableWidget *tableWidget;
    QFrame *line;
    QFrame *line_2;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *Yahtzee)
    {
        if (Yahtzee->objectName().isEmpty())
            Yahtzee->setObjectName("Yahtzee");
        Yahtzee->resize(648, 878);
        rollButton = new QPushButton(Yahtzee);
        rollButton->setObjectName("rollButton");
        rollButton->setGeometry(QRect(270, 120, 100, 32));
        layoutWidget = new QWidget(Yahtzee);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 10, 558, 112));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        die1 = new MyPushButton(layoutWidget);
        die1->setObjectName("die1");
        die1->setMinimumSize(QSize(100, 100));
        die1->setStyleSheet(QString::fromUtf8("border: none;\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8("resources/dice1.png"), QSize(), QIcon::Normal, QIcon::Off);
        die1->setIcon(icon);
        die1->setIconSize(QSize(100, 100));
        die1->setCheckable(false);

        horizontalLayout->addWidget(die1);

        die0 = new MyPushButton(layoutWidget);
        die0->setObjectName("die0");
        die0->setMinimumSize(QSize(100, 100));
        die0->setStyleSheet(QString::fromUtf8("border: none;"));
        die0->setIcon(icon);
        die0->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(die0);

        die2 = new MyPushButton(layoutWidget);
        die2->setObjectName("die2");
        die2->setMinimumSize(QSize(100, 100));
        die2->setStyleSheet(QString::fromUtf8("border: none;"));
        die2->setIcon(icon);
        die2->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(die2);

        die3 = new MyPushButton(layoutWidget);
        die3->setObjectName("die3");
        die3->setMinimumSize(QSize(100, 100));
        die3->setStyleSheet(QString::fromUtf8("border: none;"));
        die3->setIcon(icon);
        die3->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(die3);

        die4 = new MyPushButton(layoutWidget);
        die4->setObjectName("die4");
        die4->setMinimumSize(QSize(100, 100));
        die4->setStyleSheet(QString::fromUtf8("border: none;"));
        die4->setIcon(icon);
        die4->setIconSize(QSize(100, 100));

        horizontalLayout->addWidget(die4);

        tableWidget = new QTableWidget(Yahtzee);
        if (tableWidget->columnCount() < 4)
            tableWidget->setColumnCount(4);
        if (tableWidget->rowCount() < 22)
            tableWidget->setRowCount(22);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        __qtablewidgetitem1->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(0, 1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        __qtablewidgetitem2->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(0, 2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        __qtablewidgetitem3->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(0, 3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        __qtablewidgetitem4->setText(QString::fromUtf8("Ones"));
        __qtablewidgetitem4->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(1, 0, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        __qtablewidgetitem5->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(1, 1, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setItem(1, 3, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(2, 0, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        __qtablewidgetitem9->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 1, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 2, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 3, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(3, 0, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        __qtablewidgetitem13->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(3, 1, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        __qtablewidgetitem14->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(3, 2, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(3, 3, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        __qtablewidgetitem16->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(4, 0, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        __qtablewidgetitem17->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(4, 1, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        __qtablewidgetitem18->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(4, 2, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        __qtablewidgetitem19->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(4, 3, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        __qtablewidgetitem20->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(5, 0, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        __qtablewidgetitem21->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(5, 1, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        __qtablewidgetitem22->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(5, 2, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        __qtablewidgetitem23->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(5, 3, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        __qtablewidgetitem24->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(6, 0, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        __qtablewidgetitem25->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(6, 1, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        __qtablewidgetitem26->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(6, 2, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        __qtablewidgetitem27->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(6, 3, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        __qtablewidgetitem28->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(7, 0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        __qtablewidgetitem29->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(7, 1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        __qtablewidgetitem30->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(7, 2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        __qtablewidgetitem31->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(7, 3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        __qtablewidgetitem32->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(8, 0, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        __qtablewidgetitem33->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(8, 1, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        __qtablewidgetitem34->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(8, 2, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        __qtablewidgetitem35->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(8, 3, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        __qtablewidgetitem36->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(9, 0, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        __qtablewidgetitem37->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(9, 1, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        __qtablewidgetitem38->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(9, 2, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(9, 3, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(10, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        __qtablewidgetitem41->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(10, 1, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(10, 2, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(10, 3, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(11, 0, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(11, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(11, 2, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(11, 3, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(12, 0, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(12, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(12, 2, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(12, 3, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(13, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(13, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        __qtablewidgetitem54->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(13, 2, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        __qtablewidgetitem55->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(13, 3, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        __qtablewidgetitem56->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(14, 0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        __qtablewidgetitem57->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(14, 1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        __qtablewidgetitem58->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(14, 2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        __qtablewidgetitem59->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(14, 3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        __qtablewidgetitem60->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(15, 0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        __qtablewidgetitem61->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(15, 1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        __qtablewidgetitem62->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(15, 2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        __qtablewidgetitem63->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(15, 3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(16, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(16, 1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(16, 2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(16, 3, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(17, 0, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(17, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(17, 2, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
        tableWidget->setItem(17, 3, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        __qtablewidgetitem72->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(18, 0, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        __qtablewidgetitem73->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(18, 1, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        __qtablewidgetitem74->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(18, 2, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        __qtablewidgetitem75->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(18, 3, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        __qtablewidgetitem76->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(19, 0, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        __qtablewidgetitem77->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(19, 1, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        __qtablewidgetitem78->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(19, 2, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        __qtablewidgetitem79->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(19, 3, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget->setItem(20, 0, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        __qtablewidgetitem81->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(20, 1, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        __qtablewidgetitem82->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(20, 2, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        __qtablewidgetitem83->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(20, 3, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        __qtablewidgetitem84->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(21, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        __qtablewidgetitem85->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(21, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        __qtablewidgetitem86->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(21, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        __qtablewidgetitem87->setFlags(Qt::ItemIsEnabled);
        tableWidget->setItem(21, 3, __qtablewidgetitem87);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(90, 160, 451, 661));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget->setIconSize(QSize(10, 10));
        tableWidget->setRowCount(22);
        tableWidget->setColumnCount(4);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setHighlightSections(false);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setHighlightSections(false);
        line = new QFrame(Yahtzee);
        line->setObjectName("line");
        line->setGeometry(QRect(90, 450, 451, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(Yahtzee);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(90, 480, 451, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        tableWidget_2 = new QTableWidget(Yahtzee);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        if (tableWidget_2->rowCount() < 1)
            tableWidget_2->setRowCount(1);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        __qtablewidgetitem88->setFlags(Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem88);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        __qtablewidgetitem89->setFlags(Qt::ItemIsEnabled);
        tableWidget_2->setItem(0, 1, __qtablewidgetitem89);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(220, 830, 201, 31));
        QFont font;
        font.setPointSize(18);
        tableWidget_2->setFont(font);
        tableWidget_2->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        tableWidget_2->setShowGrid(false);
        tableWidget_2->setRowCount(1);
        tableWidget_2->setColumnCount(2);
        tableWidget_2->horizontalHeader()->setVisible(false);
        tableWidget_2->horizontalHeader()->setHighlightSections(false);
        tableWidget_2->verticalHeader()->setVisible(false);
        tableWidget_2->verticalHeader()->setHighlightSections(false);

        retranslateUi(Yahtzee);

        QMetaObject::connectSlotsByName(Yahtzee);
    } // setupUi

    void retranslateUi(QWidget *Yahtzee)
    {
        Yahtzee->setWindowTitle(QCoreApplication::translate("Yahtzee", "Yahtzee", nullptr));
        rollButton->setText(QCoreApplication::translate("Yahtzee", "Roll", nullptr));
        die1->setText(QString());
        die0->setText(QString());
        die2->setText(QString());
        die3->setText(QString());
        die4->setText(QString());

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem = tableWidget->item(0, 1);
        ___qtablewidgetitem->setText(QCoreApplication::translate("Yahtzee", "x1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->item(0, 2);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("Yahtzee", "x2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->item(0, 3);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("Yahtzee", "x3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->item(2, 0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("Yahtzee", "Twos", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->item(3, 0);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("Yahtzee", "Threes", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->item(4, 0);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("Yahtzee", "Fours", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->item(5, 0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("Yahtzee", "Fives", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->item(6, 0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("Yahtzee", "Sixes", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->item(7, 0);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("Yahtzee", "Top SubTotal", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->item(8, 0);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("Yahtzee", "Bonus", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(9, 0);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("Yahtzee", "Top Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(10, 0);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("Yahtzee", "LOWER SECTION", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(11, 0);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("Yahtzee", "Three of a kind", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget->item(12, 0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("Yahtzee", "Four of a kind", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget->item(13, 0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("Yahtzee", "Full House", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget->item(14, 0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("Yahtzee", "Small Straight", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget->item(15, 0);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("Yahtzee", "Large Straight", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget->item(16, 0);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("Yahtzee", "Yahtzee", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget->item(17, 0);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("Yahtzee", "Chance", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget->item(18, 0);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("Yahtzee", "Yahtzee Bonus", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget->item(19, 0);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("Yahtzee", "Lower Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget->item(20, 0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("Yahtzee", "Grand Total", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget->item(21, 0);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("Yahtzee", "Multipliers", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);


        const bool __sortingEnabled1 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->item(0, 0);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("Yahtzee", "Final Score", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled1);

    } // retranslateUi

};

namespace Ui {
    class Yahtzee: public Ui_Yahtzee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_YAHTZEE_H
