/********************************************************************************
** Form generated from reading UI file 'testGithub.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTGITHUB_H
#define UI_TESTGITHUB_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testGithubClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testGithubClass)
    {
        if (testGithubClass->objectName().isEmpty())
            testGithubClass->setObjectName(QString::fromUtf8("testGithubClass"));
        testGithubClass->resize(600, 400);
        menuBar = new QMenuBar(testGithubClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        testGithubClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testGithubClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        testGithubClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testGithubClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        testGithubClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testGithubClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        testGithubClass->setStatusBar(statusBar);

        retranslateUi(testGithubClass);

        QMetaObject::connectSlotsByName(testGithubClass);
    } // setupUi

    void retranslateUi(QMainWindow *testGithubClass)
    {
        testGithubClass->setWindowTitle(QCoreApplication::translate("testGithubClass", "testGithub", nullptr));
    } // retranslateUi

};

namespace Ui {
    class testGithubClass: public Ui_testGithubClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTGITHUB_H
