#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Animal
	{ 
		//Variables
		private:
		string nombre;
		string descripcion;
		
		//Get y Sets
		public:
		Animal ();
		Animal (string, string);
		void SetNombre (string);
		void SetDescripcion (string);
		string GetNombre ( );
		string GetDescripcion ( );
		
		//Acciones
		void Mira();
	};
	
//Constructor vacio
Animal::Animal ( )
	{
		this->nombre = "";
		this->descripcion =  "";
	}
	
//Constructor con parametros iniciales
Animal::Animal (string nombre, string descripcion)
	{
		this->nombre = nombre;
		this->descripcion = descripcion;
	}
	
void Animal::SetNombre (string nombre)
	{
		this->nombre = nombre;
	}

void Animal::SetDescripcion (string descripcion)
	{
		this->descripcion = descripcion;
	}
	
string Animal::GetNombre ( )
	{
		return (this->nombre);
	}

string Animal::GetDescripcion ( )
	{
		return (this->descripcion);
	}

void Animal::Mira()
	{
		cout<<" El animal esta mirando "<<endl;
	}

//Clases que heredan de animal
class Mamifero : public Animal
	{
		public:
		Mamifero();
		//Accion exclusiva de mamifero
		void Corre();
	};
	
Mamifero :: Mamifero () 
	{ 
		
	} 

void Mamifero::Corre()
	{
		cout<<" El mamifero esta corriendo "<<endl;
	}
	
	
class Ave : public Animal
	{
		public:
		Ave();
		//Accion exclusiva de mamifero
		void Vuela();
	};
	
Ave :: Ave () 
	{ 
		
	} 

void Ave::Vuela()
	{
		cout<<" El ave esta volando "<<endl;
	}	
	
	
	
int main() 
	{         
		//Declaro un perro	
		Mamifero perro;
		perro.SetNombre("Doki");
		
		cout << " Nombre del animal " << perro.GetNombre() << endl;
		
		perro.Mira();
		perro.Corre();
			
		
		
		
		//Declaro una gallina
		Ave gallina;
		gallina.SetNombre("Doli");
		cout << " Nombre del animal " << gallina.GetNombre() << endl;
		gallina.Mira();
		gallina.Vuela();
		
		cout << "Fin" << endl;
		return (0);
		
	}





