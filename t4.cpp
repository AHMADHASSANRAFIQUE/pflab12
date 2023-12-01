#include<iostream>
using namespace std;
int printarray(int rowsize,int array[][3]);
main()
{
    int rowsize;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int array[rowsize][3];
    cout<<"The sum of elements in the matrix is: "<<printarray(rowsize,array);
}
int printarray(int rowsize,int array[][3])
{
    int sum = 0;
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int x = 0; x < rowsize; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
            cin>>array[x][y];
            sum = sum + array[x][y];
        }   
    }
    return sum;
}