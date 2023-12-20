#include "DyArray.h"

using Dynamic::DyArray;

int main()
{
	
    DyArray<int> s;
	for (int i = 0; i < 10000; i++)
	{
		s.add(i);
	}
	
	s.clear();
	
	
	return 0;
}