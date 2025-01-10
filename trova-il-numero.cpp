# include <iostream>
using namespace std;
// Inserire una variabile x e vedere se è presente all'interno di una matrice.

int main(){
    int X;
    cout << "Quante colonne ci sono?" << endl;
    cin >> X;

    int Y;
    cout << "Quante righe ci sono?" << endl;
    cin >> Y;

    int A[X][Y];
    int x;
    int y;

    for(x=1; x<=X; x++){
        for(y=1; y<=Y; y++){
            A[x][y] = rand() % 11;
        }
    }

    int b, i=0;
    cout << "Inserisci un numero." << endl;
    cin >> b;

    for(x=1; x<=X; x++){
        for(y=1; y<=Y; y++){
            if(b==A[x][y]){
                i++;
            }
        }
    }

    cout << "Il numero " << b << " si presenta nella matrice " << i << " volte nelle posizioni:" << endl;

    string B[X][Y];
    string n;
    string m;

    for(x=1; x<=X; x++){
        for(y=1; y<=Y; y++){
            if(b==A[x][y]){
                n = to_string(x);
                m = to_string(y);

                B[x][y] = n + " : " + m;

                cout << B[x][y] << ";" << endl;
            }
        }
    }
}