#include <cstdlib>
#include <iostream>

#include "List.h"

using namespace std;

List::List() {
	head = NULL;
	curr = NULL;
	temp = NULL;
}


void List::add(int dta) {


	// The node to be added (n with data, dta) will be the last in the list
	npr n = new node; // n pointer pointing to new node

	// The next element after n will be NULL bc it's the last element.
	n->next = NULL; 

	// node is now fully created)
	n->data = dta; // n now has data of what we passed (so the new
				  
	/*
	 * if head isn't null that means that there's something after it
	 * which means that it's a list with multiple elements
	 * i.e. if a list exists then...
	 */
	if(head != NULL)
	{
		curr = head;

		/*
		 * Advances the current pointer (curr) until it reaches the last
		 * node in the list. When while loop executes, that means that
		 * curr pointing to the last node.
		 */
		while(curr->next != NULL)
		{
			curr = curr->next;
		}

		/*
		 * Now that the while loop has finished, curr here is equal to
		 * the last element in the list. We now want the next element
		 * after curr to be equal to n.
		 */
		curr->next = n;

	} else {
		head = n;
	}

}

void List::del(int d)
{
	npr delPtr = NULL;
	temp = head;
	curr = head;

	while(curr != NULL && curr->data != d)
	{
		temp = curr;
		curr = curr->next;
	}

	if (curr == NULL)
	{
		cout << d << " was not in the list\n";
		delete delPtr;

	} else {
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;

		delete delPtr;

		cout << "The value " << d << " was deleted\n";

	}
}

void List::print() {

	curr = head;

	while(curr != NULL)
	{
		cout << curr->data << endl;
		curr = curr->next;
	}
}