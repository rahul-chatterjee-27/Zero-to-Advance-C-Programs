#include <stdio.h>

int main() {
    int a, b;
    char choice;

    printf("Enter the first number: ");
    scanf("%d", &a);

    printf("Enter the choice (+, -, *, /, %%): ");
    scanf(" %c", &choice);  

    printf("Enter the second number: ");
    scanf("%d", &b);

    switch(choice) {
        case '+': 
            printf("%d + %d = %d", a, b, a + b);
            break;
        case '-': 
            printf("%d - %d = %d", a, b, a - b);
            break;
        case '*': 
            printf("%d * %d = %d", a, b, a * b);
            break;
        case '/': 
            if(b != 0)
                printf("%d / %d = %d", a, b, a / b);
            else
                printf("Error: Division by zero!");
            break;
        case '%': 
            if(b != 0)
                printf("%d %% %d = %d", a, b, a % b);
            else
                printf("Error: Modulo by zero!");
            break;
        default: 
            printf("Invalid choice...");
    }

    return 0;
}