#include <iostream>
using namespace std;

// ����ο�ӡ��ʼ�-c++
class Fish
{
public:
	// �������麯��ʱ�������ShowInf�еĲ���ΪFish& ���ô��ݣ����õ��Ǹ���Fish�еķ�����
	virtual void ShowInf()
	{
		cout << "����һ��fish" << endl;
	}
};

class Carp : public Fish
{
public:
	void ShowInf()
	{
		cout << "����һ��carp" << endl;
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