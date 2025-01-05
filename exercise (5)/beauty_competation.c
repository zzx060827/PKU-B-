#include<stdio.h>

int main()
{
    int gender,weight;
    scanf("%c %d",&gender,&weight);
    if(gender == 'M'){if(weight>100){printf("Beauty");}else{printf("Not beauty");}}
    else{if(weight>80){printf("Beauty");}else{printf("Not beauty");}}
}