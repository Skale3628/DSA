//pointer 

#include<stdio.h>
void main(){
char carr[5]={'a','b','c','d'};
char *cptr=carr;
int *iptr=carr;
printf("%c\n",*cptr);
printf("%c\n",*iptr);

cptr++;
iptr++;             //iptr+1*size of (data type of pointer)

printf("%c\n",*cptr);
printf("%c\n",*iptr);
}