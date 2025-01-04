#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char quene[105];
int stack[105]={0};
int top = -1;
char boy;char girl;

int main() 
{
    fgets(quene, sizeof(quene), stdin);
    int len = strlen(quene);
    if(quene[len-1] == '\n')
    {
        quene[len-1] = '\0';
        len--;
    }
    boy = quene[0];
    for(int i=0;i<len;i++)
    {
        if(quene[i]!= boy)
        {
            girl = quene[i];
            break;
        }
    }
    for(int i=0;i<len;i++)
    {
        if(quene[i] == boy)
        {
            stack[++top] = i;
        }
        else if(quene[i] == girl)
        {
            printf("%d %d\n", stack[top--], i);
        }
    }

}