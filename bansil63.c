/*Q.11 Write a Program to print the below pattern using nested for loop.
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *  
*/

#include<stdio.h>
#include<conio.h>

void main (){

int i,j,k,s,l='*';

for(i=1;i<=5;i++){

for(k=4;k>=i;k--){
    printf(" ");
}

for(j=1;j<=i;j++){

    printf("%c",l);
}

for(s=i-1;s>=1;s--){
    printf("%c",l);
}

printf("\n");
}
getch();
}