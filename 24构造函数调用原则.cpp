#include<iostream>
using namespace std;
//���캯���ĵ��ù���
class Person    
{
public:
	//	Person()
	//{
	//	cout<<"Person��Ĭ�Ϲ��캯������" << endl;
	//}
	//Person(int age)
	//{
	//	cout << "Person���вι��캯������" << endl;

	//	m_Age = age; 
	//}
	Person(const Person & p)
	{
		cout << "Person�Ŀ������캯������" << endl;

		m_Age = p.m_Age;
	}
	
	~Person()
	{
		cout << "Person��������������" << endl;

	}
	int m_Age;
};
//void test01()
//{
//	Person p;
//	p.m_Age = 18;
//	Person p2(p);
//	cout << "P2������Ϊ�� " << p2.m_Age<< endl;
//}
void test02()
{
	Person p;
	

}

int main() {
	//test01();
	test02();




	system("pause");
	return 0;
}