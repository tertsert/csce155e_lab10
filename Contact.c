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

// Function to compare two contacts for sorting
int compareContacts(const void *a, const void *b) {
    const struct Contact *contactA = (const struct Contact *)a;
    const struct Contact *contactB = (const struct Contact *)b;
    return strcmp(contactA->name, contactB->name);
}

// Function to sort contacts by name
void sortContacts(struct Contact contacts[], int numContacts) {
    qsort(contacts, numContacts, sizeof(struct Contact), compareContacts);
    printf("Contacts sorted by name.\n");
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