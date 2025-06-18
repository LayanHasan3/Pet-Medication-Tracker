#ifndef PET_RECORDS_H
#define PET_RECORDS_H
#include <QString>

struct petNode{
    QString id;
    QString name;
    QString type;
    QString breed;
    petNode *next;
};
extern petNode *head;
void insertPet(const QString& id, const QString& name, const QString& type, const QString& breed);
PetNode* searchPet(const QString& id);
bool deletePet(const QString& id);
bool updatePetVetVisit(const QString& id, const QString& vetVisitInfo);

#endif