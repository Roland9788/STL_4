#include <iostream>
#include <vector>
using namespace std;

/*

	vector - Диамический массив
	template<class T,class Allocator=Allocator<T>>
	class vector
	{
		//Коструктор класса вектор
		explicit vector(const Allocator &a=Allocator());-создает пустой вектор
		explicit vector(size_type num, const T &val=T(),const Allocator &a=Allocator());-создает num переменных cо значением val
		vector(const vector<T,Allocator>&obj);-Конструктор копирования содержит теже элементы что и вектор obj
		template<class InIter>
		vector(InIter start, InIter end, const Allocator &a=Allocator());-содержит элементы в диапозоне от start до end
		
		в классе vector есть операторы сравнения, такие как (==, <, <=, >, >=, !=)

		template<class InIter>
		void assign(InIter start, InIter end)- Помещает в класс vector последовательность, определяемую start и end
		void assign(size_type num, const &val)- Помещает num элементов со значением val
		reference at(size_type i);
		const_reference at(size_type i)const; [] c проверкой за границы
		reference back();
		const_reference back()const; возвращает последний элемент в векторе
		iterator begin();
		const_iterator begin() const ; Возвращает итератор  для первого элемента в векторе
		size_type capacity() const Текущая емкость вектора
		void clear()- Очистка
		bool empty() const;- проверка на пустоту
		const_iterator end() const;
		iterator end;-Возвращает итератор  для послднего элемента в векторе
		iterator erase(iterator i);- Удаляет элемент, адресуемый итератором i, возвращает итератор для элемента  расположенного после удаленного
		reference front();
		const_reference front() const;-Возвращает ссылку на первый элемент в векторе
		allocator_type get_allocator() const;-Возвращает распределитель вектора
		iterator insert(iterator i, size_type num, const T&val); Вставляет num копий значения val непосредственной перед элеметом заданным параметром i
		template<class InIter>
		void insert(iterator i, InIter start, InIter end)-Вставляет в вектор последовательность, определяемую start и end непосредственно перед элеметом, заданным параметром i
		size_type max_sze() const;- Возвращает максимальное число элементов, которое может содержать вектор
		reference operator[](size_type i) const;
		const_reference operator[](size_type i)- Возвращает ссылку на элемент, заданный параметром i.
		void pop_back()-Удаляет последний элемент в векторе
		void push_back(const T &val)- добовление в конец вектора
		reverse_iterator rbegin();
		const_reverse_iterator rbegin() const;- Возвращает реверсивный итератор для конца вектора
		reverse_iterator rend();
		const_reverse_iterator rend() const;- Возвращает реверсивный итератор для начала вектора
		void reverse(size_type num)- Устанавливает емкость вектора
		void resize(size_type num, const T &val = T());-Устанавливает емкость вектора равного не менее num если вектор для этого требуется удлинить то в его конец добовляются элементы со значением заданным параметром val.
		void swap(deque<T, Allocator>& obj)-Выполняет обмен элементами данного вектора и вектора ob
		void flip(); Инвертирует значения всех битов в векторе
		static void swap(reference i, reference j);-Переставляет местами биты заданные параметрами i и j

	};
*/



int main()
{
	setlocale(LC_ALL,"Rus");
	//Создание вектора
	vector<int> vect;
	cout << "\nКоличество элементов которое храниться в векторе " << " выделение памяти -->" << vect.capacity();
	cout << "\nКоличество элементов в векторе "<<vect.size();
	vect.resize(4, 0);
	cout << "\nУстановление размера...\n";
	cout << "\nКоличество элементов в векторе--> " << vect.size();
	cout << "\nВектор--> ";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}

	//max_size- возвращает количество байт
	cout << "\nМаксимальная длинная вектора --> " << vect.max_size() / 4;
	vect.push_back(1);
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	//Создание реверсивного итератора и вставка его в конец вектора
	vector<int>::reverse_iterator i_riterator = vect.rbegin();
	cout << "\nРеверсивный итератор\nВектор --> ";

	for (int i = 0; i < vect.size(); i++)
	{
		cout << *(i_riterator + i) << " ";
	}

	//Создание итератора и вставка его в конец вектора
	vector<int>::iterator i_iterator = vect.end();

	//Вставка элемента "-1" перед последним элементом
	vect.insert(i_iterator - 1, -1);
	cout << "\nВставка\nВектор -->";
	for (i_iterator=vect.begin(); i_iterator != vect.end(); i_iterator++)
	{
		cout << *(i_iterator) << " ";
	}

	i_iterator = vect.end();
	vect.insert(i_iterator - 1, 2, 4);
	cout << "\nВставка\nВектор -->";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}




	return 0;
}