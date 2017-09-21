#include "stdafx.h"
#include "NodeDL.h"


template <typename T> 
NodeDL::NodeDL()
{
public:
	T data;
	NodeDL* next;
	NodeDL* prev;
	NodeDL(T d)
	{
		data = d;
		next = nullptr;
		back = nullptr;
	}
}
