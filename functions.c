#include "header.h"


int intFunction(int number1){

return number1 *10;

}


void voidFunction(){

printf("void function");

}

//void (*ptr)(int , double);


student function1(void){
    student s2;
    s2.age = 10 ;
    s2.grade = 8;

    return s2;
}

int summation(int number1,int number2){

return number1+number2;
}



char characters(char c){
return c;
}

void stringFunction(char* s){
printf("%s",s);
}


double mult(int number , int secondNumber){
return number*secondNumber;
}
double multDouble(double number , double secondNumber){
return number*secondNumber;
}
float calculateSum(float num[]){
    int i=0;
    float sum=0;
for(i=0;i<4;i++){
    sum+=num[i];
}
return sum;
}
short calculateshort(short number1 , short number2){
return number1+number2;
}
long int  calculateLongInt(long number1 , long number2){
    return number1+number2;
}











