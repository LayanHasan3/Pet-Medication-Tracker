#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QTableWidget>
#include <QLabel>
#include <QTabWidget>
#include <QMap>
#include <QStringList>

struct Pet {
    QString id;
    QString name;
    QString type;
    QString breed;
    Pet* next = nullptr;
};

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QWidget *centralWidget;

    // Pet info inputs
    QLineEdit *petID;
    QLineEdit *petName;
    QLineEdit *petType;
    QLineEdit *petBreed;

    // Pet management buttons
    QPushButton *addBtn;
    QPushButton *updateBtn;
    QPushButton *deleteBtn;

    // Search bar and button
    QLineEdit *searchBox;
    QPushButton *searchBtn;

    // Pet display table
    QTableWidget *petTable;

    // Informative label
    QLabel *alertLabel;

    // Tabs and medication UI
    QTabWidget *tabs;
    QWidget *medTab;
    QLineEdit *medPetID;
    QLineEdit *medName;
    QPushButton *addMedBtn;
    QPushButton *removeMedBtn;
    QTableWidget *medTable;

    // Data structures
    Pet *head; // Linked list head for pets
    QMap<QString, QStringList> medicationMap; // Medications mapped by pet ID

    // UI setup helpers
    void setupUI();
    void setupMedTab();
    void setupConnections();
    void applyPastelTheme();

    // Data manipulation
    void addPet();
    void updatePet();
    void deletePet();
    void searchPet();

    void refreshTable();
    void refreshMedTable();

private slots:
    // Pet buttons
    void onAddClicked();
    void onUpdateClicked();
    void onDeleteClicked();
    void onSearchClicked();

    //med buttons
    void onAddMedicationClicked();
    void onRemoveMedicationClicked();
};

#endif // MAINWINDOW_H
