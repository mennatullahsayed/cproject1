#include <stdio.h>
#include <stdlib.h>
#include "header.h"


int main()
{

int integerResults;
char characterResult;
// integer input and output  (number * 10)

 integerResults= intFunction(10);
printf("number10*10=> %d\n",integerResults);

// no input and no output
voidFunction();

// return type int and take 2 integer (num1+num2)
integerResults = summation(1,2);
printf("\nsum 1+3 => %d\n",integerResults);


//char input and output
characterResult = characters('s');
printf("character => %c\n",characterResult);

// macro with parameter
integerResults = square(3);
printf("square 3 => %d\n",integerResults);

// macro with parameter
integerResults = MAXIMUM(3,5);
printf("MAXIMUM 3,5 => %d\n",integerResults);


// Inline function
printf("MAXIMUM 3,5 => %d\n", MaximumNumberInlineFunction(3,5));


// pointer to char
char *arrayOfChar ="hello";
stringFunction(arrayOfChar);

// struct
student s= function1();
printf("\n%d",s.grade);
printf("\n%d",s.age);


double d= mult(1,2);
printf("\n%d",d);

d=multDouble(1111,1111);
printf("\n%d",d);

float  num[]={1,2,0.4,0.6};
float f= calculateSum(num);
printf("\n%f",f);

short sh= calculateshort(1,1);

printf("\n%d",sh);

long int li = calculateLongInt(2222222222,1111111111111);

printf("\n%hd ",li);

    return 0;
}



