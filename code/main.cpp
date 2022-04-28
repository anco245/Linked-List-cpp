#include <iostream>
#include "List.h"

using namespace std;

int main() {

	List l;

	l.add(3);
	l.add(1);
	l.add(9);
	l.add(2);

	l.print();
	
	/*
	 * Output will look like:
	 * 3
	 * 1
	 * 9
	 * 2
	 */
}
