#include <iostream>
#include <list>
#include <fstream>
#include <string>

using namespace std;

class Patient {
public:
    string patientNumber, name, birthday, sex, contactInfo;
    int age;
    string allergies, currentMedication, medicalConditions;
    string visitPurpose, visitDate;
    double treatmentCost, outstandingBalance;
};

class DentalClinic {
private:
    list<Patient> patients;
    const string filename = "patients.txt";

public:
    DentalClinic() { loadFromFile(); }
    ~DentalClinic() { saveToFile(); }

    void addPatient() {
        // TODO
        
        
        //All variables are already declared
		//Each patient should have the ff:
        /*Personal Information 
			- Patient Number
			- Name
			- Age 
			- Birthday
			- Sex
			- Contact Information 
			- Address
			
			Medical & Dental History 
			- Allergies
			- Current Medication
			- Medical Conditions (Diabetes/Heart Problems/Etc.)
			
			Appointments and Scheduling
			- Purpose and Dates of Visit
			
			Financial Records 
			- Cost of Treatments 
			- Outstanding Balance
        
        */
    }

    void searchPatient() {
        // TODO
    }

    void updatePatient() {
        // TODO
    }

    void deletePatient() {
        // TODO
    }

    void showAllPatients() {
        // TODO
    }

    void saveToFile() {
        // TODO
    }

    void loadFromFile() {
        // TODO
    }
};

int main() {
    DentalClinic clinic;
    int choice;
    
    do {
        cout << "===== Dental Clinic Patient Management System =====\n";
        cout << "[1] Add Patient\n";
        cout << "[2] Search Patient\n";
        cout << "[3] Update Patient\n";
        cout << "[4] Delete Patient\n";
        cout << "[5] Show All Patients\n";
        cout << "[6] Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
        switch (choice) {
            case 1: 
				clinic.addPatient(); 
				break;
            case 2: 
				clinic.searchPatient(); 
				break;
            case 3: 
				clinic.updatePatient(); 
				break;
            case 4: 
				clinic.deletePatient(); 
				break;
            	case 5: clinic.showAllPatients(); 
				break;
            case 6: 
				cout << "Exiting...\n"; 
				break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 6);
    
    return 0;
}

