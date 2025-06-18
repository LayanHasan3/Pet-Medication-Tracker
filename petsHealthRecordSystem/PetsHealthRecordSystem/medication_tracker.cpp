#include "medication_tracker.h"

void MedicationTracker::addMedication(const QString &petID, const QString &medication) 
{
    if (!medMap[petID].contains(medication))
        medMap[petID].append(medication);
}

void MedicationTracker::removeMedication(const QString &petID, const QString &medication) {
    if (medMap.contains(petID)) {
        medMap[petID].removeAll(medication);
        if (medMap[petID].isEmpty()) {
            medMap.remove(petID);
        }
    }
}

QStringList MedicationTracker::getMedications(const QString &petID) const {
    return medMap.value(petID);
}

QHash<QString, QStringList> MedicationTracker::getAllMedications() const {
    return medMap;
}
