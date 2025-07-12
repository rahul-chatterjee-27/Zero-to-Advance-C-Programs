#include <stdio.h>

int main() {
    char name[50], email_id[50], location[100];
    int age;
    long int phone_no;

    printf("Enter your name: ");
    scanf("%s", name);  

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your Email ID: ");
    scanf("%s", email_id);

    printf("Enter your phone number: ");
    scanf("%ld", &phone_no);

    printf("Enter your location: ");
    scanf("%s", location);  

    printf("\n--- User Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Email ID: %s\n", email_id);
    printf("Phone Number: %ld\n", phone_no);
    printf("Location: %s\n", location);

    return 0;
}
