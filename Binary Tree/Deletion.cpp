#include <iostream>
using namespace std;
class node{
	public:
		int num;
		node *l;
		node *r;
};
node *create_node(int data){
	node *n;
	n = new node();
	n->num = data;
	n->l = NULL;
	n->r = NULL;
	return n;
}
void inorder(node *root){
	if(root!=NULL){
		inorder(root->l);
		cout<<root->num<<" ";
		inorder(root->r);
	}
}
node *in_pre(node *root){
	root = root->r;
	while(root != NULL){
		root = root->r;
	}
	return root;
}
node *deletion(node *root,int n){
	node *ipre;
	if(root == NULL){
		return NULL;
	}
	if(root->l == NULL && root->r == NULL){
		free(root);
		return NULL;
	}
	if(root->num > n){
		root->l = deletion(root->l,n);
	}
	else if(root->num < n){
		root->r = deletion(root->r,n);
	}
	else{
		ipre = in_pre(root);
		root->num = ipre->num;
		root->l = deletion(root->l,ipre->num);
	}
	return root;
}
int main(){
	node *p;
	node *p1;
	node *p2;
	node *p1l;
	node *p1r;
	p = create_node(8);
	p1 = create_node(6);
	p2 = create_node(9);
	p1l = create_node(3);
	p1r = create_node(7);
	p->l = p1;
	p->r = p2;
	p1->l = p1l;
	p1->r = p1r;
	inorder(p);
	cout<<endl;
	int n;
	cout<<"Enter number : ";
	cin>>n;
	p = deletion(p,n);
	inorder(p);
}