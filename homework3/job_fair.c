#include <stdio.h>

int main() {
    int enter[1003] = {0}; 
    int count = 0;int max_po = 0; 

    for(;;) // read input until EOF
    {
        scanf("%d", &enter[count]);
        count++; 
        int c = getchar();
        if (c == '\n')
         {  
            break; 

        }
    }
    int out[1003], temp[1003] = {0};
    for(int i = 0; i < count; i++)
    {
        scanf("%d", &out[i]);
        int c = getchar();
        if (c == '\n')
         {  
            break; 

        }
    }
    for(int i = 0; i < count; i++) //count the popularity of each time
    {
        for(int j = enter[i]; j < out[i]; j++)
        {
            temp[j]++;
        }
    }
    for(int i = 0; i < 1003; i++)
    {
        if(temp[i] > max_po)
        {
            max_po = temp[i];
        }
    }
    printf("%d %d\n",count, max_po);



    return 0;
}