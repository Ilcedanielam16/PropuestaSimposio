// Ilce Daniela Morales Arreaga
#include <iostream>
using namespace std;
int main()
{
  char nombre1[15]; 
  char nombre2[15];
  int edad1;
  int edad2;
  cout << "Ingrese el nombre del primer conferencista\n";
  cin>> nombre1;
  cout <<"Ingrese su edad \n";
  cin >> edad1;
  cout <<"Ingrese el nombre del segundo conferencista\n";
  cin>> nombre2;
  cout <<"Ingrese su edad \n";
  cin >> edad2;
  if (edad1>=edad2){
    cout<< nombre1 << "Es el mayor" << edad1 <<endl;  
  }
  else {
    cout<< nombre2 << "Es el mayor"<< edad2 <<endl;
  }
  cin.ignore();
  return 0;
}