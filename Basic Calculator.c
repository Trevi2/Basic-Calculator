#include<stdio.h>
#include<string.h>

//add function
double add(double a, double b)
{
    return a+b;
}

//subtract function
double sub(double a, double b)
{
    return a-b;
}

//multiplication function
double mult(double a, double b)
{
    return a*b;
}

//divide function
double div(double a, double b)
{
    return a/b;
}

//fibonacci function
double fib(double a)
{
    if(a == 1 || a == 2)
        return a-1;
    return fib(a-1) + fib(a-2);
}

//factorial function
double factorial(double a)
{
    if(a == 1) return 1;

    int sum = a;
    sum *= factorial(a-1);

    return sum;
}

int main()
{
    //variables
    char operation[100] = "temp";
    double num1 = 0, num2 = 0, sum = 0;
    double storeValue = 0; //used for store operation

    //intro statements
    printf("Welcome to the Basic Calculator!\n");
    printf("--------------------------------------------------------------------\n");

    //continues menu unless operationi is 'exit'
    while(strcmp(operation, "exit"))
    {
        //menu options
        printf("Please type which operation you would like to use: \n");
        printf("1) Add\n");
        printf("2) Subtract\n");
        printf("3) Multiply\n");
        printf("4) Divide\n");
        printf("5) Store\n");
        printf("6) Recall\n");
        printf("7) Fibonacci\n");
        printf("8) Factorial\n");
        printf("9) Exit\n");
        scanf("%s", operation); //user input for operation type
        printf("--------------------------------------------------------------------\n");

        if(!strcmp(operation, "exit"))
            printf("Thank you for using the Basic Calculator!\n");
        else
        {
            strlwr(operation); //converts word to all lowercase

            //computes based on operation
            if(!strcmp(operation, "add"))
            {
                printf("What 2 numbers would you like to %s?\n", operation);
                scanf("%lf %lf", &num1, &num2); //user input for numbers
                printf("--------------------------------------------------------------------\n");
                sum = add(num1, num2);
                printf("%lf + %lf = %lf\n", num1, num2, sum);
            }
            else if(!strcmp(operation, "subtract"))
            {
                printf("What 2 numbers would you like to %s?\n", operation);
                scanf("%lf %lf", &num1, &num2); //user input for numbers
                printf("--------------------------------------------------------------------\n");
                sum = sub(num1, num2);
                printf("%lf - %lf = %lf\n", num1, num2, sum);
            }
            else if(!strcmp(operation, "multiply"))
            {
                printf("What 2 numbers would you like to %s?\n", operation);
                scanf("%lf %lf", &num1, &num2); //user input for numbers
                printf("--------------------------------------------------------------------\n");
                sum = mult(num1, num2);
                printf("%lf * %lf = %lf\n", num1, num2, sum);
            }
            else if(!strcmp(operation, "divide"))
            {
                printf("What 2 numbers would you like to %s?\n", operation);
                scanf("%lf %lf", &num1, &num2); //user input for numbers
                printf("--------------------------------------------------------------------\n");
                sum = div(num1, num2);
                printf("%lf / %lf = %lf\n", num1, num2, sum);
            }
            else if(!strcmp(operation, "store"))
            {
                storeValue = sum;
                printf("Stored number is: %lf\n", storeValue);
            }
            else if(!strcmp(operation, "recall"))
                printf("Recalled: %lf\n", storeValue);
            else if(!strcmp(operation, "fibonacci"))
            {
                printf("What number in the fibonacci sequence would you like to find?\n");
                scanf("%lf", &num1);
                printf("--------------------------------------------------------------------\n");
                sum = fib(num1);
                printf("Fibonnaci number: %lf\n", sum);
            }
            else if(!strcmp(operation, "factorial"))
            {
                printf("What number would you like to find the factorial of?\n");
                scanf("%lf", &num1);
                printf("--------------------------------------------------------------------\n");
                sum = factorial(num1);
                printf("Factorial: %lf\n", sum);
            }
            else
                printf("Not an option!\n");
        }
    }        

    return 0;
}