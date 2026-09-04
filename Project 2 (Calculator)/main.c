#include <stdio.h>

float Add(float,float);
float Sub(float,float);
float Multi(float,float);
float Avrage(int a);

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
float Avrage(int a){
    float avrage[100];
        for(int j = 0; j < a; j++){
            printf("Enter value %d :", 1 + j );
            scanf("%f", &avrage[j]);
        }
        float total = 0;
        for(int k = 0; k < a ; k++){
            total = total + avrage[k];
        }
    printf("Avrage of Given value is :%.2f", total/a);
}

int main(){
    int operation;
    printf("Welcome to the Calculator Choose the Operation (1-4)\n 1.Addition(+) \n 2.Substraction(-) \n 3.Substraction(x) \n 4.Division(/)\n 5.Find Avrage \n");

    printf("Enter : ");
    scanf("%d",&operation);
    float operant1, operant2;

    if ( operation == 1 || operation == 2 || operation == 3 || operation == 4 ){
         printf("Enter The First Operant: ");
         scanf("%f",&operant1);
         printf("Enter The second Operant: ");
         scanf("%f",&operant2);
    }   
    
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
    else if (operation == 5) {
        int i;
        printf("Enter the Number of Values(Max 100): ");
        scanf("%d", &i);
        Avrage(i);
    }
    return 0;
}