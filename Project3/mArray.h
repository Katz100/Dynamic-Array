
#include <iostream>
#include <cassert>
using std::cout;
using std::endl;


#ifndef MARRAY_H
#define MARRAY_H

template<typename T>
class mArray
{
private:
	

	int size;
	int max_size;
	T* array;
public:
	using Tconst = const T&;
	mArray(int size);
	mArray();
	~mArray();

	int get_size() const;
	int get_max_size() const;

	T& operator[](int index);
	const T& operator[](int index) const;
	
	void add(T value);
	void unitTest();
	T partition(Tconst low, Tconst high);
	void quicksort(Tconst low, Tconst high);
};

#include "mArray.cpp"

#endif

