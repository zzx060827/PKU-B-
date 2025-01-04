#include <stdio.h>
#include <string.h>

int main(void) 
{ 
	char str[105]={0};
	fgets(str,sizeof(str),stdin);
	int len=strlen(str);
	if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }
    int t=str[0];
	for(int i=0;i<len-1;i++)
	{
	    str[i]+=str[i+1];
	}
	str[len-1]+=t;
	str[len] = '\0';
	printf("%s",str);

}
