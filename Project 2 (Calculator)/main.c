#include <stdio.h>

float Add(float,float);
float Sub(float,float);
float Multi(float,float);

float Add(float a,float b){
    printf("Addition of %.2f and %.2f is: %.2f", a, b, a + b);
};
float Sub(float a,float b){
    printf("Substraction of %.2f and %.2f is: %.2f", a, b, a - b);
};
float Multi(float a,float b){
    printf("Substraction of %.2f and %.2f is: %.2f", a, b, a * b);
};
float Div(float a,float b ){
    printf("Division of %.2f and %.2f is: %.2f", a, b, a / b);
};

int main(){
    int operation;
    printf("Welcome to the Calculator Choose the Operation (1-4)\n 1.Addition(+) \n 2.Substraction(-) \n 3.Substraction(x) \n 4.Division(/)\n");
    printf("Enter : ");
    scanf("%d",&operation);

    float operant1, operant2;
    printf("Enter The First Operant: ");
    scanf("%f",&operant1);
    printf("Enter The second Operant: ");
    scanf("%f",&operant2);
    
    if(operation == 1){
        Add(operant1,operant2);
    }
    else if(operation == 2){
        Sub(operant1,operant2);
    }
    else if(operation == 3){
        Multi(operant1,operant2);
    }
    else if(operation == 4){
        if (operant2 == 0){
            printf("Undefined!");
        }else{
            Div(operant1,operant2);
        }
    }
    return 0;
}