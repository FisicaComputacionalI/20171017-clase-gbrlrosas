//Rosas Galicia Jose Gabriel
// usando vector en la parte v.assign(filas,loque aparecera en todas)
//en v[fila]=lo que aparecera, en v.push_back(lo que aparecera)en nueva fila
//el primer for imprime la entrada desde 0 hasta la talla del vector
//desde vector<>..... y el segundo for corre directo todos las entradas (es mas rapido) que el anterior
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  vector<float> v;
  v.assign(8,16.3);
  v[2]=8.5;
  v[3]=10.8;
  v.push_back(9.3);
  v.push_back(6.5);
  for(int i=0; i<v.size(); i++)
    cout<<v[i]<<" ,";
  cout<<endl;
  cout<<v.front()<<" "<<v.at(2)<<" "<<v.back()<<endl;
  vector<float>::iterator iter;
  for(iter=v.begin(); iter<v.end(); iter++)
    cout<<*iter<<",";
  return 0;
}
