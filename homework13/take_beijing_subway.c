#include <stdio.h>

double count(int d)
{
    if(d<=6)return 3.0;
    else if(d<=12)return 4.0;
    else if(d<=22)return 5.0;
    else if(d<=32)return 6.0;
    else
    {
        return (double)7.0+(d-32)/10;
    }
}

int main() 
{
    int consume,d;double price;
    scanf("%d %d",&consume,&d);
    if(consume>=100&&consume<150){price=0.8*count(d);}
    else if(consume>=150){price=0.5*count(d);}
    else{price=count(d);}
    printf("%.2lf",price);
    return 0;
}