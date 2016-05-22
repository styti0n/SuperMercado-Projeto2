# pragma once


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cassert>

using namespace std;


class Data {
 private:
  int dia;
  int mes;
  int ano;
  string day;
  string month;
  string year;

 public:
  Data();
  Data(string data); // data na forma DD/MM/AAA
  int getDia() const;
  int getMes() const;
  int getAno() const;
  string getDay() const;
  string getMonth() const;
  string getYear() const;
  void setDia(int dia);
  void setMes(int mes);
  void setAno(int ano);
  void setData(string data);
  void save(ofstream & out) const;
  friend ostream& operator<<(ostream& out, const Data & data);
  friend bool operator==(const Data &data1, const Data &data2);
  friend bool operator<(const Data &data1, const Data &data2);
  friend bool operator>(const Data &data1, const Data &data2);
};
bool validData(string dateString); // non member function


