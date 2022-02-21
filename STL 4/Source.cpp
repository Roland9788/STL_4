#include <iostream>
#include <vector>
using namespace std;

/*

	vector - ����������� ������
	template<class T,class Allocator=Allocator<T>>
	class vector
	{
		//���������� ������ ������
		explicit vector(const Allocator &a=Allocator());-������� ������ ������
		explicit vector(size_type num, const T &val=T(),const Allocator &a=Allocator());-������� num ���������� c� ��������� val
		vector(const vector<T,Allocator>&obj);-����������� ����������� �������� ���� �������� ��� � ������ obj
		template<class InIter>
		vector(InIter start, InIter end, const Allocator &a=Allocator());-�������� �������� � ��������� �� start �� end
		
		� ������ vector ���� ��������� ���������, ����� ��� (==, <, <=, >, >=, !=)

		template<class InIter>
		void assign(InIter start, InIter end)- �������� � ����� vector ������������������, ������������ start � end
		void assign(size_type num, const &val)- �������� num ��������� �� ��������� val
		reference at(size_type i);
		const_reference at(size_type i)const; [] c ��������� �� �������
		reference back();
		const_reference back()const; ���������� ��������� ������� � �������
		iterator begin();
		const_iterator begin() const ; ���������� ��������  ��� ������� �������� � �������
		size_type capacity() const ������� ������� �������
		void clear()- �������
		bool empty() const;- �������� �� �������
		const_iterator end() const;
		iterator end;-���������� ��������  ��� ��������� �������� � �������
		iterator erase(iterator i);- ������� �������, ���������� ���������� i, ���������� �������� ��� ��������  �������������� ����� ����������
		reference front();
		const_reference front() const;-���������� ������ �� ������ ������� � �������
		allocator_type get_allocator() const;-���������� �������������� �������
		iterator insert(iterator i, size_type num, const T&val); ��������� num ����� �������� val ���������������� ����� �������� �������� ���������� i
		template<class InIter>
		void insert(iterator i, InIter start, InIter end)-��������� � ������ ������������������, ������������ start � end ��������������� ����� ��������, �������� ���������� i
		size_type max_sze() const;- ���������� ������������ ����� ���������, ������� ����� ��������� ������
		reference operator[](size_type i) const;
		const_reference operator[](size_type i)- ���������� ������ �� �������, �������� ���������� i.
		void pop_back()-������� ��������� ������� � �������
		void push_back(const T &val)- ���������� � ����� �������
		reverse_iterator rbegin();
		const_reverse_iterator rbegin() const;- ���������� ����������� �������� ��� ����� �������
		reverse_iterator rend();
		const_reverse_iterator rend() const;- ���������� ����������� �������� ��� ������ �������
		void reverse(size_type num)- ������������� ������� �������
		void resize(size_type num, const T &val = T());-������������� ������� ������� ������� �� ����� num ���� ������ ��� ����� ��������� �������� �� � ��� ����� ����������� �������� �� ��������� �������� ���������� val.
		void swap(deque<T, Allocator>& obj)-��������� ����� ���������� ������� ������� � ������� ob
		void flip(); ����������� �������� ���� ����� � �������
		static void swap(reference i, reference j);-������������ ������� ���� �������� ����������� i � j

	};
*/



int main()
{
	setlocale(LC_ALL,"Rus");
	//�������� �������
	vector<int> vect;
	cout << "\n���������� ��������� ������� ��������� � ������� " << " ��������� ������ -->" << vect.capacity();
	cout << "\n���������� ��������� � ������� "<<vect.size();
	vect.resize(4, 0);
	cout << "\n������������ �������...\n";
	cout << "\n���������� ��������� � �������--> " << vect.size();
	cout << "\n������--> ";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}

	//max_size- ���������� ���������� ����
	cout << "\n������������ ������� ������� --> " << vect.max_size() / 4;
	vect.push_back(1);
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}
	//�������� ������������ ��������� � ������� ��� � ����� �������
	vector<int>::reverse_iterator i_riterator = vect.rbegin();
	cout << "\n����������� ��������\n������ --> ";

	for (int i = 0; i < vect.size(); i++)
	{
		cout << *(i_riterator + i) << " ";
	}

	//�������� ��������� � ������� ��� � ����� �������
	vector<int>::iterator i_iterator = vect.end();

	//������� �������� "-1" ����� ��������� ���������
	vect.insert(i_iterator - 1, -1);
	cout << "\n�������\n������ -->";
	for (i_iterator=vect.begin(); i_iterator != vect.end(); i_iterator++)
	{
		cout << *(i_iterator) << " ";
	}

	i_iterator = vect.end();
	vect.insert(i_iterator - 1, 2, 4);
	cout << "\n�������\n������ -->";
	for (int i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << " ";
	}




	return 0;
}