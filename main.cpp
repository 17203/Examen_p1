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
    float rd;
    Circulo c1, c2;
    c1.setRadio(12);
    c1.x = 3;
    c1.y = 2;
    Circulo c3(4, 5, 8);
    cout << "introduzca la radio del circulo 3 " << endl;
    cin >> rd;
    c2.setRadio(rd);
    cout << "introduzca la coordenada en x y luego en y " << endl;
    cin >> c2.x >> c2.y;
    c1.intersects(c2);
    c1.intersects(c3);
    c2.intersects(c3);
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
    float dist, r2;
    int cordx, cordy;
    r2 = radio + circulo.getRadio();
    cordx = x - circulo.x;
    cordy = y - circulo.y;
    dist = sqrt(cordx * cordx + cordy * cordy);
    if (dist > r2)
    {
        cout << "los circulos intersectan" << endl;
    }
    else if (dist < r2)
    {
        cout << "los circulos no intersectan" << endl;
    }
    else
    {
        cout << "la distancia y las radios son iguales" << endl;
    }
}