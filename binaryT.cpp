#include<bits/stdc++.h>
//#include<queue>
using namespace std;

class node{
	public:
		int data;
		node*left;
		node *right;
	
	node(int d){
		this->data  = d;
		this->left = NULL;
		this->right = NULL;
	}
};

node *buildTree(node *root){
	cout<<"enter the data" <<endl;
	int data;
	cin>>data;
	root = new node(data);
	
	if(data==-1)
		return NULL;
	
	cout<<"Enter the data in left of"<< data <<endl ;
	root->left = buildTree(root->left) ;
	cout<<"Enter the data in right of"<< data <<endl ;
	root->right = buildTree(root->right) ;
	return root;
}

void levelOrderTraversal(node* root){
	queue<node*> q;
	q.push(root);
	
	while(!q.empty()){
		node *temp = q.front();
		cout<< temp->data <<" ";
		q.pop();
		if(temp==NULL){
		    cout<<endl ;
		}
		if(temp->left)
		q.push(temp->left);
		
		if(temp->right)
		q.push(temp->right);
	}
}

int main(){
	node *root = NULL;
	root = buildTree(root) ;
	
	levelOrderTraversal(root);
	
	
	return 0;
}
