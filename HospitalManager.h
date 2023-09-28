#include <iostream>
#include <string>
#include <Patient.h>
#include <Doctor.h>
#include <MedicalRecord.h>
using namespace std;

class HospitalManager {
private:
    Patient patients;
    Doctor doctors;
    MedicalRecord medicalRecords;

public:
    void addPatient(Patient patient);
    void updatePatient(int patientID, Patient patient);
    void deletePatient(int patientID);
    Patient findPatientByID(int patientID);
    

    void addDoctor(Doctor doctor);
    void updateDoctor(int doctorID, Doctor doctor);
    void deleteDoctor(int doctorID);
    Doctor findDoctorByID(int doctorID);
    

    void addMedicalRecord(MedicalRecord record);
    void updateMedicalRecord(int recordID, MedicalRecord record);
    void deleteMedicalRecord(int recordID);
    MedicalRecord findMedicalRecordByID(int recordID);
    

    void printPatientList();
    void printDoctorList();
    void printMedicalRecordList();

    int countPatientsToday();

};