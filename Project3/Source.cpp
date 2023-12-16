#include <vector>
#include "mArray.h"

int main()
{

	mArray<int> s;

	s.unitTest();

	s.add(0);
	s.add(5);
	s.add(4);
	s.add(10);
	s.add(1);
	s.add(3);
	s.add(8);

	cout << s;
	cout << endl;
	s.quicksort(0, s.get_size());

	cout << s;
	return 0;
}