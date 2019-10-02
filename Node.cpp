#include<iostream>
using namespace std;
template<class T>
class Node
{
	private:
		Node<T>* next;
		T data;
	public:
		Node():data(0),next(nullptr){}
                
		T GetData()
		{
		   return data;
		}
		void SetData(T ele)
		{
			data=ele;
		}
		Node* GetNext()
		{
			return next;
		}
		void SetNext(Node* temp)
		{
		   next=temp;
		}

};
