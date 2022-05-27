# COMPITO-SANTAMARIA-LUCA
Progetto scritto in linguaggio C++ con il quale si crea una matrice di numeri casuali tra 20 e 60, non quadrata, di dimensione scelta dall’utente, e che determina il valore massimo e minimo con le loro rispettive coordinate.

## Librerie
Queste sono le librerie necessarie per la realizzazione del progetto:
```
#include <iostream>
#include <time.h>
#include <stdlib.h>
```

## Inizializzazione delle variabili
La variabile:
-	riga indica il numero di righe, 
-	colonne indica il numero di colonne, 
-	MAX = 0, inizializzato a zero, indica la variabile che salverà il valore massimo della matrice
-	MIN = 1000, inizializzato a mille, indica la variabile che salverà il valore minimo della matrice
-	maxR salva la riga del valore massimo
-	maxC salva la colonna del valore massimo
-	minR salva la riga del valore minimo
-	minC salva la colonna del valore minimo

## Salvataggio della dimensione della matrice
La dimensione della matrice (righe, colonne), dato che è richiesta all’utente, è formata da due cicli do-while in cui nel primo viene chiesto il numero di righe con il vincolo che questo valore sia maggiore di zero; il secondo ciclo do-while richiede il numero di colonne con i vincoli che questo valore sia maggiore di zero e diverso dal valore delle righe, dato che questa matrice non può essere quadrata.

## Inizializzazione e generazione della matrice 
Dopo aver salvato la dimensione della matrice viene creata la stessa e viene scritta l’istruzione 
```
srand (time(NULL)) 
```
inizializza la generazione di numeri casuali in modo che a ogni esecuzione generi numeri diversi.

La creazione della matrice viene fatta tramite l’utilizzo di due cicli for e istruzione che serve per crearla con numeri casuali compresi tra 20 e 60
```
rand()% ( massimo - minimo + 1 ) + minimo --> il + 1 serve per prendere anche il numero 60
```

## Salvataggio del valore massimo e minimo, con le relative coordinate
Il processo per salvare i due valore e le rispettive coordinate è lo stesso: dentro due cicli for il primo if serve per salvare sulle variabili MAX o MIN il primo valore della matrice con coordinate (0,0); il secondo if serve per verificare che il valore salvato nella variabile sia effettivamente maggiore o minore del valore corrente, nel caso non fosse così viene aggiornato il valore delle variabili che salvano il valore e le coordinate.
