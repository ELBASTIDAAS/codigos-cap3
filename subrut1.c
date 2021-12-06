//@author   Bastidas Verdin Miguel Antonio
//@Date     03/12/2021

#include <iostream>

int main (){
  int i;
 mysrand (42);
  for ( i= 0; i<5; i++ ){
    printf ("%d\n", myrand ());
  }
}
