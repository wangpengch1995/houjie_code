#include <iostream>
using namespace std;

struct A
{
	/*A() {}
	A(int a) {}
	A(int a, double b) {}*/

	int num = 0;
};

//int main()
//{
//	/*当只是new一个无参对象时，可以不用显示声明无参构造，会自动调用默认构造；
//	但当声明了有参构造时，则这种情况也必须显示声明无参构造。*/
//	A* temp1 = new A();
//	//A* temp2 = new A(1);
//	//A* temp3 = new A(1, 2.0);
//
//	cout << temp1->num << endl;
//	//cout << temp2->num << endl;
//	//cout << temp3->num << endl;
//
//	/*结论：一个类，若没有定义构造函数，编译器会提供一个默认无参构造函数，但若定义了一个
//		有参构造，为了保证正确性，编译器不会再创建无参构造，这时若还想允许无参构造，
//		则必须显示声明一个。*/
//}

