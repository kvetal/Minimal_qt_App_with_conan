#pragma once

#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include <QWidget>


namespace Ui {

class MainForm_ui
{
public:
    void setupUi(QWidget * widget)
    {
        widget->setGeometry(50, 50, 100, 100);
        mainLayout = new QGridLayout();
        label = new QLabel("This is just text label.");
        exitBtn = new QPushButton("Click me!");

        mainLayout->addWidget(label, 0, 0);
        mainLayout->addWidget(exitBtn, 1, 0);

        widget->setLayout(mainLayout);
    }

    QGridLayout * mainLayout;
    QLabel * label;
    QPushButton * exitBtn;

};

}
