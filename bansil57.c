//Q.5 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;

for(i=5;i>=1;i--){
for(k=5;k>=i;k--){
     printf(" ");

    }
    for(j=i;j>=1;j--){

   printf("%d",j);

    }
    
    
   
printf("\n");


}


getch();
}
/*
54321
 4321
  321 
   21
    1

*/