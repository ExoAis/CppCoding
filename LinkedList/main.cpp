#include <iostream>
#include "Node.h"
using namespace std;
Node* createList();
void deleteElement(Node*& head);
void printList(Node* head);
int main() {
	createList();
	Node* myLinkedList;
	myLinkedList = createList();
	printList(myLinkedList);
	return 0;
}
Node* createList() {
	Node* head = nullptr;
	for (int i = 0; i < 25; i++) {
		head = new Node(i, head);
	}
	return head;
}
void deleteElement(Node*& head) {
	Node* deleteNode;
	while (head != nullptr) {
		deleteNode = head;
		head = head->getNext();
		delete deleteNode;
	}
}
void printList(Node* head) {
	Node* walker = head;
	while (walker != nullptr) {
		cout << walker->getData() << endl;
		walker = walker->getNext();
	}
}
 