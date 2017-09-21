#include "stdafx.h"
#include "DLList.h"
#include <iostream>

using namespace std;
template <typename T> //
DLList ::DLList()
{
public:
	NodeDL<T>* first;
	NodeDL<T>* last;
	DodeDL<T>* pointer;
	int length;

	DLList()
	{
		first = NULL;
		last = NULL;
		pointer = NULL;
		length = 0;
	}
	DLLIst(T d)
	{
		NodeDL<T> n = new NodeDL<T>(d);
		*first = n;
		*last = n;
		length++;
	}
	bool isEmpty()
	{
		return length == 0;
	}
	void insertFirst(T d)
	{
		NodeDL<T> n = new NodeDL<T>(d);
		if (isEmpty())
		{
			*first = n;
			*last = n;
		}
		else
		{
			node.next* = first;
			first->prev = node;
			*first = node;
		}
		length++;
	}
	void insertLast(T d)
	{
		NodeDL<T> n = new NodeDL<T>(d);
		if (isEmpty())
		{
			*first = n;
			*last = n;
		}
		else
		{
			node.prev* = last;
			last->next = n;
			*last = n;
		}
		length++;
	}
	void deleteFirst()
	{
		if (!isEmpty())
		{
			if (first.next == nullptr)
			{
				*first = nullptr;
				*last = nullptr;
			}
			else
			{
				*first = first->next;
				first->prev = nullptr;
			}
			length--;
		}
	}
	void deleteLast()
	{
		if (!isEmpty())
		{
			if (first.next == nullptr)
			{
				*first = nullptr;
				*last = nullptr;
			}
			else
			{
				pointer = first;
				while (pointer->next != last)
				{
					pointer = pointer.next;
				}
				last = pointer;
				last->next = nullptr;
				pointer = nullptr;
			}
			length--;
		}
	}
	void deleteNode(T d)
	{
		pointer = first;
		NodeDL<T> n = new NodeDL<T>(d);
		if (!isEmpty())
		{
			if (first == last)
			{
				if (first.data = d)
				{
					deleteFirst();
				}
			}
			else
			{
				if (first == last)
				{
					if (first.data = d)
					{
						deleteFirst();
					}
					else
					{
						pointer = first;
						NodeDL<T>* n2 = first.next.next;
						while(pointer.next!=NULL)
						{ 
							if (pointer.next.data == n)
							{
								pointer.next = pointer.next.next;
								n2 = n2.prev.prev;
							}
							pointer = pointer.next;
							n2 = n2.next;
						}
					}
				}
			}
		}
	}
	void showSE()
	{
		pointer = first;
		std::cout << "first->";
		for (int i = 0; i < length; i++)
		{
			std:cout << "[" << pointer.data << "]->";
			pointer = pointer.next;
		}
		std::cout << "<-last " << endl;
	}
	void showES()
	{
		pointer = last;
		std::cout << "last->";
		for (int i = length; i > 0; i--)
		{
			std:cout << "[" << pointer.data << "]->";
			pointer = pointer.prev;
		}
		std::cout << "<-first " << endl;
	}
}

