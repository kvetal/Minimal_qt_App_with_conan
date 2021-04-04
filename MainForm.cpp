#include "MainForm.h"

#include <QWidget>

#include "MainForm_ui.h"

struct MainForm::Impl
{
    Impl(QWidget * parent)
    {
        ui.setupUi(parent);
    }

    Ui::MainForm_ui ui;
};

MainForm::MainForm(QWidget * parent)
    : QWidget(parent)
    , m_impl(std::make_unique<Impl>(this))
{
    connect(m_impl->ui.exitBtn, &QPushButton::clicked, this, [this](){m_impl->ui.label->setText("Excellent! You did it! \n :-)"); });
}

MainForm::~MainForm()= default;

