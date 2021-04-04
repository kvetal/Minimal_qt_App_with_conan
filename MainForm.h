#pragma once

#include <memory>
#include <experimental/propagate_const>

#include <QWidget>

class MainForm : public QWidget
{
    Q_OBJECT
public:
    explicit MainForm(QWidget * parent = nullptr);
    ~MainForm() override;

private:
    struct Impl;
    std::experimental::propagate_const<std::unique_ptr<Impl>> m_impl;
};

