#include <iostream>
using namespace std;

int fun(int A[], int n)
{
  int *B = new int[n];
  for (int i = 0; i < n; ++i)
    B[i] = 0;
  int i, k=0, max = 0;
  for (i = 0; i < n; ++i)
    if (A[i] > 0 && A[i] <= n)
      B[A[i] - 1]++;
  for (i = 0; i < n; ++i)
    if (B[i] > n/2)
    {max=B[i];
     k=i;}
 if(k!=0)
   return k+1;
 else
   reutrn -1;
int main()
{
  int A[8] = {0, 5, 5, 5, 5, 1, 5, 7};
  cout << fun(A, 8) << endl;
}
