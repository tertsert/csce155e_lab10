#include "Contact.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to add a new contact to the address book
void addContact(Contact contacts[], int *numContacts, char name[], char phoneNumber[], char email[]) {
    if (*numContacts < MAX_CONTACTS) {
        strcpy(contacts[*numContacts].name, name);
        strcpy(contacts[*numContacts].phoneNumber, phoneNumber);
        strcpy(contacts[*numContacts].email, email);
        (*numContacts)++;
        printf("Contact added successfully!\n");
    } else {
        printf("Address book is full. Cannot add more contacts.\n");
    }
}

// Function to compare two contacts for sorting
int compareContacts(const void *a, const void *b) {
    const Contact *contactA = (const Contact *)a;
    const Contact *contactB = (const Contact *)b;
    return strcmp(contactA->name, contactB->name);
}

// Function to sort contacts by name
void sortContacts(Contact contacts[], int numContacts) {
    qsort(contacts, numContacts, sizeof(Contact), compareContacts);
    printf("Contacts sorted by name.\n");
}

// Function to display all contacts in the address book
void displayContacts(Contact contacts[], int numContacts) {
    if (numContacts == 0) {
        printf("No contacts found.\n");
    } else {
        printf("Contacts in the address book:\n");
        for (int i = 0; i < numContacts; i++) {
            printf("Name: %s, Phone: %s, Email: %s\n", contacts[i].name, contacts[i].phoneNumber, contacts[i].email);
        }
    }
}

// Function to delete a contact at a given index
void deleteContact(Contact contacts[], int *numContacts, int index) {
    if (index >= 0 && index < *numContacts) {
        for (int i = index; i < *numContacts - 1; i++) {
            contacts[i] = contacts[i + 1];
        }
        (*numContacts)--;
        printf("Contact deleted successfully!\n");
    } else {
        printf("Invalid index. No contact deleted.\n");
    }
}
