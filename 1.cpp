// 1. (1) Ներածել n և m բնական թվեր, կառուցել իրական թվերի mxn դինամիկ զանգված և ներածել արժեքներ: Զանգվածից հեռացնել նրա մաքսիմալ տարրը պարունակող տողը (ենթադրել, որ մաքսիմալ տարրը հանդիպում է ճիշտ 1 անգամ):
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
