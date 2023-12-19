#include "DyArray.h"

int main()
{

    DyArray<int> s;
	s.read("sample.txt");
	std::cout << s << std::endl;
	s.swap(0, s.get_size() - 1);
	std::cout << s;
	

	return 0;
}