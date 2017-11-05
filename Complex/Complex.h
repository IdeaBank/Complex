#pragma once

#include <iostream>
#include <vector>
#include <string>

class Complex
{
public:
	//Constructor and destructor
	Complex();
	Complex(double, double);
	~Complex() = default;

	//Set value of complex
	void setReal(const double&);
	void setImag(const double&);

	//Arithmetic operators for complex
	Complex operator+(const Complex&) const;	//Add complexs (complex + complex)
	Complex operator-(const Complex&) const;	//Subtract complexs (complex - complex)
	Complex operator*(const Complex&) const;	//Multiply complexs (complex * complex)
	Complex operator/(const Complex&) const;	//Divide complexs (complex / complex)

	Complex operator+(const double&) const;		//Add complex and double (complex + double)
	Complex operator-(const double&) const;		//Subtract complex and double (complex - double)
	Complex operator*(const double&) const;		//Multiply complex and double (complex * double)
	Complex operator/(const double&) const;		//Divide complex and double (complex / double)

	friend Complex operator+(const double&, const Complex&);	//Add double and complex  (double + complex)
	friend Complex operator-(const double&, const Complex&);	//Subtract double and complex (double - complex)
	friend Complex operator*(const double&, const Complex&);	//Multiply double and complex (double * complex)
	friend Complex operator/(const double&, const Complex&);	//Divide double and complex (double / complex)

	void operator+=(const Complex&);	//Add complexs and assign(complex + complex)
	void operator-=(const Complex&);	//Subtract complexs and assign(complex - complex)
	void operator*=(const Complex&);	//Multiply complexs and assign(complex * complex)
	void operator/=(const Complex&);	//Divide complexs and assign(complex / complex)

	void operator+=(const double&);	//Add complex and double and assign(complex + double)
	void operator-=(const double&);	//Subtract complex and double and assign(complex - double)
	void operator*=(const double&);	//Multiply complex and double and assign(complex * double)
	void operator/=(const double&);	//Divide complex and double and assign(complex / double)

	friend std::ostream& operator<<(std::ostream&, const Complex&);
	friend std::istream& operator>>(std::istream&, Complex&);

	double getReal() const;
	double getImag() const;

private:
	double real = 0;
	double imag = 0;
};
