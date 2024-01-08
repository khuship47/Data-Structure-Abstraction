//Khushi Patel
//Creating Stack Using Linked List 

#ifndef CS2_STACK_HPP_
#define CS2_STACK_HPP_

#include <new>
#include <cassert>
#include <iostream>
#include "string.hpp"

template<typename T> 
class Node {
	public:
		Node(): next(nullptr) {};
		Node(const T& item): data(item), next(0) {};

		T data;
		Node<T> *next;
};


// CLASS INV:
//
template <typename T>
class stack {
public:
              stack     (): tos(nullptr) {};
              stack     (const stack<T>&);
              ~stack    ();
    void      swap      (stack<T>&);
    stack<T>& operator= (stack<T>);
    
	bool      empty     () const;
	bool      full      () const;
	T         top       () const;
	T         pop       ();
	void      push      (const T&);

private:
	Node<T>   *tos;
};

template <typename T>
stack<T>::stack(const stack<T>& actual){
	Node<T> *temp = actual.tos;
	Node<T> *newStack = nullptr;
	tos = nullptr;

	while(temp != 0){
		if(tos == nullptr){
			tos = new Node<T>(temp->data);
			newStack = tos;
		}
		else{
			newStack->next = new Node<T>(temp->data);
			newStack = newStack->next;
		}
		temp = temp->next;
	}
}

template <typename T>
stack<T>::~stack(){
	Node<T> *temp;

	while(tos != nullptr){
		temp = tos;
		tos = tos->next;
		delete temp;
	}
}

template <typename T>
void stack<T>::swap(stack<T>& actual){
	Node<T> *temp = tos;
	tos = actual.tos;
	actual.tos = temp;
}

template <typename T>
stack<T>& stack<T>::operator=(stack<T> actual){
	swap(actual);
	return *this;
}

template <typename T>
bool stack<T>::empty() const{
	return tos == nullptr;
}

template <typename T>
bool stack<T>::full() const{
	Node<T> *temp = new(std::nothrow) Node<T>();
    if(temp == 0) return true;
    delete temp;
    return false;
}

template <typename T>
T stack<T>::top() const{
	assert(!empty());
	return tos->data;
}

template <typename T>
T stack<T>::pop(){
	assert(!empty());
	
	T result = tos->data;
	Node<T> *temp =  tos;
	tos = tos->next;
	delete temp;

	return result;
}

template <typename T>
void stack<T>::push(const T& item){
	assert(!full());
	
	Node<T>* temp = new Node<T>(item);
	temp->next = tos;
	tos = temp;
}
#endif