//
// Created by ruben on 4/12/19.
//

#include "TwoLinkedList.h"

TwoLinkedList::TwoLinkedList(){
	head1 = nullptr;
	head2 = nullptr;
	tail1 = nullptr;
	tail2 = nullptr;
	tail = nullptr;
}

TwoLinkedList::~TwoLinkedList(){}

void TwoLinkedList::push_back_1(int num){
	Node* newNode; 
	// Node* nodePtr;

	newNode = new Node;
	newNode->value = num;

	newNode->next = nullptr;

	if (!is_merge())
	{
		if (!head1)
		{
			head1 = newNode;
			tail1 = newNode;
		}else{
			tail1 = head1;

			while(tail1->next) {
			    tail1= tail1->next;
			}

			tail1->next = newNode;
			// tail1 = newNode;
		}
	}else{
		tail->next = newNode;
	}	
}

void TwoLinkedList::push_back_2(int num){
	Node* newNode; 
	// Node* nodePtr;

	newNode = new Node;
	newNode->value = num;

	newNode->next = nullptr;

	if (!is_merge())
	{
		if (!head2)
		{
			head2 = newNode;
			tail2 = newNode;
		}else{
			tail2 = head2;

			while(tail2->next) {
			    tail2 = tail2->next;
			}

			tail2->next = newNode;
			// tail2 = newNode;
		}
	}else{
		tail->next = newNode;
	}	
}

std::string TwoLinkedList::merge(int num){
	Node* newNode;

	newNode = new Node;
	newNode->value = num;

	newNode->next = nullptr;

	if (!is_merge())
	{
		if (!head1)
		{
			head1 = newNode;
			tail1 = newNode;
		}else{
			tail1 = head1;

			while(tail1->next) {
			    tail1= tail1->next;
			}

			tail1->next = newNode;
			// tail1 = newNode;
		}

		if (!head2)
		{
			head2 = newNode;
			tail2 = newNode;
		}else{
			tail2 = head2;

			while(tail2->next) {
			    tail2 = tail2->next;
			}

			tail2->next = newNode;
			// tail2 = newNode;
		}

		return "Operación Exitosa";
	}else{
		delete newNode;

		return "Operación duplicada";
	}
}

bool TwoLinkedList::is_merge(){
	if (!head1 && !head2)
	{
		return 0;	
	}else{
		if (tail1->next == tail2->next)
		{
				return 1;	
		}else{
			return 0;
		}	
	}
}

std::string TwoLinkedList::getlist(int num){
	std::vector<std::string> v1;

	while(head1 && tail1->value != num) {
			    
	}
	if(num == 1) {
	}
	else if(num == 2) {
		/* code */
	}
	else if(num == 0) {
		/* code */
	}
}

// Node* TwoLinkedList::search(int num){

// 	if (!head)
// 	{
		
// 	}
// }
