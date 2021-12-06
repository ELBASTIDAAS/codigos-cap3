//@author   Bastidas Verdin Miguel Antonio
//@Date     03/12/2021

# include < iostream >

int fibonacci (int n ){
	if( n < 2 )
	  return 1;
	else
	  return fibonacci (n -1) + fibonacci (n -2);
}
int main ( ){
	int i;
	for ( i= 0; i <10; i ++ )
	  printf ( " %d\n " , fibonacci ( i ));
}
