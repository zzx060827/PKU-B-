#include <stdio.h>
#include <string.h>

int main(void) { 
	char str[1050];int word[102][2]={0};
    int count=0,w=0;
	fgets(str,1050,stdin);
    int le=strlen(str);
	if(str[le-1]=='\n')
	{
	    str[le-1]='\0';
	    le--;
	}

	for(int j=0;j<le;j++)
	{
	    if(str[j]!=' ')count++;
	    if(str[j]==' '){word[w][1]=j-1;word[++w][0]=j+1;}
	}
	word[w][1]=le-1;
	int n;scanf("%d",&n);
	getchar();
	for(int p=0;p<n;p++)
	{
	    char code[10];
	    int a,b,c;
	    fgets(code,10,stdin);int len=strlen(code);

	    if(code[len-1]=='\n')
	    {
	        code[len-1]='\0';
	        len--;
	    }
	    if(code[0]=='e')
	    {
	        a=code[3]-'0'-1;
	        b=code[5]-'0'-1;
	        int ts,te;
	        ts=word[b][0];te=word[b][1];
	        word[b][0]=word[a][0];
	        word[b][1]=word[a][1];
	        word[a][1]=te;
	        word[a][0]=ts;
	    }
	    if(code[0]=='r')
	    {
	       c=code[3]-'0'-1;
	       for(;c<w;c++)
	       {
	            word[c][0]=word[c+1][0];word[c][1]=word[c+1][1];
	       }
	       w--;
	    }
	}
	
	for (int i2 = 0; i2 <= w; i2++) 
	{
    for (int i = word[i2][0]; i <= word[i2][1]; i++) {
        if(str[i]!='\n')
        printf("%c", str[i]);
    }
    if (i2 < w ) {
        printf(" ");
    }
}
}
