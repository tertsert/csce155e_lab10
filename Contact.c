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