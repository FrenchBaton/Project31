#pragma once
#include<iostream>
using namespace std;

template <typename T = string, int MAX_COPIES = 5>
class LibraryItem {
	static int totalItems;
	string title;
	T copies[MAX_COPIES];
	int lastItem = 0;

public:
	void addCopy(T id);
	void removeCopy(T id);
	int getCopiesCount();
	static int getTotalItems();
};

template<typename T, int MAX_COPIES>
int LibraryItem<T, MAX_COPIES>::totalItems = 0;

template<typename T, int MAX_COPIES>
void LibraryItem<T, MAX_COPIES>::addCopy(T id)
{
	for (int i = 0; i < lastItem; i++) {
		if (copies[i] == id) return;
	}
	copies[lastItem] = id;
	lastItem++;
	totalItems++;
}

template<typename T, int MAX_COPIES>
void LibraryItem<T, MAX_COPIES>::removeCopy(T id)
{
	bool isDelete = false;
	for (int i = 0; i <= lastItem; i++) {
		if (copies[i] == id) 
		{
			isDelete = true;
			copies[i] = copies[lastItem];
			i = lastItem + 1;
		}
	}
	if (!isDelete) return;
	totalItems--;
	lastItem--;
}

template<typename T, int MAX_COPIES>
int LibraryItem<T, MAX_COPIES>::getCopiesCount()
{
	return lastItem;
}

template<typename T, int MAX_COPIES>
int LibraryItem<T, MAX_COPIES>::getTotalItems()
{
	return totalItems;
}
