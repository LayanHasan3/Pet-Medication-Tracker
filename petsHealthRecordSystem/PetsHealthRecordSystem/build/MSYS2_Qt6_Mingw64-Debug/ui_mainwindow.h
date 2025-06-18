/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *widget;
    QVBoxLayout *formLayoutWidgets;
    QLineEdit *lineEditPetName;
    QLineEdit *lineEditSpecies;
    QLineEdit *lineEditBreed;
    QSpinBox *spinBoxAge;
    QLineEdit *lineEditOwner;
    QWidget *widget1;
    QVBoxLayout *buttonLayoutWidget;
    QPushButton *buttonAddPet;
    QPushButton *buttonSearchPet;
    QPushButton *buttonDeletePet;
    QWidget *widget2;
    QHBoxLayout *tableLayoutWidget;
    QTableWidget *tablePets;
    QTreeWidget *treePetCategories;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1002, 644);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 40, 127, 171));
        formLayoutWidgets = new QVBoxLayout(widget);
        formLayoutWidgets->setObjectName("formLayoutWidgets");
        formLayoutWidgets->setContentsMargins(0, 0, 0, 0);
        lineEditPetName = new QLineEdit(widget);
        lineEditPetName->setObjectName("lineEditPetName");

        formLayoutWidgets->addWidget(lineEditPetName);

        lineEditSpecies = new QLineEdit(widget);
        lineEditSpecies->setObjectName("lineEditSpecies");

        formLayoutWidgets->addWidget(lineEditSpecies);

        lineEditBreed = new QLineEdit(widget);
        lineEditBreed->setObjectName("lineEditBreed");

        formLayoutWidgets->addWidget(lineEditBreed);

        spinBoxAge = new QSpinBox(widget);
        spinBoxAge->setObjectName("spinBoxAge");

        formLayoutWidgets->addWidget(spinBoxAge);

        lineEditOwner = new QLineEdit(widget);
        lineEditOwner->setObjectName("lineEditOwner");

        formLayoutWidgets->addWidget(lineEditOwner);

        widget1 = new QWidget(centralwidget);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(30, 230, 82, 103));
        buttonLayoutWidget = new QVBoxLayout(widget1);
        buttonLayoutWidget->setObjectName("buttonLayoutWidget");
        buttonLayoutWidget->setContentsMargins(0, 0, 0, 0);
        buttonAddPet = new QPushButton(widget1);
        buttonAddPet->setObjectName("buttonAddPet");

        buttonLayoutWidget->addWidget(buttonAddPet);

        buttonSearchPet = new QPushButton(widget1);
        buttonSearchPet->setObjectName("buttonSearchPet");

        buttonLayoutWidget->addWidget(buttonSearchPet);

        buttonDeletePet = new QPushButton(widget1);
        buttonDeletePet->setObjectName("buttonDeletePet");

        buttonLayoutWidget->addWidget(buttonDeletePet);

        widget2 = new QWidget(centralwidget);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(20, 360, 521, 194));
        tableLayoutWidget = new QHBoxLayout(widget2);
        tableLayoutWidget->setObjectName("tableLayoutWidget");
        tableLayoutWidget->setContentsMargins(0, 0, 0, 0);
        tablePets = new QTableWidget(widget2);
        if (tablePets->columnCount() < 12)
            tablePets->setColumnCount(12);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablePets->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tablePets->setObjectName("tablePets");
        tablePets->setColumnCount(12);

        tableLayoutWidget->addWidget(tablePets);

        treePetCategories = new QTreeWidget(widget2);
        treePetCategories->setObjectName("treePetCategories");

        tableLayoutWidget->addWidget(treePetCategories);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1002, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pet Health Record System", nullptr));
        lineEditPetName->setText(QCoreApplication::translate("MainWindow", "pet name", nullptr));
        lineEditSpecies->setText(QCoreApplication::translate("MainWindow", "Species", nullptr));
        lineEditBreed->setText(QCoreApplication::translate("MainWindow", "Breed", nullptr));
        lineEditOwner->setText(QCoreApplication::translate("MainWindow", "Owner ", nullptr));
        buttonAddPet->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        buttonSearchPet->setText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        buttonDeletePet->setText(QCoreApplication::translate("MainWindow", "Delete", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablePets->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablePets->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Pet Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablePets->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "Species", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tablePets->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Age", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tablePets->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Breed", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tablePets->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Owner", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treePetCategories->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "Breed", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "Species", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
