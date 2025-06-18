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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *mainTabs;
    QWidget *medTab;
    QVBoxLayout *verticalLayout_2;
    QWidget *medwidget;
    QFormLayout *formLayout_2;
    QLineEdit *medPetID;
    QLineEdit *medName;
    QPushButton *addMedBtn;
    QPushButton *removeMedBtn;
    QTableWidget *medTable;
    QWidget *layoutWidget;
    QVBoxLayout *formLayout;
    QLabel *label_petID;
    QLineEdit *petID;
    QLabel *label_petName;
    QLineEdit *petName;
    QLabel *label_petType;
    QLineEdit *petType;
    QLabel *label_petBreed;
    QLineEdit *petBreed;
    QWidget *layoutWidget1;
    QVBoxLayout *buttonLayout;
    QPushButton *addBtn;
    QPushButton *updateBtn;
    QPushButton *deleteBtn;
    QTableWidget *petTable;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1065, 943);
        MainWindow->setMinimumSize(QSize(800, 600));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        mainTabs = new QTabWidget(centralwidget);
        mainTabs->setObjectName("mainTabs");
        mainTabs->setGeometry(QRect(40, 510, 501, 411));
        medTab = new QWidget();
        medTab->setObjectName("medTab");
        verticalLayout_2 = new QVBoxLayout(medTab);
        verticalLayout_2->setObjectName("verticalLayout_2");
        medwidget = new QWidget(medTab);
        medwidget->setObjectName("medwidget");
        formLayout_2 = new QFormLayout(medwidget);
        formLayout_2->setObjectName("formLayout_2");
        medPetID = new QLineEdit(medwidget);
        medPetID->setObjectName("medPetID");

        formLayout_2->setWidget(0, QFormLayout::ItemRole::SpanningRole, medPetID);

        medName = new QLineEdit(medwidget);
        medName->setObjectName("medName");

        formLayout_2->setWidget(1, QFormLayout::ItemRole::SpanningRole, medName);

        addMedBtn = new QPushButton(medwidget);
        addMedBtn->setObjectName("addMedBtn");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::LabelRole, addMedBtn);

        removeMedBtn = new QPushButton(medwidget);
        removeMedBtn->setObjectName("removeMedBtn");

        formLayout_2->setWidget(2, QFormLayout::ItemRole::FieldRole, removeMedBtn);


        verticalLayout_2->addWidget(medwidget);

        medTable = new QTableWidget(medTab);
        if (medTable->columnCount() < 2)
            medTable->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        medTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        medTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        medTable->setObjectName("medTable");
        medTable->setFrameShape(QFrame::Shape::Box);
        medTable->setDragEnabled(false);
        medTable->setAlternatingRowColors(false);
        medTable->setColumnCount(2);
        medTable->horizontalHeader()->setVisible(true);
        medTable->horizontalHeader()->setCascadingSectionResizes(false);
        medTable->verticalHeader()->setCascadingSectionResizes(false);
        medTable->verticalHeader()->setProperty("showSortIndicator", QVariant(false));
        medTable->verticalHeader()->setStretchLastSection(false);

        verticalLayout_2->addWidget(medTable);

        mainTabs->addTab(medTab, QString());
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(41, 11, 511, 243));
        formLayout = new QVBoxLayout(layoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_petID = new QLabel(layoutWidget);
        label_petID->setObjectName("label_petID");

        formLayout->addWidget(label_petID);

        petID = new QLineEdit(layoutWidget);
        petID->setObjectName("petID");

        formLayout->addWidget(petID);

        label_petName = new QLabel(layoutWidget);
        label_petName->setObjectName("label_petName");

        formLayout->addWidget(label_petName);

        petName = new QLineEdit(layoutWidget);
        petName->setObjectName("petName");

        formLayout->addWidget(petName);

        label_petType = new QLabel(layoutWidget);
        label_petType->setObjectName("label_petType");

        formLayout->addWidget(label_petType);

        petType = new QLineEdit(layoutWidget);
        petType->setObjectName("petType");

        formLayout->addWidget(petType);

        label_petBreed = new QLabel(layoutWidget);
        label_petBreed->setObjectName("label_petBreed");

        formLayout->addWidget(label_petBreed);

        petBreed = new QLineEdit(layoutWidget);
        petBreed->setObjectName("petBreed");

        formLayout->addWidget(petBreed);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(42, 260, 511, 103));
        buttonLayout = new QVBoxLayout(layoutWidget1);
        buttonLayout->setObjectName("buttonLayout");
        buttonLayout->setContentsMargins(0, 0, 0, 0);
        addBtn = new QPushButton(layoutWidget1);
        addBtn->setObjectName("addBtn");
        addBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        buttonLayout->addWidget(addBtn);

        updateBtn = new QPushButton(layoutWidget1);
        updateBtn->setObjectName("updateBtn");
        updateBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        buttonLayout->addWidget(updateBtn);

        deleteBtn = new QPushButton(layoutWidget1);
        deleteBtn->setObjectName("deleteBtn");
        deleteBtn->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));

        buttonLayout->addWidget(deleteBtn);

        petTable = new QTableWidget(centralwidget);
        if (petTable->columnCount() < 4)
            petTable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        petTable->setHorizontalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        petTable->setHorizontalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        petTable->setHorizontalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        petTable->setHorizontalHeaderItem(3, __qtablewidgetitem5);
        petTable->setObjectName("petTable");
        petTable->setEnabled(true);
        petTable->setGeometry(QRect(41, 369, 511, 121));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy.setHorizontalStretch(10);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(petTable->sizePolicy().hasHeightForWidth());
        petTable->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        petTable->setFont(font);
        petTable->setEditTriggers(QAbstractItemView::EditTrigger::NoEditTriggers);
        petTable->setSelectionBehavior(QAbstractItemView::SelectionBehavior::SelectRows);
        petTable->setColumnCount(4);
        petTable->horizontalHeader()->setCascadingSectionResizes(false);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1065, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        mainTabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Pet Health Record System", nullptr));
        medPetID->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Pet ID", nullptr));
        medName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Med Name", nullptr));
        addMedBtn->setText(QCoreApplication::translate("MainWindow", "Add Medication", nullptr));
        removeMedBtn->setText(QCoreApplication::translate("MainWindow", "Remove Medication", nullptr));
        QTableWidgetItem *___qtablewidgetitem = medTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "Pet ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = medTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "Medications", nullptr));
        mainTabs->setTabText(mainTabs->indexOf(medTab), QCoreApplication::translate("MainWindow", "Medications", nullptr));
        label_petID->setText(QCoreApplication::translate("MainWindow", "Pet ID:", nullptr));
        petID->setInputMask(QString());
        petID->setText(QString());
        petID->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter pet ID", nullptr));
        label_petName->setText(QCoreApplication::translate("MainWindow", "Name:", nullptr));
        petName->setText(QString());
        petName->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Pet Name", nullptr));
        label_petType->setText(QCoreApplication::translate("MainWindow", "Type:", nullptr));
        petType->setText(QString());
        petType->setPlaceholderText(QCoreApplication::translate("MainWindow", "eg. Cat, Dog", nullptr));
        label_petBreed->setText(QCoreApplication::translate("MainWindow", "Breed:", nullptr));
        petBreed->setText(QString());
        petBreed->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter Breed", nullptr));
        addBtn->setText(QCoreApplication::translate("MainWindow", "Add Pet", nullptr));
        updateBtn->setText(QCoreApplication::translate("MainWindow", "Update Pet", nullptr));
        deleteBtn->setText(QCoreApplication::translate("MainWindow", "Delete Pet", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = petTable->horizontalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = petTable->horizontalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = petTable->horizontalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = petTable->horizontalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "Breed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
