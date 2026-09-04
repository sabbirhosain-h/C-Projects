#include <stdio.h>

float Add(float,float);
float Sub(float,float);
float Multi(float,float);
float Avrage(int a);
int MatrixAdd();
int MatrixSubs();

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
};
int MatrixAdd(){
    int a[3][3], b[3][3], c[3][3], i , j;

    printf("Enter the first matrix (3x3):\n");
    printf("\n");
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++){
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix (3x3):\n");
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++) {
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++){
           c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Resultant matrix after addition:\n");
    for(i = 0 ; i < 3 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
};
int MatrixSubs(){
    int a[3][3], b[3][3] , c[3][3], i , j;
    printf("Enter the first matrix (3x3):\n");
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++){
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the second matrix (3x3):\n");
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++){
            printf("Enter Element [%d][%d] : ",i,j);
            scanf("%d", &b[i][j]);
        }
        printf("\n");
    }
    for(i = 0 ; i < 3 ; i++) {
        for(j = 0 ; j < 3 ; j++){
           c[i][j] = a[i][j] - b[i][j];
        }
        printf("\n");
    }
    printf("Resultant matrix after Substraction:\n");
    for(i = 0 ; i < 3 ; i++ ){
        for(j = 0 ; j < 3 ; j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
};

int main(){
    int operation;
    printf("Welcome to the Calculator Choose the Operation (1-4)\n 1.Addition(+) \n 2.Substraction(-) \n 3.Substraction(x) \n 4.Division(/)\n 5.Find Avrage \n 6.Matrix Addition \n 7.Matrix Substraction \n");

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
    else if (operation == 6 ) {
        MatrixAdd();
    }
    else if (operation == 7 ) {
        MatrixSubs();
    }
    return 0;
}