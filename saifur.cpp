#include<bits/stdc++.h>
using namespace std;
int mat1[10][10],mat2[10][10],matmult[10][10];

void mlt(int mat1[10][10],int mat2[10][10],int r1,int r2,int c1,int c2)
{
    int i,j,k,l,sum=0,matmult[10][10];
     ///matrix multiply...........
    cout<<"Matrix multiply"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<r2;k++)
            {
              sum=sum+(mat1[i][k]*mat2[k][j]);
            }
            matmult[i][j]=sum;
            sum=0;
        }
    }
    ///Print maltiply...............
    cout<<"Mltiply outputs:"<<endl;
    for(k=0;k<r1;k++)
    {
        for(l=0;l<c2;l++)
        {
          cout<<matmult[k][l]<<"   ";
        }
        cout<<endl;
    }
return;
}

main()
{
    int r1,c1,r2,c2,i,j;

    cout<<"Enter row 1 value:"<<endl;
    cin>>r1;
    cout<<"Enter colum 1 value:"<<endl;
    cin>>c1;
    cout<<"Enter row 2 value:"<<endl;
    cin>>r2;
    cout<<"Enter colum 2 value:"<<endl;
    cin>>c2;
    ///for 1st matrix input.....
    cout<<"First mattrix input:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<"Value of ("<<i<<","<<j<<"):";
            cin>>mat1[i][j];
        }
    }
    ///for 2nd matrix input.........
    cout<<"Second mattrix input:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<"Value of ("<<i<<","<<j<<"):";
            cin>>mat2[i][j];
        }
    }
    ///for 1st matrix output.......
        cout<<"First mattrix output:"<<endl;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout<<mat1[i][j]<<"   ";
        }
        cout<<endl;
    }
    ///for 2nd matrix output.....
    cout<<"Second mattrix output:"<<endl;
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout<<mat2[i][j]<<"   ";
        }
        cout<<endl;
    }
    mlt(mat1,mat2,r1,r2,c1,c2);
}
