#include<stdio.h>
#include<string.h>

int main(void)
{
	int n;
	scanf("%d",&n);
	
	int i;
	
	for(i=1;i<=n;i++)
    {
		char s[100];
		int k=0;
        scanf("%s",s);
		int len = strlen(s);
        if(s[len-1] == '\n')
        {
            s[len-1] = '\0';
            len--;
        }
		
		if(len<6||len>12){
			continue;
		}else{
			int d=0,x=0,h=0,t=0,q=0;
			int j;
			for(j=0;s[j]!='\0';j++){
				if(s[j]>='A'&&s[j]<='Z'){
					d++;
				}else if(s[j]>='a'&&s[j]<='z'){
					x++;
				}else
				if(s[j]>='0'&&s[j]<='9'){
					h++;
				}else
				if(s[j]=='!'||s[j]=='@'||s[j]=='#'||s[j]=='$'){
					t++;
				}else{
					q++;
				}
			}
			if((d==0&&x==0&&h==0)||t==0||q!=0){
				continue;
			}
			
			j=0;
			printf("%s",s);
			printf("\n");
		}
		
	}
	return 0;
}