//Stack class implemented using  double link list or STL list

#ifndef STACK_H
#define STACK_H


#include<list>
#include<cstdlib>

using namespace std;

template<class T>
class Stack
{
	public:
		Stack();
		~Stack();
		Stack(const Stack& s1);
		void push(const T& x);
		void pop();
		T get_top() const;
		bool isEmpty() const;
	private:
		list<T> *stacklist;
};

template<class T>
Stack<T>::Stack():stacklist(new list<T>)
{
	
}

template<class T>
Stack<T>::Stack(const Stack& s1)
{
	list<T> oldstacklist=*(s1.stacklist);
	stacklist=new list<T>(oldstacklist);
}

template<class T>
Stack<T>::~Stack()
{
	while(!(isEmpty()))
		pop();
	delete stacklist;
}

template<class T>
void Stack<T>::push(const T& x)
{
	stacklist->push_front(x);
}

template<class T>
void Stack<T>::pop()
{
	stacklist->pop_front();
}

template<class T>
T Stack<T>::get_top() const
{
	T temp;
	temp=stacklist->front();
	return temp;
}

template<class T>
bool Stack<T>::isEmpty() const
{
	return (stacklist->empty());
}

#endif
