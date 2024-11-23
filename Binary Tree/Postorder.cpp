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
void postorder(node *root){
	if(root!=NULL){
		postorder(root->l);
		postorder(root->r);
		cout<<root->num<<" ";
	}
}
int main(){
	node *p;
	node *p1;
	node *p2;
	node *p1l;
	node *p1r;
	p = create_node(5);
	p1 = create_node(6);
	p2 = create_node(7);
	p1l = create_node(3);
	p1r = create_node(8);
	p->l = p1;
	p->r = p2;
	p1->l = p1l;
	p1->r = p1r;
	postorder(p);
}