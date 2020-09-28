#include<stdio.h>
#include<string.h>
#define width 100
int main(void)
{
    char bfchange[width],afchange[width];
    printf("请输入一串字符");
    scanf("%s",bfchange);
    printf("\n");
    int num,i;
    i=0;
    num=strlen(bfchange);
    int index[num];
    printf("请输入你的序列数字，一行打一个");
    while (i<num){
        scanf("%d",&index[i]);
    i++;}

    while (i!=0) {
    afchange[5-i]=bfchange[index[5-i]];
    printf("%c",afchange[5-i]);
    i--;}
    
return 0;
}
