# include <iostream>
using namespace std;

int main(){
    // Matrice che restituisce in output il prodotto dei numeri nella diagonale.
    int X;
    cout << "Quante colonne?" << endl;
    cin >> X;

    int Y;
    cout << "Quante righe?" << endl;
    cin >> Y;

    int x, y;
    int A[X][Y];

    for(x=1; x<=X; x++){
        for(y=1; y<=Y; y++){
            A[x][y] = rand() % 101;
        }
    }

    int p=1;
    int max=0;

    for(x=1; x<=X; x++){
        for(y=1; y<=Y; y++){
            cout << A[x][y] << " ";
            if(x==y){
                p = p*A[x][y];

                if(A[x][y]>max){
                    max = A[x][y];
                }
            }
        }
            cout << endl;
    }
    cout << "Il prodotti di tutti i numeri nelle posizioni diagonali inseriti è " << p << " il numero più alto presente sulla diagonale è " << max << endl;
}