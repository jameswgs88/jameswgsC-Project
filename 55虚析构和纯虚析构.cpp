#include<iostream>
using namespace std;
#include<string>
//�������ʹ�������
class Animal
{
public:
	//���麯��
	virtual void speak() = 0;
};
class Cat :public Animal
{
	virtual void speak() 
	{
		cout << "Сè��˵��" << endl;
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