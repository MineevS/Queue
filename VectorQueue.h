#pragma once
#include "QueueImplementation.h"

#include "MyVector.h"
//class MyVector; // меняете на include вашего вектора

// вариант с использованием ранее написанного вектора и множественного наследования
// если бы вектор не был реализован, то было бы наследование только от интерфейса
// множественное наследование можно заменить на композицию
class VectorQueue : public QueueImplementation, public MyVector
{
	// вот тут вы вступаете в дело
	
	private:
	
	public:
	
		VectorQueue();
		
		~VectorQueue();
	
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