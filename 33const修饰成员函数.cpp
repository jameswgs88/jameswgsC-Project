#include<iostream>
using namespace std;
//常函数
class Person
{
public:
	// const Person * const this;
	void showPerson() const 
	{
		this->m_B = 100;
		//this->m_A = 100;
		//this = NULL;//this指针不可以修改指针的指向的
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
//常对象
void test02()
{
	const Person p;
	//p.m_A = 100; 
	p.m_B = 100;
	//常对象只能调用常函数
	p.showPerson();
	//p.func();

}

int main(){
	system("pause");
	return 0;
}