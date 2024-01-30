#include <conio.h>
using namespace std;

template <class T>
void busqBinaria(T *A, int n, T d){
    int izq=1, der=n, cen=0, pos;
    while(izq =< der && cen=0){
        int m = (izq+der)/2;
        if(A[m]==d){
            cen=1;
        }
        else{
            if(A[m]<d){
                der=m-1;
            }
            else{
                izq=m+1;
            }
        }
    }
    if(cen==1){
        pos=m;
    }
    else{
        pos=-izq;
    }
    return pos;
}