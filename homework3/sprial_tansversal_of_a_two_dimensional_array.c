#include<stdio.h>

int main()
{
    int row,col,startrow=0,startcol=0,count=1;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    int all = row*col;
    int endrow=row-1,endcol=col-1;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    while(startrow<=endrow && startcol<=endcol)
    {
        //from left to right
    for(int i=startcol;i<=endcol;i++){
        if(count<all)
        {printf("%d\n",arr[startrow][i]);count++;}
        else{printf("%d",arr[startrow][i]);return 0;}
        }
    //from top to bottom
    for(int i=startrow+1;i<=endrow;i++){
        if(count<all)
        {printf("%d\n",arr[i][endcol]);count++;}
        else{printf("%d",arr[i][endcol]);return 0;}
    }
    //from right to left
    for(int i=endcol-1;i>=startcol;i--){
        if(count<all)
        {printf("%d\n",arr[endrow][i]);count++;}
        else{printf("%d",arr[endrow][i]);return 0;}
        }
    //from bottom to top
    for(int i=endrow-1;i>=startrow+1;i--){
        if(count<all)
        {printf("%d\n",arr[i][startcol]);count++;}
        else{printf("%d",arr[i][startcol]);return 0;}
        }
        
    startrow++;
    endrow--;
    startcol++;
    endcol--;
    }
    
    




}