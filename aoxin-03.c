#include<stdio.h>
#define width 50
int main(){
     int location[width]={0},num,sum;
    printf("请输入你有几支笔");
    scanf("%d",&num);
    sum=0;
    printf("请输入你的数轴坐标，一行一个");    
      for(int i=0;i<num;i++){
      scanf("%d",&location[i]);
    }
    
    for(int j=0;j<num;j++){
      if(location[j]%2==0){
           sum=sum;
        }
      else if(location[j]%2==1){
            sum+=1;
            }
            }
         printf("%d",sum);
        return 0;
        }
    
