#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_testGithub.h"

class testGithub : public QMainWindow
{
    Q_OBJECT

public:
    testGithub(QWidget *parent = Q_NULLPTR);

private:
    Ui::testGithubClass ui;
};
