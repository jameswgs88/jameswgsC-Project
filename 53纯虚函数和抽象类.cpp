#include<iostream>
using namespace std;
#include<string>
//纯虚函数和抽象类
class Base
{
public:
	//纯虚函数
	virtual void func() = 0;
	
};
class Son :public Base
{
public:
	virtual void func()
	{
		cout <<"func函数调用" << endl;
	};

};
void test01()
{
	//Base b;
	//new Base;
	//Son s;//子类必须重写父类中的纯虚函数，否则无法实例化对象。
	Base* base = new Son;
	base->func();
}


int main() {
	test01();
	





	system("pause");
	return 0;
}