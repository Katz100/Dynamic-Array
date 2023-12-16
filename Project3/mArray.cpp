#include "mArray.h"


#ifndef MARRAY_CPP
#define MARRAY_CPP

template<typename T>
mArray<T>::mArray(int size) : size(size), max_size(size * 2), array(new T [max_size])
{
}

template<typename T>
mArray<T>::mArray() : size(0), max_size(2), array(new T [max_size])
{
}

template<typename T>
mArray<T>::~mArray()
{
	delete[] array;
}





template<typename T>
void mArray<T>::add(T value)
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

template<typename T>
int mArray<T>::get_size() const
{
	return size;
}

template<typename T>
int mArray<T>::get_max_size() const
{
	return max_size;
}

template<typename T>
T& mArray<T>::operator[](int index)
{
	assert(((index > -1) && (index < max_size)) && "Array index out of bounds");

	return array[index];
}

template<typename T>
const T& mArray<T>::operator[](int index) const
{
	assert(((index > -1) && (index < max_size)) && "Array index out of bounds");

	return array[index];
}

template<typename T>
void mArray<T>::unitTest()
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

	assert(TestArray.size == 3 && "Unexpected size occured");

	cout << "Add() method succesful" << endl;

	
	
}

template<typename T>
T mArray<T>::partition(Tconst low, Tconst high)
{
	T pivot = array[low];
	T left = low;

	for (int i = low + 1; i < high; i++)
	{
		if (array[i] < pivot)
		{
			std::swap(array[i], array[left]);
			left += 1;
		}
	}

	std::swap(pivot, array[left]);

	return left;
}

template<typename T>
void mArray<T>::quicksort(Tconst low, Tconst high)
{
	if (low < high)
	{
		int pivot_location = partition(low, high);
		quicksort(low, pivot_location);
		quicksort(pivot_location + 1, high);
	}
}


template<typename T>
std::ostream& operator<<(std::ostream& ostr, const mArray<T>& m)
{
	for (int i = 0; i < m.get_size(); i++)
	{
		ostr << m[i] << " ";
	}

	return ostr;
}


#endif
