#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for patient
struct Patient {
    char name[50];
    int age;
    char gender[10];
    char address[100];
    // Add more fields as needed
};

// Function to register a new patient
void registerPatient() {
    struct Patient newPatient;
    printf("Enter patient name: ");
    scanf("%s", newPatient.name);
    printf("Enter patient age: ");
    scanf("%d", &newPatient.age);
    printf("Enter patient gender: ");
    scanf("%s", newPatient.gender);
    printf("Enter patient address: ");
    scanf("%s", newPatient.address);
    // Add code to store newPatient in database or file
    printf("Patient registered successfully!\n");
}

// Function to display patient details
void displayPatientDetails(struct Patient patient) {
    printf("Name: %s\n", patient.name);
    printf("Age: %d\n", patient.age);
    printf("Gender: %s\n", patient.gender);
    printf("Address: %s\n", patient.address);
    // Add code to display more patient details
}

int main() {
    // Example usage:
    registerPatient();
    return 0;
}
