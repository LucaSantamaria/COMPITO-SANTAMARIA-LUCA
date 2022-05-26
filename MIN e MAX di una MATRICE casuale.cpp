#include <iostream>
#include <time.h>      // queste sono le tre librerie necessarie per il funzionamento corretto del progetto
#include <stdlib.h>

using namespace std;
int main()
{
	// inizializzazione delle variabili che verranno utilizzate
	int riga, colonna, MAX = 0, MIN = 1000, maxR, maxC, minR, minC;    
	// utilizzo del ciclo do-while per richiedere all'utente di inserire il numero di righe della matrice
	do                                          
	{
		cout << endl << "inserisci righe: ";
		cin >> riga;
	}
	while ( riga <= 0 );
	// utilizzo del ciclo do-while per richiedere all'utente di inserire il numero di colonne della matrice
	// con il vincolo che non sia uguale a quello delle righe
	do
	{
		cout << endl << "inserisci colonne: ";
		cin >> colonna;
	}
	while ( colonna <= 0 || colonna == riga );
	// inizializzazione della matrice con numero di righe e colonne scelte dall'utente
	int matrice[riga][colonna];
	// L'istruzione srand (time(NULL)) inizializza la generazione di numeri casuali 
	// in modo che a ogni esecuzione generi numeri diversi.
	srand ( time ( NULL ) );
	cout << endl << "MATRICE GENERATA: " ;
	// creazione della matrice
	for ( int i = 0; i < riga; i ++ )
		for ( int j = 0; j < colonna; j ++ )
			matrice[i][j] = rand()% ( 60 - 20 + 1 ) + 20; // istruzione che serve per creare la matrice con numeri casuali compresi tra 20 e 60
			                                              // rand()% ( massimo - minimo + 1 ) + minimo --> il + 1 serve per prendere anche il numero 60	
	// stampa della matrice	
	cout << endl;												  	
	for ( int i = 0; i < riga; i ++)
	{
		cout << endl;
		for ( int j = 0; j < colonna; j ++ )
		{
			cout << "\t" << matrice[i][j];
		}
	}
	cout << endl;
	// istruzioni che servono per trovare il valore massimo e le coordinate dello stesso
	for( int i = 0; i < riga; i ++ )
		for( int j = 0; j < colonna; j ++ )
		{
			if ( i == 0 && j == 0 ) // se è la prima iterazione la variabile MAX salva il primo valore
				MAX = matrice[i][j]; // <--
				maxR = i + 1;        // maxR salva il numero di riga del primo valore
				maxC = j + 1;        // maxC salva il numero di colonna del primo valore

			if ( MAX < matrice[i][j] ) 
			{
				MAX = matrice[i][j]; // MAX salva il nuovo valore maggiore del precedente
				maxR = i + 1;        // maxR salva il numero di riga del nuovo valore
				maxC = j + 1;        // maxC salva il numero di colonna del nuovo valore
			}
		}
	// stampa del valore massimo e le sue coordinate
	cout << endl << "VALORE MASSIMO: " << MAX << " IN POSIZIONE " << maxR << ", " << maxC << endl;
	// istruzioni che servono per trovare il valore minime e le coordinate dello stesso
	for ( int i = 0; i < riga; i ++ )
		for ( int j = 0; j < colonna; j ++ )
		{
			if ( i == 0 && j == 0 ) // se è la prima iterazione la variabile MIN salva il primo valore
				MIN = matrice[i][j]; // <--
				minR = i + 1;        // minR salva il numero di riga del primo valore
				minC = j + 1;        // minC salva il numero di colonna del primo valore

			if ( MIN > matrice[i][j] )
			{
				MIN = matrice[i][j]; // MIN salva il nuovo valore minore del precedente
				minR = i + 1;        // minR salva il numero di riga del nuovo valore
				minC = j + 1;        // minC salva il numero di colonna del nuovo valore
			}
		}
	// stampa del valore minimo e le sue coordinate
	cout << endl << "VALORE MINIMO: " << MIN << " IN POSIZIONE " << minR << ", " << minC << endl;	
}

