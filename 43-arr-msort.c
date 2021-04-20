/*
 Программа к учебнику информатики для 10 класса
 К.Ю. Полякова и Е.А. Еремина.
 Глава 8.
 Программа № 43. Сортировка выбором
 Вход: 
   1 
   3
   5 
   2 
   4
 Результат:
   После сортировки:
   1 2 3 4 5
*/ 
#include <stdio.h>

const int N = 5;
main()
{
  int A[N];
  int i, j, c, nMin;
  printf ( "Введите элементы массива: \n" );
  for ( i=0; i<N; i++ ) 
    scanf ( "%d", &A[i] );
  for ( i=0; i<N-1; i++ ) {
    nMin = i;
    for ( j=i+1; j<N; j++ )
      if ( A[j] < A[nMin] ) 
        nMin = j;
    if ( i != nMin ) {
      c=A[i]; A[i]=A[nMin]; A[nMin]=c;   
      }          
    }
  printf ( "После сортировки: \n" );
  for ( i=0; i<N; i++ ) 
    printf ( "%d ", A[i] );
  getchar();  
}


