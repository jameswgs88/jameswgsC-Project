#include<iostream>
using namespace std;
//构造函数的分类及调用
//分类
//按照参数分类 无参构造和有参构造
//按照类型分类 普通构造和拷贝构造

class Person
{
public:
	//构造函数
	Person()
	{
		cout<<"Person的无参构造函数的调用" << endl;
	}
	Person(int a)
	{
		age = a;
		cout << "Person 有参构造函数的调用" << endl;
	}
	//拷贝构造函数
	Person(const Person &P)
	{
		cout << "Person的 拷贝构造函数的调用" << endl;
		age = P.age;
	}
		~Person()
		{
			cout << "Person 析构函数的调用" << endl;
		}
		int age;
	
};
//调用
void test01()
{
	//1、括号法
	//Person P1;
	//Person P2(10);
	//Person P3(P2);//拷贝构造函数
	//Person P1();
	//cout << "p2的年龄为：" << P2.age << endl;
	//cout<<"p3的年龄为：" <<P3.age<< endl;


	//2、显示法
	//Person P1;
	//Person P2 = Person(10);//有参构造
	//Person P3 = Person(P2);//拷贝构造
	//Person(10);//匿名对象
	//cout << "aaaaaaa" << endl;
	//Person(P3);


	//3、隐式转换法
	Person P4 = 10;
	Person P5 = P4;



}



int main() {
	test01();
	system("pause");
	return 0;
}