#include <bits/stdc++.h>
using namespace std;

void hpy(int arr[], int n, int i)
{
    int lar = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
    if (l < n && arr[l] > arr[lar])
        lar = l;
  
  
    if (r < n && arr[r] > arr[lar])
        lar = r;
    if (lar != i) {
        swap(arr[i], arr[lar]);
  
        hpy(arr, n, lar);
    }
}
void hmax(int arr[], int n)
{
    int si = (n / 2) - 1;

    for (int i = si; i >= 0; i--) {
        hpy(arr, n, i);
    }
}

void hmin(int *a, int m, int n){
   int j, t;
   t= a[m];
   j = 2 * m;
   while (j <= n) {
      if (j < n && a[j+1] < a[j])
         j = j + 1;
      if (t < a[j])
         break;
      else if (t >= a[j]) {
         a[j/2] = a[j];
         j = 2 * j;
      }
   }
   a[j/2] = t;
   return;
}
void buildhmin(int *a, int n) {
   int k;
   for(k = n/2; k >= 1; k--) {
      hmin(a,k,n);
   }
}


