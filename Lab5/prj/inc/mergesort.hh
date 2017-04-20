#ifndef Mergesort_HH
#define Mergesort_HH

#include <cstdio>


void MergeSort(int array[], int p, int r)
{
	int i, q; 
	int tmp[r], p_tmp, q_tmp;
	
	q = (p + r + 1) / 2;
	p_tmp = p;
	q_tmp = q;
	
	if(q-p > 1) 
	{
		MergeSort(array, p, q-1);
	}
	if(r-q > 0) 
	{
		MergeSort(array, q, r);
	}
	
	
	for(i = p; i <= r; i++) 
	{
		tmp[i] = ((p_tmp == q) || ((q_tmp <= r) && (array[p_tmp] > array[q_tmp]))) ? array[q_tmp++] : array[p_tmp++];
	}
	for(i = p; i <= r; i++) 
	{
		array[i] = tmp[i];
	}
}





#endif
