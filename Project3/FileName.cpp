#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

template<typename T>
class mArray
{
public:

	int size;
	int max_size;
	T* array;
	
	mArray(int size) : size(size), max_size(size * 2), array(new T [max_size])
	{

	}

	mArray() : size(0), max_size(2), array(new T [max_size])
	{

	}
	~mArray()
	{
		delete[] array;
	}
	
	void add(T value)
	{
		if (size >= max_size)
		{
			max_size *= 2;
			T* temp_array = new T[max_size];

			for (int i = 0; i < size; i++)
			{
				temp_array[i] = array[i];
			}

			delete[] array;

			array = temp_array;
		}

		assert((size < max_size) && "Array has overflowed");
		array[size] = value;
		size++;
	}

	int get_size()
	{
		return size;
	}

	int get_max_size()
	{
		return max_size;
	}

	void unitTest()
	{
		mArray<int> TestArray;

		assert((TestArray.size == 0) && ("Constructer failure"));
		assert((TestArray.max_size == 2) && ("Constructer failure"));
		assert(TestArray.array && "Constructer failure");
		cout << "Constructer succesful" << endl;

		TestArray.add(1);
		TestArray.add(5);
		TestArray.add(10);

		assert(TestArray.array[0] == 1 && TestArray.array[1] == 5 && TestArray.array[2] == 10 && "Add method failure");
		cout << "Add method succesful" << endl;

		

		
		
	}
};

int main()
{

	mArray<char> s;
	

	
	s.unitTest();
	
	return 0;
}