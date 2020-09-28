#include<stdio.h>
#include<string.h>
#define width 50
int main(void){


    char chengji[width]={0},a;
    printf("«Î ‰»Î≥…º®ºÚ–¥");
    scanf("%s",chengji);
    int num,i,j,b;
    num = sizeof(chengji)/sizeof(chengji[0]);
    i=0;
    int sum[width]={0};
   
    for(j=0;j<num;j++){
    a=chengji[j];
    if(a=='+'){
        if(i==0){
        sum[i]=sum[i];
        }
        if(i==1){
        sum[i]=sum[i-1];
        
        }
        if(i>=2){
        sum[i]=sum[i-1]+sum[i-2];
        }
        i++;
        }
     else if(a=='D'){
        if(i==0){
        sum[i]=sum[i];
        }
        if(i>=1){
        sum[i]=2*sum[i-1];
        }
        i++;
        }
    else if(a=='C'){
        if(i<2){
        sum[i]=0;
        i=0;}
        if(i>1){
        sum[i]=sum[i-1]=0;
        i--;}
        }
    else if(a){
        if(i==0){
        sum[i]=(int) a-'0';
        }
        if(i>0){
            sum[i]=(int) a-'0';
        }
        i++;
        }
        }
    b =0;
    for(int n=0;n<num;n++)
        b += sum[n];
    
        printf("%d",b);
        
        
return 0;
     }
    

