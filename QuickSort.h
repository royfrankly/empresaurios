#ifndef QUICKSORT_H
#define QUICKSORT_H

template <class T>
class QuickSort : public Ordenador<T>{
	public:
		void Ordena(T *A, int n);
};

#endif