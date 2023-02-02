#include<iostream>
using namespace std;
#include<string>
//虚析构和纯虚析构
class Animal
{
public:
	//纯虚函数
	virtual void speak() = 0;
};
class Cat :public Animal
{
	virtual void speak() 
	{
		cout << "小猫在说话" << endl;
	}

};
void test01()
{
	Animal* animal = new Cat;
	animal->speak();
	delete animal;
}
int main() {
	test01();






	system("pause");
	return 0;
}