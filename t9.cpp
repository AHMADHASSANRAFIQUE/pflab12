#include <iostream>
using namespace std;
void printarray(int rowsize, int array[][3]);
int newarray(int rowsize, int array[][3]);
main()
{
    int rowsize;
    cout << "Enter the number of rows for the array: ";
    cin >> rowsize;
    int array[rowsize][3];
    printarray(rowsize, array);
    cout<<"The count of identical rows in the array is: "<<newarray(rowsize, array);
}
void printarray(int rowsize, int array[][3])
{
    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < rowsize; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            cout << "Enter element at position [" << x << "][" << y << "]: ";
            cin >> array[x][y];
        }
    }
}
int newarray(int rowsize, int array[][3])
{
    int count = 0;
    for (int x = 0; x < rowsize; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            if (array[x][y] == array[x][y + 1])
            {
                if(array[x][y+1] == array[x][y+2])
                {
                    count++;
                }
            }
        }
    }
    return count;
}