#include "DyArray.h"

int main()
{

	DyArray<int> s;
	s.read("sample.txt");
	std::cout << s << std::endl;
	s.remove(5);
	std::cout << s;
	

	return 0;
}