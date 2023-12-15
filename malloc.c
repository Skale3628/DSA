#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct company {
    char cname[20];
    int empcount;
    float revenue;
};

/*
struct project{
    char projectname[10];
    int empcount;
    float profit;
};
*/

void main(){
    struct company *cptr=(struct company *)malloc(sizeof(struct company));
    strcpy(cptr->cname,"veritas");
    cptr->empcount=700;
    (*cptr).revenue=150.50;

    printf("%s\n",cptr->cname);
}