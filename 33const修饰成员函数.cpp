#include<iostream>
using namespace std;
//������
class Person
{
public:
	// const Person * const this;
	void showPerson() const 
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//thisָ�벻�����޸�ָ���ָ���
	}
	void func()
	{
		m_A = 100;
	}
	int m_A;
	mutable int m_B;


};
void test01()
{
	Person p;
	p.showPerson();
}
//������
void test02()
{
	const Person p;
	//p.m_A = 100; 
	p.m_B = 100;
	//������ֻ�ܵ��ó�����
	p.showPerson();
	//p.func();

}

int main(){
	system("pause");
	return 0;
}