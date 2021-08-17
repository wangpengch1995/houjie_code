#pragma once

class complex;
complex&
_doap1(complex* ths, const complex& r);


class complex
{
public:
	complex (double r = 0, double i = 0)
		: re (r), im (i)
	{ }
	complex& operator += (const complex&);
	complex operator + (double);
	complex operator + (const complex&);
	double real () const {	return re;	}
	double imag () const {	return im;	}
private:
	double re, im;

	friend complex& _doap1(complex*, const complex&);
};

inline double real(const complex& x)
{
	return x.real();
}

inline double imag(const complex& x)
{
	return x.imag();
}

//inline complex
//operator + (const complex& x, const complex& y)
//{
//	return complex(real(x) + real(y),
//		imag(x) + imag(y));
//}

//inline complex
//operator + (const complex& x, double y)
//{
//	return complex(real(x) + y, imag(x));
//}

inline complex
operator + (double x, const complex& y)
{
	return complex(x + real(y), imag(y));
}


