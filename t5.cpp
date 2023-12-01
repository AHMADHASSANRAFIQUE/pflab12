#include<iostream>
using namespace std;
void printarray(int array[3][3]);
bool checkIdentity(int array[3][3]);
main()
{
    int array[3][3];
    cout<<"Enter the elements of the matrix:"<<endl;
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<"Enter element at position ["<<x<<"]["<<y<<"]: ";
            cin>>array[x][y];
        }   
    }
    printarray(array);
    bool output = checkIdentity(array);
    if(output == true)
    {
        cout<<"The entered matrix is an identity matrix.";
    }
    else
    {
        cout<<"The entered matrix is NOT an identity matrix.";
    }
}
void printarray(int array[3][3])
{
    cout<<"The matrix you entered is: "<<endl;
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            cout<<array[x][y]<<"\t";
        }
        cout<<endl;
    }
}
bool checkIdentity(int array[3][3])
{
    int count = 0;
    bool check = false;
    for(int x = 0; x < 3; x++)
    {
        for(int y = 0; y < 3; y++)
        {
            if(x == y && array[x][y] == 1)
            {
                count++;
            }
            if(x != y && array[x][y] == 1)
            {
                count--;
            }
        }
    }
    if(count == 3)
    {
        check = true;
    }
    return check;
}