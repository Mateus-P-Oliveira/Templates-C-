#include <iostream>

using namespace std;
//Função Generica
template <typename T>
void ordenaPorSelecao ( T a [] , int N) {
    int i ,j, indMenor;
    T aux; 
    for ( i =0; i <N -1; i ++) {
        indMenor =i;
        for ( j=i +1; j <N ; j ++)
            if (a[ j]<a[ indMenor ])
                indMenor =j ;
        aux =a[ i ];
        a[i ]= a[ indMenor ];
        a[ indMenor ]= aux ;
    }
}

int main(){
    //Vetor em int
    int V[10] = {10,2,9,3,1,5,6,4,7,8};

    ordenaPorSelecao(V, 10);
    for(int i = 0; i < 10; i++){
        if(i > 0) cout << " ";
        cout << V[i];
    }
    cout << endl;
    //Vetor em double 
    double D[10] = {10.1,2.2,9.3,3.4,1.5,5.6,6.7,4.8,7.9,8.10};

    ordenaPorSelecao(D, 10);
    for(int i = 0; i < 10; i++){
        if(i > 0) cout << " ";
        cout << D[i];
    }
    cout << endl;

    return 0;
}