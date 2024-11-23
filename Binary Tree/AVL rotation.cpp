#include <iostream>
using namespace std;
class node{
	public:
		int num;
		node *l;
		node *r;
		int h;
};
node *create_node(int data){
	node *n;
	n = new node();
	n->num = data;
	n->l = NULL;
	n->r = NULL;
	n->h = 1;
	return n;
}
int *get_height(node *root){
	if(root == NULL){
		return 0;
	}
	else{
		return root->h;
	}
}
int max(int a,int b){
	return a>b?a:b;
}
int get_bf(node *root){
	if(root == NULL){
		return 0;
	}
	return (get_height(root->l) - get_height(root->r));
}
node *right_rotate(node *y){
	node *x = y->l;
	node *t2 = x->r;
	x->r = y;
	y->l = t2;
	y->h = max(get_height(y->r),get_height(y->l)) + 1;
	x->h = max(get_height(x->r),get_height(x->l)) + 1;
	return x;
}
node *left_rotate(node *x){
	node *y = y->r;
	node *t2 = y->l;
	y->l = x;
	x->r = t2;
	y->h = max(get_height(y->r),get_height(y->l)) + 1;
	x->h = max(get_height(x->r),get_height(x->l)) + 1;
	return y;
}
node *insertion(node *root,int n){
	if(node == NULL){
		return (create_node(n));
	}
	if(n < node->num){
		node->l = insertion(node->l,n);
	}
	else if(n > node->num){
		node->r = insertion(node->r,n);
	}
	node->h = 1+ max(get_height(node->l),get_height(node->r));
	int bf = get_bf(node);
	if(bf > 1 && n < node->l->num){
		right_rotate(node);
	}
	if(bf < -1 && n > node->r->num){
		left_rotate(node);
	}
	if(bf > 1 && n > node->l->num){
		node->l = left_rotate(node);
		right_rotate(node);
	}
	if(bf < -1 && n < node->r->num){
		node->r = right_rotate(node);
		left_rotate(node);
	}
	return node;
}
void inorder(node *root){
	if(root!=NULL){
		inorder(root->l);
		cout<<root->num<<" ";
		inorder(root->r);
	}
	cout<<endl;
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
	p = insertion(p,10);
	inorder(p);
}