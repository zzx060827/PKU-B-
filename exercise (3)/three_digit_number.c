#include <stdio.h>

int main() 
{
    int x,y,z;
    for(x=100;x<=333;x++)
    {
        y=2*x;
        z=3*x;
        int temp[10]= {0};
        //下面将提取出x,y,z的各位数字
        int a[3],b[3],c[3];
        a[0]=x/100;
        a[1]=(x-a[0]*100)/10;
        a[2]=x-a[0]*100-a[1]*10;
        b[0]=y/100;        
        b[1]=(y-b[0]*100)/10;
        b[2]=y-b[0]*100-b[1]*10;
        c[0]=z/100;
        c[1]=(z-c[0]*100)/10;        
        c[2]=z-c[0]*100-c[1]*10;
        //下面验证x，y，z是否使用了1-9
        for(int i=0;i<3;i++)
        {
            temp[a[i]]=1;
            temp[b[i]]=1;
            temp[c[i]]=1;
        }
        //输出
        int vaild=0;
        for(int i=1;i<=9;i++)
        {
            if(temp[i]==0)
            {vaild++;}
        }
        if(vaild==0)
        printf("%d %d %d\n",x,y,z);

    }
}