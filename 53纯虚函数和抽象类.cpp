#include<iostream>
using namespace std;
#include<string>
//���麯���ͳ�����
class Base
{
public:
	//���麯��
	virtual void func() = 0;
	
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout <<"func��������" << endl;
	};

};
void test01()
{
	//Base b;
	//new Base;
	//Son s;//���������д�����еĴ��麯���������޷�ʵ��������
	Base* base = new Son;
	base->func();
}


int main() {
	test01();
	





	system("pause");
	return 0;
}