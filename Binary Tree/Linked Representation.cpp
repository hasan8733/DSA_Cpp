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
int main(){
	node *p;
	node *p1;
	node *p2;
	p = create_node(5);
	p1 = create_node(6);
	p2 = create_node(7);
	p->l = p1;
	p->r = p2;
}