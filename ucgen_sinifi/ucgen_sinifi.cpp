#include <iostream>
#include "Triangle.h"

using namespace std;

void aralik()
{
    cout << "#########################" << endl;
}

int main()
{
    float a, b, c;
    cout << "Ucgen Kenarlarini Giriniz(a-b-c)" << endl;
    cin >> a >> b >> c;

    Triangle triangle(a, b, c);

    Triangle triangle2(triangle);

    aralik();

    cout << "Triangle" << endl;
    cout << "sideA:" << triangle.getSideA() << endl;
    cout << "sideB:" << triangle.getSideB() << endl;
    cout << "sideC:" << triangle.getSideC() << endl;
    cout << "Alan " << triangle.calculateArea() << endl;
    triangle.triangleType();

    aralik();
    
    triangle2.setValue(5, 12, 13);
    cout << "Triangle2" << endl;
    cout << "sideA:" << triangle2.getSideA() << endl;
    cout << "sideB:" << triangle2.getSideB() << endl;
    cout << "sideC:" << triangle2.getSideC() << endl;
    cout << "Alan " << triangle2.calculateArea() << endl;
    triangle2.triangleType();

    aralik();
   

  

    return 0;
}


