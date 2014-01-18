/*
	to count the occurance of each different 
	word in the file
*/

#include "getWord.c"
#define MAXS 100
#include<stdlib.h>
#include<string.h>

char* strDup(char* des, char* src)
{
	des=(char*)malloc(strlen(src)+1);
	strcpy(des,src);
	return des;
}

struct nodes
{
	char *str;
	int count;
	struct nodes *left;
	struct nodes *right;
};

typedef struct nodes node; 

node* process(node* root, char *word )
{
	int c;
	if(root==NULL)
	{
		root=(node*)malloc(sizeof(node));
		root->str=strDup(root->str,word);
		root->count=1;
		root->left=NULL;
		root->right=NULL;
	}
	else if((c=strcmp(root->str,word)) < 0)
		root->right=process(root->right,word);
	else if(c > 0)
		root->left=process(root->left,word);
	else
		root->count++;
			
	return root;
}


// inorder displaying the tree
disp(node *root)
{
	if(root==NULL)
		return;
		
	disp(root->left);
	printf("\n-%s- -%d-",root->str,root->count);
	disp(root->right);
}

int main()
{
	node *root=NULL;
	char words[MAXS];
	
	while(getWord(words) > 0)//0 returned when EOF
		root=process(root,words);

	disp(root);
	printf("\n");	
	return 0;
}
