#include<iostream>
/*
M1>>M2;

*/


using namespace std;
class Matrix
{ private:
	 int x[50][50],row,col;
  public:
    void getMatrix(int,int);
	void putMatrix();
    void operator>>(Matrix&);
    
};
void Matrix::getMatrix(int r,int c)
{ int i,j;
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

void  Matrix::operator>>(Matrix &M)
{ 
  M.row=col;
  M.col=row;
  int i,j;
  for(i=0;i<M.row;i++)
  {
  	for(j=0;j<M.col;j++)
  	{ 
  	M.x[i][j]=x[j][i];
	  }
  }
	;
}





int main()
{
   Matrix M1,M2;
   
   M1.getMatrix(3,4);
   M1.putMatrix();
   M1>>M2;
   //M1 call insertion M2 move as parameter
   M2.putMatrix();
    
   
}



