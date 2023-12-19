
#include <iostream>
#include <cassert>
#include <fstream>


#ifndef DYARRAY_H
#define DYARRAY_H

template<typename T>
class DyArray
{
private:
	

	int size;
	int max_size;
	T* array;
public:
	

	DyArray(int size);
	DyArray();
	DyArray(const DyArray& other);
	~DyArray();

	int get_size() const;
	int get_max_size() const;

	T& operator[](int index);
	const T& operator[](int index) const;

	void add(T value);
	void remove(int index);
	void unitTest();
	void write(const char* file_name);
	void read(const char* file_name);
	void swap(int a, int b);

	bool isOutOfBounds(int index) const;

};

#include "DyArray.cpp"

#endif

