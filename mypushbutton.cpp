// mypushbutton.cpp
#include "mypushbutton.h"

MyPushButton::MyPushButton(QWidget* parent) : QPushButton(parent), m_value(0), m_clicked(false) {}

//MyPushButton::MyPushButton(const QString& text, QWidget* parent) : QPushButton(text, parent), m_value(0), m_clicked(false) {}

int MyPushButton::getValue() const
{
    return m_value;
}

void MyPushButton::setValue(int value)
{
    m_value = value;
}

bool MyPushButton::isClicked() const
{
    return m_clicked;
}

void MyPushButton::setClicked(bool clicked)
{
    m_clicked = clicked;
}
