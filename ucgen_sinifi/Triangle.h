#include<iostream>
#include<string.h>

using namespace std;

class Triangle
{
public:
	Triangle(float a, float b, float c);//Par const
	~Triangle();//Deconst
	Triangle(const Triangle& oth);//Copy Const

	bool isTriangle(float a, float b, float c);
	//Const inputtan baðýmsýz ayný sonucu verir
	float getSideA() const
	{
		return sideA;
	}
	float getSideB() const
	{
		return sideB;
	}
	float getSideC() const
	{
		return sideC;
	}

	void setValue(float a, float b, float c);
	bool isEquilateral();
	bool isScalene();
	bool isIssosceles();
	
	void triangleType();
	float calculateArea();


private:
	float sideA,sideB,sideC;
};

Triangle::Triangle(float a, float b, float c)
{
	while (!isTriangle(a, b, c))//Sürekli olarak kenar alýr doðru olana kadar
	{
		cout << "Ucgen Kenarlarini Giriniz(a-b-c)" << endl;
		cin >> a >> b >> c;

	}

	sideA = a;
	sideB = b;
	sideC = c;

	cout << "Triangle Created" << endl;

}

Triangle::~Triangle()
{
	cout << "Triangle Destroyed" << endl;
}

Triangle::Triangle(const Triangle& oth)
{
	sideA = oth.sideA;
	sideB = oth.sideB;
	sideC = oth.sideC;

	cout << "Triangle Copied" << endl;
}

void Triangle::setValue(float a, float b, float c)
{
	while (!isTriangle(a, b, c))//Sürekli olarak kenar alýr doðru olana kadar
	{
		cout << "Ucgen Kenarlarini Giriniz(a-b-c)" << endl;
		cin >> a >> b >> c;

	}

	sideA = a;
	sideB = b;
	sideC = c;

}


bool Triangle::isTriangle(float a,float b,float c)
{
	//	|b-c|	<	a	<	b+c

	if (!((abs(b - c) < a && (a < b + c))))
	{
		cout << "Gecersiz Side" << endl;
		return false;
	}
	if (!((abs(a - c) < b && (b < a + c))))
	{
		cout << "Gecersiz sideB" << endl;
		return false;
	}
	if (!((abs(b - a) < c && (c < b + a))))
	{
		cout << "Gecersiz sideA" << endl;
		return false;
	}

	return true;

}

bool Triangle::isEquilateral()
{
	return sideA == sideB && sideC == sideB;
}

bool Triangle::isIssosceles()
{
	if (isEquilateral())
	{
		return true;
	}
	else
	{
		return sideA == sideB || sideB == sideC || sideA == sideC;
	}

}

bool Triangle::isScalene()
{
	return !isEquilateral();
}

void Triangle::triangleType()
{
	if (isEquilateral())
	{
		cout << "Es Kenar Ucgen" << endl;
	}
	else if (isIssosceles())
	{
		cout << "Ikiz Kenar Ucgen" << endl;
	}
	else
	{
		cout << "Cesit Kenar Ucgen" << endl;
	}
}

float Triangle::calculateArea()
{
	float area;

	if (isEquilateral())
	{
		area = (pow(sideA, 2) * sqrt(3) / 4);
	}

	float s = sideA + sideB + sideC;
	area = sqrt(s * (s - sideA) * (s - sideB) * (s - sideC));
	return area;





}





