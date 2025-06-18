#include "pet_records.h"

PetNode* petHead = nullptr;
void insertPet(const Qstring id, const QString& name, const QString& type, const QString& breed) {
    PetNode* newPet = new PetNode{id, name, type, breed, nullptr};
    if (!petHead) {
        petHead = newPet;
    } else {
        PetNode* current = petHead;
        while (current->next) {
            current = current->next;
        }
        current->next = newPet;
    }
}
PetNode* searchPet(const QString& id) {
    PetNode* current = petHead;
    while (current) {
        if (current->id == id) {
            return current;
        }
        current = current->next;
    }
    return nullptr;
}
bool deletePet(const QString& id) {
    PetNode* current = petHead;
    PetNode* previous = nullptr;
    while (current) {
        if (current->id == id) {
            if (previous) {
                previous->next = current->next;
            } else {
                petHead = current->next;
            }
            delete current;
            return true;
        }
        previous = current;
        current = current->next;
    }
    return false;
}
bool updatePetVetVisit(const QString& id, const QString& vetVisitInfo) {
    PetNode* pet = searchPet(id);
    if (!pet){
        return false;
    }
    return true;
}