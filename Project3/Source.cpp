#include "DyArray.h"

int main()
{
	
    DyArray<int> s;
	
	s.read("sample.txt");
	std::cout << s << "\n";
	s.clear();
	std::cout << "\n" << s << "\n";
	return 0;
}