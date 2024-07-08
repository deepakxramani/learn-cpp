#include<iostream>
using namespace std;
class Matrix
{
    private:
        int x[50][50],row,col;
        
    public:
        void getMatrix(int,int);
        void putMatrix();
        Matrix add(Matrix);
        Matrix Transpose();
        Matrix multiply(Matrix);
        Matrix getRow(int);
        Matrix getDesiredRow(int);
        Matrix getColumn(int);
        Matrix getDesiredColumn(int);


};
void Matrix::getMatrix(int r, int c)
{
    int i,j;
    row=r;
    col=c;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"Enter value of x["<<i<<"]["<<j<<"]: ";
            cin>>x[i][j];
        }
          
    }          
}
void Matrix::putMatrix()
{   int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        { 
            cout<<x[i][j]<<",";
        }
        cout<<endl;  
    }
}
Matrix Matrix::add(Matrix M)
{
    Matrix R;
    R.row=row;
    R.col=col;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           R.x[i][j]=x[i][j]+M.x[i][j]; 
        }
    }return(R);
}
Matrix Matrix::Transpose()
{
    Matrix R;
    R.row=col;
    R.col=row;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           R.x[j][i]=x[i][j]; 
        }
    }return(R);
}
Matrix Matrix::multiply(Matrix M)
{
    Matrix R;
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
                R.x[i][j]+=(x[i][k]*M.x[k][j]); 
           }
           
        }
    }return(R);
}

Matrix Matrix::getRow(int r)
{
    Matrix R;
    R.row=r;
    R.col=col;
    
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            R.x[i][j]=x[i][j];
        }
        
    }return(R);
}
Matrix Matrix::getDesiredRow(int r)
{
    Matrix R;
    R.row=1;
    R.col=col;
    
    int i,j;        
    for(j=0;j<R.col;j++)
    {
        R.x[0][j]=x[r][j];
    }
    return(R);
}
Matrix Matrix::getColumn(int c)
{
    Matrix R;
    R.row=row;
    R.col=c;
    
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            R.x[i][j]=x[i][j];
        }
           
    }return(R);
}
Matrix Matrix::getDesiredColumn(int c)
{
    Matrix R;
    R.row=row;
    R.col=1;
    
    int i,j;
    for(i=0;i<R.row;i++)
    {
        
            R.x[i][0]=x[i][j];
        
           
    }return(R);
}
int main()
{
    Matrix M1,M2,M3,M4;
    
    cout<<"First Matrix:"<<endl;
    M1.getMatrix(3,4);
    cout<<endl;
    M1.putMatrix();
    cout<<endl;
    //cout<<"Second Matrix:"<<endl;
    //M2.getMatrix(3,4);

    //cout<<"Third Matrix:"<<endl;
    //M3=M1.add(M2);
    //M3.putMatrix();
    
    //cout<<"\nTranspose of Matrix"<<endl;
    
    //M2=M1.Transpose();
    //M2.putMatrix();
    //M3=M1.multiply(M2);
    //M3.putMatrix();
    
    M2=M1.getRow(2);
    M2.putMatrix();
    cout<<endl;
    M4=M1.getDesiredRow(1);
    M4.putMatrix();
    cout<<endl;
    M4=M1.getColumn(2);
    M4.putMatrix();
    cout<<endl;
    M4=M1.getColumn(3);
    M4.putMatrix();


}