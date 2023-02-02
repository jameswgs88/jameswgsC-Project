#include<iostream>
using namespace std;
//成员变量和成员函数分开存储的
class Person
{
	int m_A;//非静态成员变量
	static int m_B;//静态成员变量
	void func(){}//非静态成员函数
	static void func2() {}//静态成员函数

};
 int Person:: m_B = 0;
void test01()
{
	Person p;
	//空对象占用内存空间为：
	cout << "size of p = " <<sizeof(p)<< endl;
}
void test02()
{
	Person p;

	cout << "size of p = " << sizeof(p) << endl;

}  
int main() {
	//test01();
	test02();

	system("pause");
		return 0;
}