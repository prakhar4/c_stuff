/*
	to count the occurance of each different 
	word in the file and give their lines of
	occurances also
*/

#define MAXS 100
#include "getWord.c"
#include<stdlib.h>
#include<string.h>

char* strDup(char* des, char* src)
{
	des=(char*)malloc(strlen(src)+1);
	strcpy(des,src);
	return des;
}

struct lines
{
	int lNo;		//line number
	struct lines *next;
};
typedef struct lines line;

struct nodes
{
	char *str;
	int count;
	struct nodes *left;
	struct nodes *right;
	line *loc;		//line occurance
};
typedef struct nodes node; 

line* Lalloc()
{
	line* l;
	l=(line*)malloc(sizeof(line));
	return l;
}



node* process(node* root, char *word )
{
	int c;
	line* temp;
	if(root==NULL)
	{
		root=(node*)malloc(sizeof(node));
		root->str=strDup(root->str,word);
		root->count=1;
		root->left=NULL;
		root->right=NULL;
		root->loc=Lalloc();
		root->loc->lNo=lineNo;
		root->loc->next=NULL;
	}
	else if((c=strcmp(root->str,word)) < 0)
		root->right=process(root->right,word);
	else if(c > 0)
		root->left=process(root->left,word);
	else
	{
		root->count++;
		temp=Lalloc();
		temp->lNo=lineNo;
		temp->next=root->loc;
		root->loc=temp;
	}		
	return root;
}


// inorder displaying the tree
disp(node *root)
{
	if(root==NULL)
		return;
	line* temp;
	
	disp(root->left);

	printf("\n-%s- -%d-",root->str,root->count);
	for(temp=root->loc;temp!=NULL;temp=temp->next)
		printf("\t%d",temp->lNo);

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
