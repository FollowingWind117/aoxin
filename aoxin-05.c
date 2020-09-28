#include<stdio.h>
int main(){
 char name1[100]={0};
 char name2[100]={0};
printf("ÇëÊäÈëÒ»¶Î¾ä×Ó");
 gets(name1);
 int width1,r=0;
 width1=sizeof(name1)/sizeof(name1[0]);
for(int j=0;j<width1;j++){
int N,M;
N=name1[j];
  if(N>=(int)'A'&&N<=(int)'Z'){
       name2[r]=name1[j];
    r++;
    }
  if(N>=(int)'a'&&N<=(int)'z'){
      name2[r]=N-32;
      r++;
    }
  else{
    }
    
    }
    
    int width2;
//width2=sizeof(name2)/sizeof(name2[0]);
    int i;int check = 1;
for( i=0;i<r-1;i++){
    if(name2[i]==name2[r-i-1]){
        i++;}
        else{
        check = 0;
        }
        }
        
        if(check == 0){
        printf("FALSE");}
        else{printf("TRUE");}
        
        return 0;
        }

