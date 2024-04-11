#ifndef CONTACT_H
#define CONTACT_H

#define MAX_CONTACTS 100
#define NAME_LEN 50
#define PHONE_LEN 15
#define EMAIL_LEN 50

// Define a type for Contact struct
typedef struct {
    char name[NAME_LEN];
    char phoneNumber[PHONE_LEN];
    char email[EMAIL_LEN]; // New field for email address
} Contact;

// Function declarations
void addContact(Contact contacts[], int *numContacts, char name[], char phoneNumber[], char email[]);
void displayContacts(Contact contacts[], int numContacts);
void sortContacts(Contact contacts[], int numContacts);
void deleteContact(Contact contacts[], int *numContacts, int index); // New function for deleting a contact

#endif // CONTACT_H
