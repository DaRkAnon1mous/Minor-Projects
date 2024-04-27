#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structure for appointment
struct Appointment {
    char patientName[50];
    char doctorName[50];
    char dateTime[20];
    // Add more fields as needed
};

// Function to schedule a new appointment
void scheduleAppointment() {
    struct Appointment newAppointment;
    printf("Enter patient name: ");
    scanf("%s", newAppointment.patientName);
    printf("Enter doctor name: ");
    scanf("%s", newAppointment.doctorName);
    printf("Enter date and time (YYYY-MM-DD HH:MM): ");
    scanf("%s", newAppointment.dateTime);
    // Add code to store newAppointment in database or file
    printf("Appointment scheduled successfully!\n");
}

// Function to display appointment details
void displayAppointmentDetails(struct Appointment appointment) {
    printf("Patient: %s\n", appointment.patientName);
    printf("Doctor: %s\n", appointment.doctorName);
    printf("Date & Time: %s\n", appointment.dateTime);
    // Add code to display more appointment details
}

int main() {
    // Example usage:
    scheduleAppointment();
    return 0;
}
