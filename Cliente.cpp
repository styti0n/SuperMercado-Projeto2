#include "Cliente.h"


Cliente::Cliente(ifstream & in){
	string line;
	in.open("clientes.txt");
	if (in.fail())
	{
		cerr << "Erro a abrir ficheiro";
		exit(1);
	}
	else
	{
		getline(cin, line);
		if (line.empty())
		{
			cout << "Formarto Nao Valido";
		}
		else
		{
			for (int i = 4 * stoi(line, nullptr, 10); i < 0; i -= 4)
			{
				getline(cin, line);
			}
		}
	}
}


string Cliente::getNome() const{
  return nome;
}

unsigned int Cliente::getId() const{
  return id;
}
Data Cliente::getDataAdesao() const{
	return dataAdesao;
}

float Cliente::getVolCompras() const{
  return volCompras;
}

void Cliente::save(ofstream & out) const{

  // A IMPLEMENTAR

}

ostream& operator<<(ostream& out, const Cliente & cli){
  // A IMPLEMENTAR
}


bool operator<(const Cliente &cli1, const Cliente &cli2){
  // A IMPLEMENTAR
}
void Cliente::setNome(string newName){
	nome = newName;
	cout << "Nome de cliente com id: " << id << ", editado com sucesso para: " << nome << endl;
}
void Cliente::setDataAdesao(Data newDate){
	dataAdesao = newDate;
	cout << "Data de adesao de cliente com id: " << id << ", editado com sucesso para: " << dataAdesao << endl;
}
void Cliente::setVolCompras(float newVolCompras){
	volCompras = newVolCompras;
	cout << "Vol. de Compras de cliente com id: " << id << ", editado com sucesso para: " << volCompras << endl;
}
