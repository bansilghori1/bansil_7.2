/*Q.10 Write a Program to print the below pattern using nested for loop.
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1*/

#include<stdio.h>
#include<conio.h>

void main (){

int i,j,k,s;

for(i=1;i<=5;i++){

for(k=4;k>=i;k--){
    printf(" ");
}

for(j=1;j<=i;j++){

    printf("%d",j);
}

for(s=i-1;s>=1;s--){
    printf("%d",s);
}

printf("\n");
}
getch();
}