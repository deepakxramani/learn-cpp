#include<iostream>
using namespace std;
class Matrix
{ private:
	 int x[50][50],row,col;
  public:
    void getMatrix(int,int);
	  void putMatrix();
    Matrix operator *(Matrix);
   
};
void Matrix::getMatrix(int r, int c)
{ 
  int i,j;
  row=r;
  col=c;
  for(i=0;i<r;i++)
  { 
    for(j=0;j<c;j++)
    {
	    cout<<"Enter Number x["<<i<<"]["<<j<<"]:";
      cin>>x[i][j];
    }
}
}

void Matrix::putMatrix()
{
 int i,j;
 for(i=0;i<row;i++) 	
 {
 	for(j=0;j<col;j++)
 {
	 	cout<<x[i][j]<<",";
 }
 cout<<endl;
}
cout<<endl;
}

Matrix Matrix::operator*(Matrix M)
{ Matrix R;
  R.row=row;
  R.col=col;
  int i,j,k;
  for(i=0;i<row;i++)
  {
  	for(j=0;j<col;j++)
  	{ 
  	 R.x[i][j]=0;
  	 for(k=0;k<col;k++)
  	 {

  	R.x[i][j]=	R.x[i][j]+(x[i][k]*M.x[k][j]);
	  }
  }
}
	return(R);
}




int main()
{
   Matrix M1,M2,M3;
   
   M1.getMatrix(3,4);
   M1.putMatrix();
   M2.getMatrix(3,4);
   M2.putMatrix();
   
   M3=M1*M2;
   M3.putMatrix();
   
   
   
}

 



