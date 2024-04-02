#include <stdio.h>
#include "Contact.h"

int main() {
    struct Contact contacts[MAX_CONTACTS];
    int numContacts = 0;

    char choice;
    char name[NAME_LEN], phoneNumber[PHONE_LEN];

    do {
        printf("\nAddress Book Management System\n");
        printf("1. Add Contact\n");
        printf("2. Sort Contacts by Name\n");
        printf("3. Display Contacts\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter contact name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phoneNumber);
                addContact(contacts, &numContacts, name, phoneNumber);
                break;
            case '2':
                sortContacts(contacts, numContacts);
                break;
            case '3':
                displayContacts(contacts, numContacts);
                break;
            case '4':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != '4');

    return 0;
}
