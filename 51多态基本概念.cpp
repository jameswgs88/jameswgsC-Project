#include<iostream>
using namespace std;
//多态
//动物类
class Animal
{
public:
	//虚函数
	 virtual void speak()
	{
		cout<<"动物在说话" << endl;
	}
};
//猫类
class Cat :public Animal
{
public:
	void speak()
	{
		cout<<"小猫在说话" << endl;
	}
};
//狗类
 class Dog :public Animal
 {
 public:
	 void speak()
	 {
		 cout<<"小狗在说话" << endl;
	 }
 };
//执行说话的函数
void doSpeak(Animal &animal)
{
	animal.speak();
}
void test01()
{
	Cat cat;
	doSpeak(cat);
	Dog dog;
	doSpeak(dog);

}
void test02()
{
	cout<<"sizeof Animal = " << sizeof(Animal)<<endl;
}

int main() {
	//test01();
	test02();




	system("pause");
	return 0;
}