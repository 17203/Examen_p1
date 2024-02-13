#include <bits/stdc++.h>
using namespace std;

class Circulo
{
    float radio;

public:
    int x;
    int y;

    Circulo();
    Circulo(int x2, int y2);
    Circulo(int x2, int y2, float r);

    float getRadio();
    void setRadio(float r);
    float getArea();
    void intersects(Circulo circulo);
};

int main()
{
    Circulo c1, c2;
    c1.setRadio(6);
    c1.x = 3;
    c1.y = 2;
    c2.setRadio(9);
    c2.x = 7;
    c2.y = 4;
    Circulo c3(4, 5, 8);
    cout << "funciono :D" << endl;
    return 0;
}

Circulo::Circulo()
{
    radio = 0.0;
    x = 0;
    y = 0;
}
Circulo::Circulo(int x2, int y2)
{
    radio = 0.0;
    x = x2;
    y = y2;
}
Circulo::Circulo(int x2, int y2, float r)
{
    if (r < 0)
    {
        radio = r;
    }
    else
    {
        r = 0;
    }
    x = x2;
    y = y2;
}

float Circulo::getRadio()
{
    return radio;
}
void Circulo::setRadio(float r)
{
    if (r < 0)
    {
        radio = r;
    }
    else
    {
        r = 0;
    }
}
float Circulo::getArea()
{
    float area, diametro;
    diametro = radio * radio;
    area = 3.14 * radio;
    return area;
}
void Circulo::intersects(Circulo circulo)
{
    float dist;

    if (dist <= radio + radio)
    {
        cout << "los circulos intersectan" << endl;
    }
    else
    {
        cout << "los circulos no intersectan" << endl;
    }
}