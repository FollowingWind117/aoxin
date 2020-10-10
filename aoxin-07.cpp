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
{ printf("FBI warning!内存错了");
 exit(0);                          //正常运行退出程序 
 }
}



int CreateTree(int width1,BiNode_ptr root1) {、、 
 

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




int compare(BiNode_ptr root2,char bz[15],int l1){    //用于比较创建的两个二叉树根部的字符串是否属于摇动字符串 ,但貌似失败了。。。其他都可以 
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
   			a1=1;  //说明有错 
   			
		   }
   		else{
   			a1=0;  //说明对的 
		   }
   		
   
}
	
	


int main(){//char a[15];
char b[15];

	printf("请输入一串字符1：");
	scanf("%s",A);
	printf("请输入一串字符2：");
	scanf("%s",b);
		int width=0;       //int先初始化 
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


