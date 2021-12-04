#include <iostream>

int main (){
  int i;
 mysrand (42);
  for ( i= 0; i<5; i++ ){
    printf ("%d\n", myrand ());
  }
}