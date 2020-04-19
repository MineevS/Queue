#pragma once

#include "Queue.h"
#include "QueueImplementation.h"

#include "LinkedList.h"
#include <iostream>
//class LinkedList; // меняете на include вашего листа

// вариант с использованием ранее написанного списка и множественного наследования
// если бы список не был реализован, то было бы наследование только от интерфейса
// множественное наследование можно заменить на композицию
class ListQueue : public QueueImplementation, public LinkedList
{
	// вот тут вы вступаете в дело
	
	private:
	
	
	public:
	
		ListQueue();
		
		~ListQueue();
		
		//поставить элемент в очередь;
		void enqueue(const ValueType& value);

		//достать первый элемент из очереди;
		ValueType& dequeue();
		
		//посмотреть элемент в голове очереди.
		ValueType& front();
		
		//проверка на пустоту.
		bool isEmpty() const;
		
		//размер. 
		size_t size() const;
};

