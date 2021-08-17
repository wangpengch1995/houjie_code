#include <iostream>
using namespace std;

// 具体参考印象笔记-c++
class Fish
{
public:
	// 当不是虚函数时，下面的ShowInf中的参数为Fish& 引用传递，调用的是父类Fish中的方法。
	virtual void ShowInf()
	{
		cout << "我是一条fish" << endl;
	}
};

class Carp : public Fish
{
public:
	void ShowInf()
	{
		cout << "我是一条carp" << endl;
	}
};

//void ShowInf(Fish& fish)
//{
//	fish.ShowInf();
//}

void ShowInf(Fish* fish)
{
	//dynamic_cast<Carp*>(fish)->ShowInf();
	fish->ShowInf();
}

//int main()
//{
//	Carp carp;
//	ShowInf(&carp);
//}