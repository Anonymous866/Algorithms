#include<stdio.h> 
int fibo(int n) { 
  int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
} 
  
int main () { 
  int n = 7; 
  printf("%d", fibo(n)); 
  return 0; 
} 