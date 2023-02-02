#include<iostream>
using namespace std;
#include<string>
//继承中的对象模型
class Base
{public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son :public Base
{
	public:
		int m_D;
};
void test01()
{
	cout <<"size of Son = " << sizeof(Son)<< endl;//16
}



int main() {
	test01();

	system("pause");
	return 0;
}