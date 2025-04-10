#pragma once
void BubbleSort(int *m, size_t n);
void Merge(int *m1, size_t n1, int *m2, size_t n2, int *r);
void Sort1(int *m, size_t n, int *t);
void Sort1OMP(int *m, size_t n, int *t);
void Sort2(int *m, size_t n, int *t);
void Sort2OMP(int *m, size_t n, int *t);
void QSort1(int *m, size_t n);
void QSort1_(int *m,size_t p,size_t q);
void QSort2(int *m, size_t n);
void QSort2_(int *m,size_t p,size_t q);
void QSort2M(int *m, size_t n);
void QSort2M_(int *m,size_t p,size_t q);
void Heapify(int *m, size_t n, size_t i); 
void HeapSort(int *m, size_t n);
void CountSort(int *a, int * r, size_t n, int *b, int B);
void DigitalSort(int *a, int *r, size_t n, int *b, int B);
//-------------------------------------------------------------
int FindStat1(int *m,size_t n, size_t k, int *t);
int FindStat2(int *m, size_t n, size_t k, int *t);
int FindStat2_(int *m,size_t p,size_t q, size_t k);
int FindStat3(int *m, size_t n, size_t k, int *t);
int FindStat3_(int *m,size_t p,size_t q, size_t k);










