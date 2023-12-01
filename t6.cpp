#include <iostream>
using namespace std;
string fireTorpedo(string fire[][5], string coordinate);
main()
{
    string fire[5][5] = {
        {".", ".", ".", "*", "*"},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", "*", ".", ".", "."},
        {".", ".", "*", "*", "."},
    };
    string coordinate;
    cout << "Enter coordinates to fire torpedo (e.g., A1, B3, E5): ";
    cin >> coordinate;
    cout << "Result: " << fireTorpedo(fire, coordinate);
}
string fireTorpedo(string fire[][5], string coordinate)
{
    string col, row;
    row = coordinate[0];
    col = coordinate[1];
    int newRow, newcol;
    if (row == "A")
    {
        newRow = 0;
    }
    else if (row == "B")
    {
        newRow = 1;
    }
    else if (row == "C")
    {
        newRow = 2;
    }
    else if (row == "D")
    {
        newRow = 3;
    }
    else if (row == "E")
    {
        newRow = 4;
    }

    if (col == "1")
    {
        newcol = 0;
    }
    else if (col == "2")
    {
        newcol = 1;
    }
    else if (col == "3")
    {
        newcol = 2;
    }
    else if (col == "4")
    {
        newcol = 3;
    }
    else if (col == "5")
    {
        newcol = 4;
    }

    string output;
    if (fire[newRow][newcol] == ".")
    {
        output = "splash";
    }
    else if (fire[newRow][newcol] == "*")
    {
        output = "BOOM";
    }
    return output;
}