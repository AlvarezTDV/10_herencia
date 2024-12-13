#include <iostream>
using namespace std;

const double pi = 3.14;

class Figura {
	protected:
		string color;
	public:
		Figura(string c) {
			color = c;
		}
};

class Circulo : Figura {
	protected:
		double radio;
	public:
		Circulo(string c, double r):Figura(c) {
			radio = r;
		}
		double calcularArea() {
			return pi * (radio * radio);
		}
		double calcularPerimetro() {
			return 2 * pi * radio;
		}
};

class Rectangulo : Figura {
	protected:
		double base;
		double altura;
	public:
		Rectangulo(string c, double b, double a):Figura(c) {
			base = b;
			altura = a;
		}
		double calcularArea() {
			return base * altura;
		}
};

class Triangulo : Figura {
	protected:
		double base;
		double altura;
		string tipo;
	public:
		Triangulo(string c, double b, double a, string t):Figura(c) {
			base = b;
			altura = a;
			tipo = t;
		}
		double calcularArea() {
			return base * altura / 2;
		}
};

int main() {
	Circulo circulo("Rojo", 5);
	Rectangulo rectangulo("Azul", 10, 5);
	Triangulo triangulo("Amarillo", 5, 10, "Isosceles");
	
	cout << "Circulo: " << endl;
	cout << "Area: " << circulo.calcularArea() << endl;
	cout << "Perimetro: " << circulo.calcularPerimetro() << endl << endl;
	
	cout << "Rectangulo: " << endl;
	cout << "Area: " << rectangulo.calcularArea() << endl << endl;
	
	cout << "Triangulo: " << endl;
	cout << "Area: " << triangulo.calcularArea() << endl << endl;
	return 0;
}
