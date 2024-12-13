#include <iostream>
using namespace std;

class Vehiculo {
	protected:
		string numeroPlaca;
		string color;
		string marca;
		double velocimetro;
	public:
		Vehiculo(string np, string c, string m, double v) {
			numeroPlaca = np;
			color = c;
			marca = m;
			velocimetro = v;
		}
		void mostrarDatos() {
			cout << "Numero de placa: " << numeroPlaca << endl;
			cout << "Color del vehiculo: " << color << endl;
			cout << "Marca del vehiculo: " << marca << endl;
			cout << "Velocimetro: " << velocimetro << " km/h" << endl;
		}
		void cambiarVelocidad() {
			double v;
			cout << "Escoga la nueva velocidad: " << endl;
			cin >> v;
			velocimetro = v;
		}
};

class Automovil : public Vehiculo {
	protected:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		Automovil(string np, string c, string m, double v, int cp, int cpj):Vehiculo(np, c, m, v) {
			cantidadPuertas = cp;
			cantidadPasajeros = cpj;
		}
		void mostrarAutomovil() {
			mostrarDatos();
			cout << "Cantidad de puertas: " << cantidadPuertas << endl;
			cout << "Cantidad de pasajeros: " << cantidadPasajeros << endl;
		}
		void subirPasajeros() {
			cantidadPasajeros++;
			cout << "Cantidad de pasajeros actual: " << cantidadPasajeros << endl;
		}
		void bajarPasajeros() {
			cantidadPasajeros--;
			cout << "Cantidad de pasajeros actual: " << cantidadPasajeros << endl;
		}
};

class Camion : public Vehiculo {
	protected:
		string carga;
	public:
		Camion(string np, string c, string m, double v, string cg):Vehiculo(np, c, m, v) {
			carga = cg;
		}
		void mostrarCamion() {
			mostrarDatos();
			cout << "Carga: " << carga << endl;
		}
		void cambiarCarga() {
			string c;
			cout << "Nueva carga: " << endl;
			cin >> c;
			carga = c;
		}
};

int main() {
	Automovil carro("881AS", "Rojo", "Ferrari", 15, 2, 4);
	Camion camion("ASU99", "Azul", "Toyota", 10, "Uvas");
	
	cout << "Datos del carro: " << endl;
	carro.mostrarAutomovil();
	
	cout << "Subio un pasajero: " << endl;
	carro.subirPasajeros();
	
	cout << "Bajo un pasajero: " << endl;
	carro.bajarPasajeros();
	
	cout << "Datos del camion: " << endl;
	camion.mostrarCamion();
	
	cout << "Se desea cambiar su carga: " << endl;
	camion.cambiarCarga();
	
	cout << "Tambien se quiere cambiar la velocidad del camion: " << endl;
	camion.cambiarVelocidad();
	return 0;
}
