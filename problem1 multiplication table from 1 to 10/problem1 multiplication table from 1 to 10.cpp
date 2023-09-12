#include <iostream>
using namespace std;




void tableHeader()
{
    cout << "\t\t\tMultiplication table from 1 to 10\t\n\n";
    
    for (int i = 1; i <= 10; i++)
    {
        if (i == 1) {
            cout << "\t";
        }
        cout << "\t" << i;
    }
    cout << "\n-------------------------------------------------------------------------------------------\n";
}

void tableSide()
{
    
    for (int i = 1; i <= 10; i++)
    {
        cout <<"   "<< i << "\t|";

        for (int x = 1; x <= 10; x++)
        {
            if (x != 10) {
                cout << "\t" << i * x;
            }
            else
            {
                cout << "\t" << i * x << "\n";
            }
        }
    }

}



int main()
{
   tableHeader();
   tableSide();
}