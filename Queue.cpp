#include "Queue.h"
#include "ListQueue.h"
#include "LinkedList.h"
#include "MyVector.h"
#include "VectorQueue.h"
#include "QueueImplementation.h"

#include <stdexcept>

Queue::Queue(QueueContainer container)
	: _containerType(container)
{
	switch (container)
	{
	case QueueContainer::List: {
		_pimpl = new ListQueue();	// конкретизируйте под ваши конструкторы, если надо
		break;
	}
	case QueueContainer::Vector: {
		_pimpl = new VectorQueue();	// конкретизируйте под ваши конструкторы, если надо
		break;
	}
	default:
		throw std::runtime_error("Неизвестный тип контейнера");
	}
}

Queue::Queue(const ValueType* valueArray, const size_t arraySize, QueueContainer container)
{
	// принцип тот же, что и в прошлом конструкторе
}

Queue::Queue(const Queue& copyStack)
{
	// сами
}

Queue& Queue::operator=(const Queue& copyStack)
{
	// TODO: вставьте здесь оператор return
}

Queue::~Queue()
{
	delete _pimpl;		// композиция!
}

// поставить элемент в очередь.
void Queue::enqueue(const ValueType& value)
{
	_pimpl->enqueue(value);
}

// достать первый элемент из очереди.
ValueType& Queue::dequeue()
{
	return _pimpl->dequeue();
}

//посмотреть элемент в голове очереди.
ValueType& Queue::front()
{
	return _pimpl->front();
}

//проверка на пустоту.
bool Queue::isEmpty() const
{
	return _pimpl->isEmpty();
}

//размер.
size_t Queue::size() const
{
	
	return _pimpl->size();
	
}

/*
void Queue::push(const ValueType& value)
{
	// можно, т.к. push определен в интерфейсе
	_pimpl->push(value);
}

void Queue::pop()
{
	_pimpl->pop();
}

ValueType& Queue::top()
{
	return _pimpl->top();
}

const ValueType& Queue::top() const
{
	return _pimpl->top();
}

bool Queue::isEmpty() const
{
	return _pimpl->isEmpty();
}

size_t Queue::size() const
{
	return _pimpl->isEmpty();
}
*/