
#include "Queue.h"
#include "ListQueue.h"
#include "LinkedList.h"
#include "MyVector.h"
#include "VectorQueue.h"
#include "QueueImplementation.h"

using namespace std;

int main(int argc, char** argv)
{
	//Создание:
	
		LinkedList list1;//Создание обычного листа.//+
	
		MyVector Vector1;//Создание обычного вектора.//+
	
		ListQueue LQueue1;//Создаем Очередь листа.//+
	
		VectorQueue VQueue1;// Создаем Очередь вектора.//+
	//
	
	//Add:
	
		list1.pushBack(5);//Добавление элементов в лист.//+
	
		Vector1.pushBack(5);//Добавление элементов в вектор.//+
		
		LQueue1.enqueue(5);//Поставить элемент  в Очередь листа.//+-
		
		VQueue1.enqueue(5);//Поставить элемент в Очередь вектора.//+-
	//
	
	
}