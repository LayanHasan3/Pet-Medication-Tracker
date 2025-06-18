#include "mainwindow.h"
#include <QVBoxLayout>
#include <QFormLayout>
#include <QMessageBox>
#include <QHeaderView>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), head(nullptr)
{
    setupUI();
    setupConnections();
    applyPastelTheme();
}

MainWindow::~MainWindow() {}

void MainWindow::setupUI()
{
    centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    // Layouts
    QVBoxLayout *mainLayout = new QVBoxLayout;
    QFormLayout *formLayout = new QFormLayout;
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    QHBoxLayout *searchLayout = new QHBoxLayout;

    // Input 
    petID = new QLineEdit; petID->setPlaceholderText("Enter Pet ID");
    petName = new QLineEdit; petName->setPlaceholderText("Enter Name");
    petType = new QLineEdit; petType->setPlaceholderText("Enter Type");
    petBreed = new QLineEdit; petBreed->setPlaceholderText("Enter Breed");

    formLayout->addRow("Pet ID:", petID);
    formLayout->addRow("Name:", petName);
    formLayout->addRow("Type:", petType);
    formLayout->addRow("Breed:", petBreed);

    // Buttons
    addBtn = new QPushButton("Add Pet");
    updateBtn = new QPushButton("Update Pet");
    deleteBtn = new QPushButton("Delete Pet");

    buttonLayout->addWidget(addBtn);
    buttonLayout->addWidget(updateBtn);
    buttonLayout->addWidget(deleteBtn);

    // Search Box, Button
    searchBox = new QLineEdit;
    searchBox->setPlaceholderText("Search pets by ID, Name, or Type...");
    searchBtn = new QPushButton("Search");

    searchLayout->addWidget(searchBox);
    searchLayout->addWidget(searchBtn);

    // Pet Table
    petTable = new QTableWidget(0, 4);
    petTable->setHorizontalHeaderLabels({ "ID", "Name", "Type", "Breed" });
    petTable->setSelectionBehavior(QAbstractItemView::SelectRows);
    petTable->setEditTriggers(QAbstractItemView::NoEditTriggers);
    petTable->horizontalHeader()->setStretchLastSection(true);
    petTable->setAlternatingRowColors(true);

    // Alert Label
    alertLabel = new QLabel("Medication tracking for pets");
    alertLabel->setAlignment(Qt::AlignCenter);
    alertLabel->setStyleSheet("font-weight: 600; font-size: 16px; color:rgb(193, 41, 41);");

    // Tabs and Medication tab
    tabs = new QTabWidget;
    setupMedTab();

    // Assemble main layout
    mainLayout->addLayout(formLayout);
    mainLayout->addLayout(buttonLayout);
    mainLayout->addWidget(petTable);
    mainLayout->addLayout(searchLayout);
    mainLayout->addWidget(tabs);
    mainLayout->addWidget(alertLabel);

    centralWidget->setLayout(mainLayout);

    setWindowTitle("Pet Medication Tracker");
    resize(900, 600);
}

void MainWindow::setupMedTab()
{
    medTab = new QWidget;
    QVBoxLayout *layout = new QVBoxLayout(medTab);
    QHBoxLayout *inputLayout = new QHBoxLayout;

    medPetID = new QLineEdit; medPetID->setPlaceholderText("Pet ID");
    medName = new QLineEdit; medName->setPlaceholderText("Medication");
    addMedBtn = new QPushButton("Add Medication");
    removeMedBtn = new QPushButton("Remove Medication");

    inputLayout->addWidget(medPetID);
    inputLayout->addWidget(medName);
    inputLayout->addWidget(addMedBtn);
    inputLayout->addWidget(removeMedBtn);

    medTable = new QTableWidget(0, 2);
    medTable->setHorizontalHeaderLabels({ "Pet ID", "Medications" });
    medTable->horizontalHeader()->setStretchLastSection(true);
    medTable->setAlternatingRowColors(true);
    medTable->setEditTriggers(QAbstractItemView::NoEditTriggers);

    layout->addLayout(inputLayout);
    layout->addWidget(medTable);
    medTab->setLayout(layout);

    tabs->addTab(medTab, "Medications");
}

void MainWindow::setupConnections()
{
    connect(addBtn, &QPushButton::clicked, this, &MainWindow::onAddClicked);
    connect(updateBtn, &QPushButton::clicked, this, &MainWindow::onUpdateClicked);
    connect(deleteBtn, &QPushButton::clicked, this, &MainWindow::onDeleteClicked);
    connect(searchBtn, &QPushButton::clicked, this, &MainWindow::onSearchClicked);

    connect(addMedBtn, &QPushButton::clicked, this, &MainWindow::onAddMedicationClicked);
    connect(removeMedBtn, &QPushButton::clicked, this, &MainWindow::onRemoveMedicationClicked);

    connect(petTable, &QTableWidget::cellClicked, this, [this](int row, int) {
        petID->setText(petTable->item(row, 0)->text());
        petName->setText(petTable->item(row, 1)->text());
        petType->setText(petTable->item(row, 2)->text());
        petBreed->setText(petTable->item(row, 3)->text());
    });
}

