#include <stdio.h>

void MainMenu() {
    printf("\n");
    printf("*****************************\n");
    printf("*       MULTI CALCULATOR   *\n");
    printf("*****************************\n");
    printf("* 1.) Temp Converter        *\n");
    printf("* 2.) Simple Calc           *\n");
    printf("* 3.) BMI Calculator        *\n");
    printf("* Enter 1 or 2 or 3         *\n");
    printf("*****************************\n");
}

void displayMenu() {
    printf("\n");
    printf("*****************************\n");
    printf("*       SIMPLE CALCULATOR   *\n");
    printf("*****************************\n");
    printf("* Add (+)                   *\n");
    printf("* Subtract (-)              *\n");
    printf("* Multiply (*)              *\n");
    printf("* Divide (/)                *\n");
    printf("*****************************\n");
}

float tempconvert(float fahrenheit ) {
  return (5.0 / 9.0) * (fahrenheit - 32.0);
}

void temp() {
  double num1;
  printf("Enter Temp In Fahrenheit:");
    scanf("%lf", &num1);
  double result = tempconvert(num1);
  printf("Result: %.2lf\n", result);
}

void bmi() {
  double num1, num2;
  printf("Enter Height in Meter:");
    scanf("%lf", &num1);
  printf("Enter Weight In Kg:");
    scanf("%lf", &num2);
  double bmi = (num1 * num1) / num2;
  printf("BMI: %.2lf\n", bmi);
}

void calc() {
  displayMenu();
  char operator;
  double num1, num2, result;
  printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
  printf("Enter first number:");
    scanf("%lf", &num1);
  printf("Enter second number:");
    scanf("%lf", &num2);


    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2lf\n", result);
            break;
        case '/':
            result = num1 / num2;
            printf("Result: %.2lf\n", result);
            break;
    }
}

void main(){
  MainMenu();
  int num1;
  printf("Choose Any One (1, 2, 3):");
  scanf("%d", &num1);
  switch (num1) {
    case 1:
        temp();
        break;
    case 2:
        calc();
        break;
    case 3:
        bmi();
        break;
    default:
        printf("Invalid choice!\n");
        break;
  }
}
