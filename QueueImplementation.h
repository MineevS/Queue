#pragma once

#include "Queue.h"
#include <iostream>
// приходится тянуть ValueType во все места,
// наглядная демонстрация того, почему с шаблонами было бы легче.
// Ждем, когда дойдете до этого на МиСП.
using ValueType = double;

// интерфейс для конкретных реализаций контейнера для стека
class QueueImplementation {
	
	public:
	
		// поставить элемент в очередь;
		virtual void enqueue(const ValueType& value) = 0;

		// достать первый элемент из очереди;
		virtual ValueType& dequeue() = 0;
		
		//посмотреть элемент в голове очереди.
		virtual ValueType& front() = 0;
		
		// проверка на пустоту.
		virtual bool isEmpty() const = 0;
		
		// размер. 
		virtual size_t size() const = 0;
		
		// виртуальный деструктор.
		virtual ~QueueImplementation(){};
		
};
