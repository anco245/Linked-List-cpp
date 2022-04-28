#ifndef LIST_H_
#define LIST_H_

class List {
private:

	typedef struct node {
		int data;
		node* next;
	}* npr;

	npr head;
	npr temp;
	npr curr;

public:

	List();
	void add(int n);
	void del(int d);
	void print();
};



#endif /* LIST_H_ */
