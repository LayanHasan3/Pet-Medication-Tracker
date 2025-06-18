#ifndef MEDICATION_TRACKER_H
#define MEDICATION_TRACKER_H

#include <QHash>
#include <QString>
#include <QStringList>

class MedicationTracker {
private:
    QHash<QString, QStringList> medMap;  // switched QMap to QHash

public:
    void addMedication(const QString &petID, const QString &medication);
    void removeMedication(const QString &petID, const QString &medication);
    QStringList getMedications(const QString &petID) const;
    QHash<QString, QStringList> getAllMedications() const;  // return QHash now
};

#endif
