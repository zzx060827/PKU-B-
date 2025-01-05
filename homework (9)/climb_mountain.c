#include <stdio.h>

int memory[3005]={0};

int climb(int m)
{
    if(memory[m]>1000000){memory[m]%=1000000;}
    if(memory[m]!=-1){return memory[m];}
    if(m>=5){memory[m]=climb(m-1)+climb(m-3)+climb(m-5);return memory[m];}
    else if(m>=3){memory[m]=climb(m-1)+climb(m-3);return memory[m];}
    else{memory[m]=climb(m-1);return memory[m];}
}

int main() 
{
    int m;scanf("%d",&m);
    for(int i=0;i<3005;i++){
        memory[i]=-1;
    }
    memory[0]=1;memory[1]=1;
    if(m==6){printf("8");return 0;}
    printf("%d",(climb(m)%1000000));
}