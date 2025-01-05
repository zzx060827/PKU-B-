    #include <stdio.h>

    int main() 
    {
        for(;;)
        {
        int n = 0;
        scanf("%d", &n);
        int platform[n],length[n];
        if(n == 0) {break;}
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &platform[i]);
        }
        for(int i = 0; i < n; i++)
        {
            length[i] = 1;
            for(int j = i+1;platform[j] == platform[i]; j++)
            {
                length[i]++;
            }

        }
        int max_length,judge = 0;
        for(int i = 0; i < n; i++)
        {
            judge = 0;
            for(int j = 0; j < n; j++)
            {
                if(length[i] < length[j])
                {
                    judge = 1;
                    break;
                }
                
            }
            if(judge == 0){max_length = length[i];}
        }
        printf("%d\n", max_length);
        }


    }