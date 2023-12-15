
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
	mArray(int size);
	mArray();
	~mArray();

	int get_size() const;
	int get_max_size() const;

	T& operator[](int index);
	const T& operator[](int index) const;
	
	void add(T value);
	void unitTest();
};

#include "mArray.cpp"

#endif

