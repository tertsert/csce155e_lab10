#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15

// Struct definition for a contact
struct Contact {
    char name[NAME_LEN];
    char phoneNumber[PHONE_LEN];
};

// Function declarations
void addContact(struct Contact contacts[], int *numContacts, char name[], char phoneNumber[]);

#endif // CONTACT_H