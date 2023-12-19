#include "DyArray.h"

int main()
{
	
    DyArray<int> s;
	s.read("sample.txt");
	std::cout << s;

	return 0;
}