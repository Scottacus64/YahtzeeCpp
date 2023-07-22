// mypushbutton.h
#ifndef MYPUSHBUTTON_H
#define MYPUSHBUTTON_H

#include <QPushButton>


class MyPushButton : public QPushButton {
    Q_OBJECT

public:
    explicit MyPushButton(QWidget* parent = nullptr);
    MyPushButton(const QString& text, QWidget* parent = nullptr);

    int getValue() const;
    void setValue(int value);

    bool isClicked() const;
    void setClicked(bool clicked);

private:
    int m_value;
    bool m_clicked;
};

#endif // MYPUSHBUTTON_H
