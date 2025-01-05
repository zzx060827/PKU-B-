#include <stdio.h>

typedef struct{
    int price;
    int quantity;
}mask1;
#define MAX_MASK 100

int main() 
{
    int n,m;
    scanf("%d %d",&n,&m);if(n==0||m==0){printf("0");return 0;}
    mask1 mask[MAX_MASK];
    for(int i=0;i<m;i++)
    {
        scanf("%d %d",&mask[i].price,&mask[i].quantity);
    }
    for(int j=0;j<m-1;j++)
    {
    for(int i=0;i<m-1;i++)
    {
        mask1 temp;
        if(mask[i].price>mask[i+1].price)
        {
            temp=mask[i];
            mask[i]=mask[i+1];
            mask[i+1]=temp;
        }
    }
    }
    int count=0;int total=0;
    while(n-mask[count].quantity>mask[count+1].quantity)
    {
        n-=mask[count].quantity;
        total+=mask[count].price*mask[count].quantity;
        count++;
    }
    n-=mask[count].quantity;
        total+=mask[count].price*mask[count].quantity;
        count++;
    total+=mask[count].price*n;
    printf("%d",total);

}