#include<stdio.h>
#include<string.h>
#define width 100
int main(void)
{
    char bfchange[width],afchange[width];
    printf("������һ���ַ�");
    scanf("%s",bfchange);
    printf("\n");
    int num,i;
    i=0;
    num=strlen(bfchange);
    int index[num];
    printf("����������������֣�һ�д�һ��");
    while (i<num){
        scanf("%d",&index[i]);
    i++;}

    while (i!=0) {
    afchange[5-i]=bfchange[index[5-i]];
    printf("%c",afchange[5-i]);
    i--;}
    
return 0;
}
