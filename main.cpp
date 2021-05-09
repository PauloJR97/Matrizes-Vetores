#include <iostream>
#define A 4
#define B 4
using namespace std;

int main() 
{
  int mat[A][B];
  int cont = 0;

  //Entrada
  for(int i = 0; i < A; i++){
    for(int j = 0; j < B; j++){
      cin>>mat[i][j];
    }
  }

  //Processamento
  for(int i = 0; i < A; i++){
    for(int j = 0; j < B; j++){
      if(mat[i][j] > 10){
        cont++;
      }
    }
  //Saida 
  cout<<"A matriz tem "<<cont<<" < 10";
 

  }
}