#include "QuickSort.h"
template <class T>
void QuickSort<T> :: Reduce(T *A, int I, int n){
	int izq=I, der=n, pos=izq, cen=1;
	while(cen==1){
		cen=0;
		while(A[pos]<=A[der] and pos != der){
			der--;
		}
		if(pos != der){
			this->Intercambia(A,pos,der);
			pos = der;
			while(A[pos]>= A[izq] and pos != izq){
				izq++;
			}
			if(pos!=izq){
				this->Intercambia(A,pos,izq);
				pos=izq;
				cen=1;
			}
		}
		if(pos-1>I){
			Reduce(A,I,pos-1);
		}
		if(pos+1<I){
			Reduce(A,pos+1,n);
		}
	}
}