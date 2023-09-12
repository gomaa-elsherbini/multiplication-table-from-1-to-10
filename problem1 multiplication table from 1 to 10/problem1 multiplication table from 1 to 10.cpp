#include <iostream>
using namespace std;




void tableHeader()
{
    cout << "\n\n\t\t\tMultiplication table from 1 to 10\t\n\n";
    cout << "\t";
    for (int i = 1; i <= 10; i++)
    {
        cout << i << "\t";
    }
    cout << "\n-----------------------------------------------------------------------------------\n";
}

string columnSeparator(int i){
    if (i <= 9)
        return "  |";
    else
        return " |";
}

void printMultiplicationTableFrom1To10()
{
    tableHeader();

    for (int i = 1; i <= 10; i++)
    {
        cout <<" "<< i << columnSeparator(i)<<"\t";

        for (int x = 1; x <= 10; x++)
        {
                cout << i * x << "\t";
        }
        cout << endl;
    }

}



int main()
{
    printMultiplicationTableFrom1To10();
}