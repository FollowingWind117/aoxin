#include<stdio.h>

int main()
{int shu[100]={0},num;

 printf("请输入你的数字个数");
scanf("%d",&num);
printf("一行输一个数");
 for (int i=0;i<num;i++){
   scanf("%d",&shu[i]);
  }
int change,r=0,j=0;
for (r=0;r<num;r++){
	for(j=0;j<num;j++){
	
 if(j<num-1){
    if(shu[j]>shu[j+1]){
      change=shu[j];
      shu[j]=shu[j+1];
      shu[j+1]=change;}
    else{}}
 else if(j==num-1){}}}
for (int r=0;r<num;r++){
    printf("%d",shu[r]);
    printf(",");
    }
    return 0;  
       }
   
    

