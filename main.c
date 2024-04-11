#include <stdio.h>
#include "Contact.h"

int main() {
    Contact contacts[MAX_CONTACTS];
    int numContacts = 0;

    char choice;
    char name[NAME_LEN], phoneNumber[PHONE_LEN], email[EMAIL_LEN];
    int index;

    do {
        printf("\nAddress Book Management System\n");
        printf("1. Add Contact\n");
        printf("2. Sort Contacts by Name\n");
        printf("3. Display Contacts\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf(" %c", &choice);

        switch(choice) {
            case '1':
                printf("Enter contact name: ");
                scanf("%s", name);
                printf("Enter phone number: ");
                scanf("%s", phoneNumber);
                printf("Enter email address: ");
                scanf("%s", email);
                addContact(contacts, &numContacts, name, phoneNumber, email);
                break;
            case '2':
                sortContacts(contacts, numContacts);
                break;
            case '3':
                displayContacts(contacts, numContacts);
                break;
            case '4':
                printf("Enter index of contact to delete: ");
                scanf("%d", &index);
                deleteContact(contacts, &numContacts, index);
                break;
            case '5':
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while(choice != '5');

    return 0;
}
