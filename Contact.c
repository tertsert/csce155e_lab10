#include "Contact.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add a new contact to the address book
void addContact(struct Contact contacts[], int *numContacts, char name[], char phoneNumber[]) {
    if (*numContacts < MAX_CONTACTS) {
        strcpy(contacts[*numContacts].name, name);
        strcpy(contacts[*numContacts].phoneNumber, phoneNumber);
        (*numContacts)++;
        printf("Contact added successfully!\n");
    } else {
        printf("Address book is full. Cannot add more contacts.\n");
    }
}

// Function to display all contacts in the address book
void displayContacts(struct Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        printf("No contacts found.\n");
    } else {
        printf("Contacts in the address book:\n");
        for (int i = 0; i < numContacts; i++) {
            printf("Name: %s, Phone: %s\n", contacts[i].name, contacts[i].phoneNumber);
        }
    }
}