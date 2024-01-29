#ifndef ORDENADOR_H
#define ORDENADOR_H

template <class T>
class Ordenador{
	public:
		virtual void Ordena(T *A, int n) = 0;
		virtual void Reduce(T *A, int I, int n) = 0;
		void Intercambia(T *A, int ind1, int ind2);
};

#endif
