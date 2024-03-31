// 4.Նկարագրել ֆունկցիա, որը տրված ամբողջ թվերի
// a0,a1,…,an-1 հաջորդականության և f(x,y) ֆունկցիայի
// .համար վերադարձնում է հետևյալ արտահայտության արժեքը՝ max0ijn f(ai,aj), որտեղ f(x,y)-ը ֆունկցիա է int
// տիպի պարամետրերից և վերադարձնում է double տիպի
// արժեք: Անհրաժեշտ է նաև main-ից կանչել նկարագրված
// ֆունկցիան՝ ներածված հաջորդականության և երկու թվերի
// միջին թվաբանականը հաշվող ֆունկցիայի համար: 

#include <iostream>
using namespace std;

int f(int** mat, int n, int m)
{
  int maxval = 0;
  int maxrowind;

  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
  {
    if (mat[i][j] > maxval)
    {
      maxval = mat[i][j];
      maxrowind = i;
    }
  }

  return maxrowind;
}

int main()
{
  int n, m;
  cin >> n >> m;
  int** mat = new int*[n];
  for (int i = 0; i < n; i++) mat[i] = new int[m];

  for (int i = 0; i < n; i++) for (int j = 0; j < m; j++)
  {
    cin >> mat[i][j];
  }

  int rowind = f(mat, n, m);
  for (int i = rowind; i < n - 1; i++)
  {
    mat[i + 1] = mat[i];
  }
  n--;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << mat[i][j] << ' ';
    }
    cout << endl;
  }

  for (int i = 0; i < n; i++) delete[] mat[i];
  delete[] mat;

  system("pause");
  return 0;
}
