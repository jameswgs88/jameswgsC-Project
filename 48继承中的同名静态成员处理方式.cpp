#include<iostream>
using namespace std;
//继承中的同名静态成员处理
class Base
{
public:
	static int m_A;
	static void func()
	{
		cout<<"Base-static void func()" << endl;
	}
	static void func(int a)
	{
		cout << "Base-static void func(int a)" << endl;
	}
};
int Base:: m_A = 100;
class Son :public Base
{
public:
	static int m_A;
	static void func()
	{
		cout << "Son-static void func()" << endl;
	}

};
int Son::m_A = 200;
//同名静态成员属性
 void test01()
 {
	 //1、通过对象访问
	 cout<<"通过对象访问:" << endl;
	 Son s;
	 cout << "Son下 m_A = " << s.m_A <<endl;
	 cout << "Base下 m_A = " << s.Base::m_A << endl;
	 //2、通过类名方式
	 cout << "通过类名访问:" << endl;
	 cout << "Son下 m_A = " << Son::m_A << endl;
	 cout << "Base下 m_A = " <<Son:: Base::m_A << endl;





 }
//同名静态成员函数
 void test02()
 {
	 //1、通过对象访问
	 cout <<"通过对象访问" << endl;
	 Son s;
	 s.func();
	 s.Base::func();
	 //2、通过类名方式
	 cout << "通过类名访问" << endl;

	 Son::func();
	 Son::Base::func();
	 //子类出现和父类同名静态成员函数，也会隐藏父类中所有的同名成员函数
	 Son::Base::func(100);

 }



int main() {
	//test01();
	test02();




	system("pause");
	return 0;
}