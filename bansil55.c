//Q.3 Write a Program to print the below pattern using nested for loop.
#include<stdio.h>
#include<conio.h>

void main(){
int i,j,k;

for(i=5;i>=1;i--){
for(k=1;k<=i;k++){
     printf(" ");

    }
    for(j=i;j<=5;j++){

   printf("%d",i);

    }
    
    
   
printf("\n");


}


getch();
}
/*
    5
   44
  333
 2222
11111
*/