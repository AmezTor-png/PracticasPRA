#include <iostream>
#include "BrazoRobotico.h"

int main(){
  BrazoRobotico b;

  b.mover(3, 5, 8);

  std::cout << "Posición: " << b.getX << " en X, " << b.getY << " en Y, " << b.getZ << " en Z.\n";

  b.mover(9, 7 ,2);

  std::cout << "Posición: " << b.getX << " en X, " << b.getY << " en Y, " << b.getZ << " en Z.\n";

  //coge y suelta
  b.coger;
  b.soltar;

  //cierra la pinza 2 veces y salta el error
  b.coger;
  b.coger;

  //abre la pinza 2 veces y salta el error
  b.soltar;
  b.soltar;
  
  return 0;
}
