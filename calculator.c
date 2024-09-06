#include <stdio.h>

int main(){
    char operator;
    double first, second;
    printf("-=-=-=CALCULATOR=-=-=-\n");
    printf("Type the operator(+, -, *, / ): \n");
    scanf("%c", &operator);

    printf("Type the first number: \n");
    scanf("%lf",&first);
    printf("Type the second number: \n");
    scanf("%lf",&second);

    switch (operator)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", first, second, (first+second));
        break;

    case '-':
        printf("%.2lf - %.2lf = %.2lf", first, second, (first-second));
        break;

    case '*':
        printf("%.2lf * %.2lf = %.2lf", first, second, (first*second));
        break;

    case '/':
        if( second != 0.0)
            printf("%.2lf / %.2lf = %.2lf", first, second, (first/second));
        else
            printf("You can't divide by zero.");
        break;
    default:
        printf("Invalid Operator");
    }
    return 0;
}