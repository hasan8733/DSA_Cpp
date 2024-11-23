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
int isbst(node *root){
	static node *prev = NULL;
	if(root!=NULL){
		if(!isbst(root->l)){
			return 0;
		}
		if(prev!=NULL && prev->num >= root->num){
			return 0;
		}
		prev = root;
		return isbst(root->r);
	}
	else{
		return 1;
	}
}
int main(){
	int flag;
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
	flag = isbst(p);
	if(flag == 1){
		cout<<"The tree is BST";
	}
	else{
		cout<<"The tree is not BST";
	}
}