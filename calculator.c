#include<stdio.h>
#include<stdlib.h>
#include <math.h>

double num1;
double num2; //input number double precision
double ris;
double exponent; //input for ^exp
int ch; //choise of operators
int ch2; //choise for a new calculation


int main(){

    printf("calculator in C. By Fabio e Pier! \n");
    printf("\n");

do{

    printf(":: insert the operator(1.+) (2.-) (3.*) (4./) (5.^) (6.sqrt) \n");
    scanf("%d", &ch);
         //switch case
    switch(ch){

        case 1:
            sum();
        break;

        case 2:
            sub();
        break;

        case 3:
            prod();
        break;

        case 4:
            divisor();
        break;

        case 5:
            pot();
        break;

        case 6:
            sqrtFun();
        break;

        default:
            printf(":: insert a valid operator, try again! \n");
        }

        printf(":: new calculation? (1.yes) (2.no) \n");
        scanf("%d", &ch2);

}while(ch2 == 1);


     return 0;

}


void sum(){

    printf(":: insert two number: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    ris = num1 + num2;
    printf("%.2lf + %.2lf = %.2lf", num1, num2, ris);
    printf("\n");
}

void sub(){

    printf(":: insert two number: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    ris = num1 - num2;
    printf("%.2lf - %.2lf = %.2lf", num1, num2, ris);
    printf("\n");
}

void prod(){

    printf(":: insert two number: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    ris = num1 * num2;
    printf("%.2lf * %.2lf = %.2lf", num1, num2, ris);
    printf("\n");
}

void divisor(){

    printf(":: insert two number: \n");
    scanf("%lf", &num1);
    scanf("%lf", &num2);

    ris = num1 / num2;
    printf("%.2lf / %.2lf = %.2lf", num1, num2, ris);
    printf("\n");
}

void pot(){

    printf(":: insert the number: \n");
    scanf("%lf", &num1);

    printf(":: insert the number of exp: \n");
    scanf("%lf", &exponent);

    ris = pow(num1,exponent);

    printf("%.1lf^%.1lf = %.1lf \n", num1, exponent, ris);

}

void sqrtFun(){

    printf(":: insert the number: \n");
    scanf("%lf", &num1);

    if(num1 > 0){

        ris = sqrt(num1);
        printf("%.2lf =  %.2lf \n", num1, ris);
    }else{

        printf("not a negative number! \n");
    }
}



