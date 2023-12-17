
#include <iostream>
#include <cassert>



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
	mArray(const mArray& other);
	~mArray();

	int get_size() const;
	int get_max_size() const;

	T& operator[](int index);
	Tconst operator[](int index) const;
	
	constexpr void add(T value);
	void unitTest();
	constexpr T partition(Tconst low, Tconst high);
	constexpr void quicksort(Tconst low, Tconst high);

	bool isOutOfBounds(int index) const;
};

#include "mArray.cpp"

#endif

