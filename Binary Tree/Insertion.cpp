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
void insertion(node *root,int n){
	node *prev = NULL;
	while(root!=NULL){
		prev = root;
		if(root->num == n){
			cout<<"Can not insert";
		}
		else if(root->num > n){
			root = root->l;
		}
		else{
			root = root->r;
		}
	}
	node *key;
	key = create_node(n);
	if(prev->num > n){
		prev->l = key;
	}
	else{
		prev->r = key;
	}
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
	insertion(p,n);
	inorder(p);
}