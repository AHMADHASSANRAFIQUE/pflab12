#include <iostream>
using namespace std;
void printarray(int rowsize, int array[][5]);
void newarray(int rowsize, int array[][5]);
main()
{
    int rowsize;
    cout << "Enter row size: ";
    cin >> rowsize;
    int array[rowsize][5];
    printarray(rowsize, array);
    cout<<"\nMatrix after largest column moved to first: "<<endl;
    newarray(rowsize, array);
}
void printarray(int rowsize, int array[][5])
{
    cout << "Enter the elements of the matrix: " << endl;
    for (int x = 0; x < rowsize; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> array[x][y];
        }
    }
    cout << "\nOriginal Matrix: " << endl;
    for (int x = 0; x < rowsize; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            cout << array[x][y] << "\t";
        }
        cout << endl;
    }
}
void newarray(int rowsize, int array[][5])
{
    int sum, max = 0, newmax;
    int value;
    for (int y = 0; y < 5; y++)
    {
        sum = 0;
        for (int x = 0; x < rowsize; x++)
        {
            sum = sum + array[x][y];
        }
        if (sum > max)
        {
            max = sum;
            newmax = y;
        }
    }
    for(int y = 0; y < 5; y++)
    {
        for(int x = 0; x < rowsize; x++)
        {
            value = array[x][0];
            array[x][0] = array[x][newmax];
            array[x][newmax] = value;
        }
        break;
    }
    for(int i = 0; i < rowsize; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            cout<<array[i][j]<<"\t";
        }
        cout<<endl;
    }
}