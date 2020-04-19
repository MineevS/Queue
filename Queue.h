#pragma once

#include <iostream>
// Уровень абстракции
// клиентский код подключает именно этот хедер

// тип значений в стеке
using ValueType = double;

// на основе какого контейнера работает стек
enum class QueueContainer {
	Vector = 0,
	List,
	// можно дополнять другими контейнерами
};

// декларация класса с реализацией
class QueueImplementation;//Сылаемся на класс "StackImplementation".
//В этом случае мы можем создавать указатель на этот класс не имея заголовочного файла (который мы и не собираемся распространять).

class Queue
{
	private:
		//указатель на имплементацию (уровень реализации)
		QueueImplementation* _pimpl = nullptr;
		//тип контейнера, наверняка понадобится
		QueueContainer _containerType;
		
	public:
		//Большая пятерка
		Queue(QueueContainer container = QueueContainer::Vector);
		
		//элементы массива последовательно подкладываются в стек
		Queue(const ValueType* valueArray, const size_t arraySize, 
		 QueueContainer container = QueueContainer::Vector);
		//
		
		explicit Queue(const Queue& copyQueue);
		Queue& operator=(const Queue& copyQueue);

		//Здесь как обычно
		//Queue(Queue&& moveQueue) noexcept;
		//Queue& operator=(Queue&& moveQueue) noexcept;

		~Queue();
		
		//поставить элемент в очередь;
		void enqueue(const ValueType& value);

		//достать первый элемент из очереди;
		ValueType& dequeue();
	
		//посмотреть элемент в голове очереди.
		ValueType& front();
		
		//проверка на пустоту
		bool isEmpty() const;
		
		//размер 
		size_t size() const;	
};