void MainWindow::applyPastelTheme()
{
    QString pastelStyles = R"(
        QWidget {
            background-color: #fdf6f9;
            font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
            font-size: 14px;
            color: #555555;
        }

        QLineEdit {
            background-color: #fff8f9;
            border: 1.5px solid #f4c7d9;
            border-radius: 8px;
            padding: 6px 10px;
            selection-background-color: #f9d5e3;
        }

        QPushButton {
            background-color: #f9b8c7;
            border: 1.5px solid #f08095;
            border-radius: 10px;
            padding: 8px 16px;
            font-weight: 600;
            color: #4a2e3a;
            min-width: 100px;
            transition: background-color 0.3s ease;
        }

        QPushButton:hover {
            background-color: #f08095;
            color: white;
        }

        QPushButton:pressed {
            background-color: #d56470;
            color: white;
        }

        QTableWidget {
            background-color: #fff4f6;
            border: 1px solid #f4c7d9;
            gridline-color: #f9d5e3;
            alternate-background-color: #ffeef2;
            selection-background-color: #f08095;
            selection-color: white;
            border-radius: 10px;
        }

        QHeaderView::section {
            background-color: #f9b8c7;
            color: #4a2e3a;
            padding: 4px;
            border: none;
            font-weight: 700;
        }

        QTabWidget::pane {
            border: 1px solid #f4c7d9;
            border-radius: 12px;
            background: #fff4f6;
        }

        QTabBar::tab {
            background: #f9b8c7;
            color: #4a2e3a;
            padding: 10px 20px;
            border: 1px solid #f4c7d9;
            border-bottom-color: transparent;
            border-top-left-radius: 12px;
            border-top-right-radius: 12px;
            min-width: 120px;
            font-weight: 600;
            margin-right: 2px;
        }

        QTabBar::tab:selected {
            background: #f08095;
            color: white;
            border-color: #d56470;
            border-bottom-color: #fff4f6;
        }
    )";

    this->setStyleSheet(pastelStyles);
}

void MainWindow::onAddClicked()    { addPet(); refreshTable(); }
void MainWindow::onUpdateClicked() { updatePet(); refreshTable(); }
void MainWindow::onDeleteClicked() { deletePet(); refreshTable(); }
void MainWindow::onSearchClicked() { searchPet(); }

void MainWindow::addPet()
{
    if (petID->text().isEmpty() || petName->text().isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Pet ID and Name cannot be empty!");
        return;
    }

    Pet* newPet = new Pet{petID->text(), petName->text(), petType->text(), petBreed->text(), head};
    head = newPet;
}

void MainWindow::updatePet()
{
    QString id = petID->text();
    for (Pet* p = head; p; p = p->next)
    {
        if (p->id == id)
        {
            p->name = petName->text();
            p->type = petType->text();
            p->breed = petBreed->text();
            return;
        }
    }
    QMessageBox::information(this, "Not Found", "Pet not found to update.");
}

void MainWindow::deletePet() {
    QString id = petID->text().trimmed();
    if (id.isEmpty()) {
        QMessageBox::warning(this, "Input Error", "Please enter a Pet ID to delete.");
        return;
    }

    if (!head) {
        QMessageBox::information(this, "Delete Pet", "No pets in the list.");
        return;
    }

    // Case 1: The pet to delete is the head
    if (head->id == id) {
        Pet* temp = head;
        head = head->next;
        delete temp;
        QMessageBox::information(this, "Success", "Pet deleted successfully.");
        return;
    }

    // Case 2: Pet is somewhere after head
    Pet* current = head;
    while (current->next && current->next->id != id) {
        current = current->next;
    }

    if (current->next && current->next->id == id) {
        Pet* temp = current->next;
        current->next = current->next->next;
        delete temp;
        QMessageBox::information(this, "Success", "Pet deleted successfully.");
    } else {
        QMessageBox::warning(this, "Not Found", "Pet not found.");
    }
}

void MainWindow::searchPet()
{
    QString keyword = searchBox->text().toLower();
    petTable->setRowCount(0);

    for (Pet* p = head; p; p = p->next)
    {
        if (p->id.toLower().contains(keyword) ||
            p->name.toLower().contains(keyword) ||
            p->type.toLower().contains(keyword))
        {
            int row = petTable->rowCount();
            petTable->insertRow(row);
            petTable->setItem(row, 0, new QTableWidgetItem(p->id));
            petTable->setItem(row, 1, new QTableWidgetItem(p->name));
            petTable->setItem(row, 2, new QTableWidgetItem(p->type));
            petTable->setItem(row, 3, new QTableWidgetItem(p->breed));
        }
    }
}

void MainWindow::refreshTable()
{
    petTable->setRowCount(0);
    for (Pet* p = head; p; p = p->next)
    {
        int row = petTable->rowCount();
        petTable->insertRow(row);
        petTable->setItem(row, 0, new QTableWidgetItem(p->id));
        petTable->setItem(row, 1, new QTableWidgetItem(p->name));
        petTable->setItem(row, 2, new QTableWidgetItem(p->type));
        petTable->setItem(row, 3, new QTableWidgetItem(p->breed));
    }
}

void MainWindow::onAddMedicationClicked()
{
    QString id = medPetID->text();
    QString med = medName->text();

    if (id.isEmpty() || med.isEmpty())
    {
        QMessageBox::warning(this, "Input Error", "Pet ID and Medication cannot be empty!");
        return;
    }

    auto meds = medicationMap.value(id);
    meds.append(med);
    medicationMap[id] = meds;

    refreshMedTable();
}

void MainWindow::onRemoveMedicationClicked()
{
    QString id = medPetID->text();
    QString med = medName->text();

    if (!medicationMap.contains(id))
    {
        QMessageBox::information(this, "Not Found", "No medications found for this Pet ID.");
        return;
    }

    auto meds = medicationMap.value(id);
    meds.removeAll(med);
    medicationMap[id] = meds;

    refreshMedTable();
}

void MainWindow::refreshMedTable()
{
    medTable->setRowCount(0);

    for (auto it = medicationMap.constBegin(); it != medicationMap.constEnd(); ++it)
    {
        int row = medTable->rowCount();
        medTable->insertRow(row);

        medTable->setItem(row, 0, new QTableWidgetItem(it.key()));
        medTable->setItem(row, 1, new QTableWidgetItem(it.value().join(", ")));
    }
}
