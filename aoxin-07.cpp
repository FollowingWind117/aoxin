#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct TreeNode {
	char val[15];
	struct TreeNode *left;
	struct TreeNode *right;
} ;

typedef TreeNode BiNode;
typedef TreeNode* BiNode_ptr;
char A[15];




void malloc_error(BiNode_ptr check)
{if(check==NULL)
{ printf("FBI warning!�ڴ����");
 exit(0);                          //���������˳����� 
 }
}



int CreateTree(int width1,BiNode_ptr root1) {���� 
 

BiNode_ptr p,q;
strcpy(root1->val,A);
root1->left=(BiNode_ptr)malloc(sizeof(BiNode));
malloc_error(root1->left);
root1->right=(BiNode_ptr)malloc(sizeof(BiNode));        
malloc_error(root1->right)  ;   
p=root1->left;
q=root1->right;
if(width1>1){char B[1];int j=0;int k=0;
	for(int i=0;i<width1;i++){	
		if(i<(width1/2)){
			
		p->val[j]=A[i];
			j++;	
			
		
		}
		if(i>=(width1/2)){
		q->val[k]=A[i];
			k++;
		}
	}



CreateTree(width1/2,root1->left);
CreateTree((width1-width1/2),root1->right);}
if(width1<=1){
	root1->left=root1->right=NULL;
}
return 0;
}




int compare(BiNode_ptr root2,char bz[15],int l1){    //���ڱȽϴ����������������������ַ����Ƿ�����ҡ���ַ��� ,��ò��ʧ���ˡ��������������� 
   if(root2!=NULL){
   	if(strcmp(root2->val,bz)!=0){
   		compare(root2->left,bz);
   		compare(root2->right,bz);
	   }
   	
   	else if(strcmp(root2->val,bz)==0){
   		for(int e=0;e<15;e++){
		   
   		bz[e]='\0';e++;
   		l1=0;
   		
   	}
	   }
   
   }
   int a1;
   if(strcmp(bz,"\0")!=0){
   			a1=1;  //˵���д� 
   			
		   }
   		else{
   			a1=0;  //˵���Ե� 
		   }
   		
   
}
	
	


int main(){//char a[15];
char b[15];

	printf("������һ���ַ�1��");
	scanf("%s",A);
	printf("������һ���ַ�2��");
	scanf("%s",b);
		int width=0;       //int�ȳ�ʼ�� 
width=strlen(A);
	BiNode_ptr root;
	root=(BiNode_ptr)malloc(sizeof(BiNode));
	CreateTree(width,root);
	char bz[15];
	int width2=0;
		width2=strlen(b);char c[1];
	int l=0 
   	for(int j=0;j<width2;j++){
   	   bz[l]=b[j];
   		
		  check=compare(root,bz);
		  if(check==1){
		  	printf("False");
		  	break;
		  }
   		l=0;
   		
   	}
   		if(check==0){
   			printf("True");
		   }
   		
   		
   		
	   }


