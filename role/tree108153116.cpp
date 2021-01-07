#include <iostream>
 
using namespace std;

struct Node{
  int data;
  Node *children;
  Node *parent;
};

Node *root1,*root2;

Node root() {
	return *root1;
}

void addChild(Node *p, Node *n) {
	 
	p->children = n;
}

void cut(Node *t) {
	root2 = t;
}

void paste(Node *n, Node *t) {
	n->children = root2;
}

int main() {
Node *node1, *node2, *node3, *node4, *node5, *node6;
node1=new Node;
node1->data=1;
node2=new Node;
node2->data=2;
node3=new Node;
node3->data=3;
node4=new Node;
node4->data=4;
node5=new Node;
node5->data=5;

root1=node1;

node4->parent=node1;
node2->parent=node1;
node1->children=node4;
node1->children=node2;
node5->parent=node4;
node4->children=node5;
node3->parent=node2;
node2->children=node3;
node3->children=NULL;
node5->children=NULL;
root();

addChild(node1,node6);
cut(node3);
paste(node5,node3);



}
