#include<stdio.h>
int main(){
    int nums[50]={0},num;
    printf("������Ҫ���뼸����");
    scanf("%D",&num);
    printf("��һ������һ������");
    for(int i=0;i<num;i++){
    scanf("%d",&nums[i]);
    }
    int min=100000000;
    for(int j=0;j<num;j++){
    if(nums[j]==j){
       if(min>nums[j]){
       min=nums[j];
         }
        else{
        min=min;
        }
    }
    else{min=min;
    }
    }
    
    if(min==100000000){
    printf("-1");}
    else{printf("���Ľ���ǣ�");
	printf("%d",min);
	}
    return 0;
 }
    
    
