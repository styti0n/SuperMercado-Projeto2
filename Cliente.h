#pragma once

#include <iostream>
#include <fstream>
#include <string>

#include "Data.h"

using namespace std;


class Cliente {
 private:
  unsigned int id;
  string nome;
  Data dataAdesao;
  float volCompras;

 public:
  Cliente(ifstream & in);
  string getNome() const;
  unsigned int getId() const;
  Data getDataAdesao() const;
  float getVolCompras() const;
  void save(ofstream & out) const;
  friend ostream& operator<<(ostream& out, const Cliente & cli);  // mostra informacao do cliente no ecra
  friend bool operator<(const Cliente &cli1, const Cliente &cli2); // compara 2 clientes (1 cleinte e menor que outro se o seu nome for "alfabeticamente" inferior)
  void setNome(string newName);
  void setDataAdesao(Data newDate);
  void setVolCompras(float newVolCompras);
};

