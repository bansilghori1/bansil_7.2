//Q.6 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;

for(i=1;i<=5;i++){
for(k=1;k<=i-1;k++){
     printf(" ");

    }
    for(j=5;j>=i;j--){

   printf("%d",j);

    }
    
    
   
printf("\n");


}


getch();
}
/*
54321
 5432
  543
   54
    5
*/