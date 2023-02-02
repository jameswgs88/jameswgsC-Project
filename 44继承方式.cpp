#include<iostream>
using namespace std;
#include<string>
//继承方式
//公共继承
class Base1
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son1 :public Base1
{
public:
	void func()
	{
		m_A = 10;//父类中的公共权限成员，到子类中依然是公共权限
		m_B = 10;//父类中的保护权限成员，到子类中依然是保护权限
		//m_C = 10;//父类中的私有权限成员，到子类中依然是私有权限
	}
};
void test01()
{
	Son1 s1;
	s1.m_A = 100;
	s1.m_B = 100;
}
//保护继承
class Base2
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son2 :protected Base2
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100;
	}
};
void test02()
{
	Son2 s1;
	//s1.m_A = 1000;//在Son2中 m_A变为保护权限
	//s1.m_B = 1000;
}
//私有继承
class Base3
{
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};
class Son3:private Base3
{
public:
	void func()
	{
		m_A = 100;
		m_B = 100;
		//m_C = 100; 

	}
};
class GrandSon3 :public Son3
{
public:
	void func()
	{
		//m_A = 1000;
		//m_B = 1000;
	}
};

void test03()
{
	Son3 s1;
	//s1.m_A = 1000;
	//s1.m_B = 1000;
}

int main() {
	
	system("pause");
	return 0;
}