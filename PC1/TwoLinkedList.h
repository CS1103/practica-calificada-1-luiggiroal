//
// Created by ruben on 4/12/19.
//

#ifndef PC1_TWOLINKEDLIST_H
#define PC1_TWOLINKEDLIST_H

#include <iostream>
#include <string>

class TwoLinkedList {
	struct Node
	{
		int value;
		struct Node* next;
	};

	Node* head1;
	Node* head2;
	Node* tail1;
	Node* tail2;
	Node* tail;
public:
	TwoLinkedList();
	~TwoLinkedList();

	void push_back_1(int);
	void push_back_2(int);
	std::string merge(int);
	bool is_merge();
	std::string getlist(int);
	Node* search(int);
	auto save();
	auto load();
};




#endif //PC1_TWOLINKEDLIST_H
