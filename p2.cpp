#include <iostream>
using namespace std;

class Rectangulo
{
public:
    Rectangulo(float ancho, float alto);

    float area();
    float perimetro();
protected:
    float anchoR;
    float altoR;
};

Rectangulo::Rectangulo(float ancho, float alto)
    : anchoR(ancho), altoR(alto)
{
    //El cuerpo estará vacío ya que ya se inicializaron los datos miembro
}

float Rectangulo::area()
{
    return anchoR * altoR;
}

float Rectangulo::perimetro()
{
    return 2 * (anchoR + altoR);
}


int main()
{
    float ancho, alto;
    cout << "Ingrese el ancho del rectangulo: "; cin >> ancho;
    cout << "Ingrese la altura del rectangulo: "; cin>> alto;

    Rectangulo r1(ancho, alto);

    cout << "El area del rectangulo es: " << r1.area() << endl;
    cout << "El perimetro del rectangulo es: " << r1.perimetro() << endl;
}