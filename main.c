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
        printf("2. Exit\n");
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
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != '2');

    return 0;
}
