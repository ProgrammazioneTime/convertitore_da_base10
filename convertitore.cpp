#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	int base,numero,val,i,resto;
	char risultato[100];
	
	do{
		cout<<"Inserisci una base tra 2 e 36: ";
		cin>>base;
	}while(base<2 || base>36 || base==10);
	
	do{
		cout<<"Inserisci un numero da convertire: ";
		cin>>numero;
	}while(numero<1);
	val=numero;
	for(i=0 ; numero>=base ; i++)
	{
		resto=numero%base;
		if(resto>9)
		{
			risultato[i] = resto + 55;
		}
		else
		{
			risultato[i] = resto + 48;
		}
		numero=numero/base;
	}
	if(numero>9)
	{
		risultato[i] = numero + 55;
	}
	else
	{
		risultato[i] = numero + 48;
	}
	
	cout<<"\nLa conversione del numero "<<val<<" da base 10 in base "<<base<<" e': ";
	for(int j=0; i>=j ; i--)
	{
		cout<<risultato[i];
	}
	
	cout<<"\n\n";
	system("pause");
}
