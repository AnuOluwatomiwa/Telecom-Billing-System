#include <stdio.h>
#include <string.h>
// Structure to hold customer information
struct Customer {
    char name[50];
    char phoneNumber[15];
    float usage;
    float totalBill;
};

// Global array to store customer data
struct Customer customers[100];

// Global variable to keep track of the number of customers
int customerCount = 0;

//Function to add a new customer record
void addRecord()
{
    if (customerCount < 100) {
        printf("\nEnter name: ");
        scanf("%[^\n]", customers[customerCount].name);
        printf("\nEnter phone number: ");
        scanf("%s", customers(customerCount).phoneNumber);
        printf("Enter usage (in minutes): ");
        scanf("%f", customers(customerCount).usage);
        customers(customerCount).totalBill
            = customers[customerCount].usage * 0.1;
        customerCount++;
        printf("\nRecord added successfully!\n");
    }
    else {
        printf("\nMaximum number of records reached!\n");
    }
}

//Function to view the list of customer records
void viewRecords()
{
    printf("\nName\tPhone Number\tUsage(min)\tTotal "
            "Bill($)\n");
    for (int i = 0; i < customerCount; i++) {
        printf("%s\t%s\t%.2f\t%.2f\n", customers[i].name,
                customers[i].phoneNumber, customers[i].usage,
                customers[i].totalBill);
    }
}

//Function to modify a customer record
void modifyRecord(char phoneNumber[])
{
    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber)
            == 0) {
            printf(
                "\nEnter new usage (in minutes) for %s: ",
                customer[i].name);
            scanf("%f", &customers[i].usage);
            customers[i].totalBill
                = customers[i].usage * 0.1;
            printf("\nRecord modified successfully!\n");
            return;
        }
    }
    printf("\nRecord not found!\n");
}

void viewPayment(char phoneNumber[])
(
    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber)
            == 0) {
            printf("\nThe total bill for %s: $%.2f\n", 
                    customer[i].name,
                    customer[i].totalBill);
            return;
        }
    }
    printf("\nRecord not found!\n");
)

void searchRecord(char phoneNumber[])
(
    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber)
            == 0) {
            printf("%s\t%s\t%.2f\t%.2f\n", customers[i].name, customers[i].phoneNumber, customers[i].usage, customers[i].totalBill);
            return;
        }
    }
    printf("\nRecord not found!\n");
)

void deleteRecord(char phoneNumber[])
(
    for (int i = 0; i < customerCount; i++) {
        if (strcmp(customers[i].phoneNumber, phoneNumber) == 0)
            for (int j = i; i < customerCount - 1; j++) {
                customers[j] = customers[j + 1];
            }
            customerCount--;
            printf("\nRecord deleted successfully!\n");
            return;
    }
    printf("\nRecord not found!\n");
)

// Function to display menu options
void displayMenu()
{
    printf("\n1. Add New Record\n");    
    printf("2. View List of Records\n");    
    printf("3. Modify Record\n");
    printf("4. View Payment\n");
    printf("5. Delete Record\n");
    printf("6. Exit\n");    

}