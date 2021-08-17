#include <iostream>
#include "complex.h"

using namespace std;

ostream&
operator << (ostream& os, const complex& x)
{
	return os << '(' << real(x) << "," << imag(x) << ')';
}

inline complex&
_doap1(complex* ths, const complex& r)
{
	ths->re += r.re;
	ths->im += r.im;
	return *ths;
}

inline complex
_doap2(complex* ths, double r)
{
	
	return complex(real(*ths) + r,
		           imag(*ths));
}

inline complex
_doap3(complex* ths, const complex& r)
{
	return complex(real(*ths) + real(r),
		           imag(*ths) + imag(r));
}

inline complex&
complex::operator += (const complex& r)
{
	return _doap1(this, r);
}

inline complex
complex::operator + (double r)
{
	return _doap2(this, r);
}

inline complex
complex::operator + (const complex& r)
{
	return _doap3(this, r);
}

// 下面这种写法编译不过
//inline complex
//complex::operator + (const complex& r)
//{
//	return complex(real(*this) + real(r),
//		imag(*this) + imag(r));
//}

int main()
{
	complex c1(2, 1);
	complex c2(4, 0);

	cout << c1 << endl;
	cout << c2 << endl;

	cout << c1 + c2 << endl;
	cout << (c1 += c2) << endl;
	//cout << c1 << endl;
	cout << c1 + 2.0 << endl;
}


