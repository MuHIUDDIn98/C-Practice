#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][3];
    cout<<"enter the elements of the mattrix"<<endl;
    for(int row=0;row<3;row++)
        {
        for (int col =0;col<3;col++)
        {
        cout <<"A["<<row<<"]["<<col<<"] = ";
        cin>>A[row][col];
        }cout<<endl;
        }
        //printing 2d array
      cout<<"matrix a[3][3]"<<endl;
    for(int row=0;row<3;row++)
    {
      for (int col=0;col<3;col++ )
            {cout<<A[row][col]<<" ";
            }cout<<endl;
            }
 return 0;
}
