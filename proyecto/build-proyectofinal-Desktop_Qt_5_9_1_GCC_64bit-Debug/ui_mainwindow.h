/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QPushButton *save;
    QPushButton *delet;
    QPushButton *import_2;
    QLabel *picture;
    QLineEdit *direction;
    QLineEdit *name;
    QLineEdit *etiqueta;
    QLabel *label;
    QLabel *label_2;
    QPushButton *add;
    QWidget *tab_4;
    QPushButton *next;
    QPushButton *previous;
    QLabel *picture2;
    QListView *listView;
    QPushButton *open;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(822, 492);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(30, 0, 771, 451));
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        save = new QPushButton(tab_3);
        save->setObjectName(QStringLiteral("save"));
        save->setGeometry(QRect(620, 70, 121, 41));
        delet = new QPushButton(tab_3);
        delet->setObjectName(QStringLiteral("delet"));
        delet->setGeometry(QRect(620, 130, 121, 41));
        import_2 = new QPushButton(tab_3);
        import_2->setObjectName(QStringLiteral("import_2"));
        import_2->setGeometry(QRect(620, 10, 121, 41));
        picture = new QLabel(tab_3);
        picture->setObjectName(QStringLiteral("picture"));
        picture->setGeometry(QRect(20, 10, 561, 341));
        direction = new QLineEdit(tab_3);
        direction->setObjectName(QStringLiteral("direction"));
        direction->setGeometry(QRect(10, 390, 581, 25));
        name = new QLineEdit(tab_3);
        name->setObjectName(QStringLiteral("name"));
        name->setGeometry(QRect(630, 200, 113, 25));
        name->setText(QStringLiteral(""));
        etiqueta = new QLineEdit(tab_3);
        etiqueta->setObjectName(QStringLiteral("etiqueta"));
        etiqueta->setGeometry(QRect(630, 250, 113, 131));
        label = new QLabel(tab_3);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(630, 180, 67, 17));
        label_2 = new QLabel(tab_3);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(630, 230, 67, 17));
        add = new QPushButton(tab_3);
        add->setObjectName(QStringLiteral("add"));
        add->setGeometry(QRect(630, 390, 111, 25));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        next = new QPushButton(tab_4);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(660, 380, 89, 25));
        previous = new QPushButton(tab_4);
        previous->setObjectName(QStringLiteral("previous"));
        previous->setGeometry(QRect(10, 380, 89, 25));
        picture2 = new QLabel(tab_4);
        picture2->setObjectName(QStringLiteral("picture2"));
        picture2->setGeometry(QRect(10, 20, 501, 331));
        listView = new QListView(tab_4);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(580, 170, 161, 181));
        open = new QPushButton(tab_4);
        open->setObjectName(QStringLiteral("open"));
        open->setGeometry(QRect(660, 10, 89, 25));
        tabWidget->addTab(tab_4, QString());
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        save->setText(QApplication::translate("MainWindow", "save", Q_NULLPTR));
        delet->setText(QApplication::translate("MainWindow", "delet", Q_NULLPTR));
        import_2->setText(QApplication::translate("MainWindow", "import", Q_NULLPTR));
        picture->setText(QString());
        name->setInputMask(QString());
        label->setText(QApplication::translate("MainWindow", "name", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "etiqueta", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "add", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Tab 1", Q_NULLPTR));
        next->setText(QApplication::translate("MainWindow", "->", Q_NULLPTR));
        previous->setText(QApplication::translate("MainWindow", "<-", Q_NULLPTR));
        picture2->setText(QString());
        open->setText(QApplication::translate("MainWindow", "open", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Tab 2", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
