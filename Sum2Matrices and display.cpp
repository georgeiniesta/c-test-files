//Sum 2 matrices, for rest change sign

#include <iostream>
using namespace std;
int main()
{
  int A[2][2]={{2,5},{7,5}};
  int B[2][2]={{6,3},{9,5}};
  int C[2][2]; //this creates matrix C empty with 0s//

  for (int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          C[i][j]=A[i][j]+B[i][j];
      }
  }
   for (int i=0;i<2;i++)
  {
      for(int j=0;j<2;j++)
      {
          cout<<C[i][j]<<" ";
      }
      cout<<endl;//This line separates into rows

  }

}
