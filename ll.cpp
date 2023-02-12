#include<bits/stdc++.h>
using namespace std;

class node{
	
	public:
		int data;
		node *next;
	node(int n){
		this->data = n;
		this->next = NULL;
	}
};

void addnode(node* &head){
	int n;
	cout<<"input" ;
	cin>>n ;
	node *temp = new node(n);
	temp->next = head;
	head = temp;
}
void addend(node* head){
	node *temp = head;
	int n;
	cout<<"input" ;
	cin>>n ;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = new node(n);
}

void display(node *head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" " ;
		temp = temp->next ;
	}
}

void deletenode(node* &head){
	cout<<"element" ;
	int n;
	cin>>n; 
	node *temp = head;
	if(n==head->data){
		head = temp->next;
		free(temp) ;
		return ;
	}
	node *pre = NULL;
	while(temp!=NULL){
		if(temp->data == n){
			pre->next = temp->next;
			free(temp);
			return ;
		}
		pre = temp;
		temp = temp->next;
	}
	return ;
}

int main(){
	node *start = NULL;
	//cout<<temp->data;
	addnode(start);
	addnode(start);
	addnode(start);
	addend(start);
	deletenode(start);
	
	display(start);
return 0;
}
