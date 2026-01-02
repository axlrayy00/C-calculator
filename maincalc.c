#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    if (b == 0) {
        printf("Error: Cant divide by zero\n");
        return 0;
    }
    return (float)a / (float)b;
}

int main() 

{
    int a;
    int b;
    char op;


printf("Welcome to Axl's Calculator V1\n");

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter another number: ");
    scanf("%d", &b);

    
    printf("Pick an operation (+, -, *, /): ");
    scanf(" %c", &op);




    if (op == '+') {
        printf("Result: %d\n", add(a, b));
    } else if (op == '-') {
        printf("Result: %d\n", subtract(a, b));
    } else if (op == '*') {
        printf("Result: %d\n", multiply(a, b));
    } else if (op == '/') {
        printf("Result: %.2f\n", divide(a, b));
    } else {
        printf("Invalid operation\n");
    }


    return 0;
}
  
