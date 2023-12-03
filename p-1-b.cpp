#include <iostream>
#include <string>

using namespace std;

class Animal {
protected:
    static int numero_animales;
    string alimento;
public:
    Animal();
    ~Animal();
    static int obtenerNumeroAnimales();
   
    void comer(Animal *a){
        cout<<"Este animal está comiendo " << a->alimento<<"... ñom ñom"<<endl;
    };
};

int Animal::numero_animales = 0;

Animal::Animal()
{
    cout<<"Creando nuevo animal ... "<<endl;
    numero_animales += 1;
}

Animal::~Animal()
{
    cout<<"Borrando animal..."<<endl;
    numero_animales-=1;
}

int Animal::obtenerNumeroAnimales()
{
    return numero_animales;
}

class Herviboro : public Animal {
public:
    Herviboro():Animal(){
        this->alimento = "plantas ";
    }
};

class Carnivoro : public Animal {
public:
    Carnivoro():Animal(){
        this->alimento = "carne ";
    }
};

int main(){
    Animal *a = new Animal();
    Herviboro *h = new Herviboro();
    Carnivoro *c = new Carnivoro();

    cout<<"Numero de animeles: "<<Animal::obtenerNumeroAnimales()<<endl;
    
    a->comer(h); 

    a->comer(c);

    delete a;
    delete h;
    delete c;
    cout<<"Numero de animales: "<<Animal::obtenerNumeroAnimales()<<endl;
}