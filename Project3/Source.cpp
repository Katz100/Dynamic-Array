
#include "mArray.h"

int main()
{

	mArray<int> s;

	s.unitTest();

	s.add(1);
	s.add(2);
	s.add(3);
	s.add(4);

	cout << s;
	
	return 0;
}