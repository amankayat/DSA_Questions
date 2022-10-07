#include<bits/stdc++.h>
using namespace std;
void inorder(Node *root){
	if(root!=NULL){
		//left root right
		inorder(root->left);
		cout<<root->data;
		inorder(root->right);
	}
}