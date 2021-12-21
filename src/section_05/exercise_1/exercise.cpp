// Hier die benötigten Includes und using Befehle
#include <iostream>

using std::cout;
using std::endl;

// Hier die Definition der Funktion
void mod_cross_sum(int I, int J)
{
    for (int i = 0; i < I; i++)
    {
        for (int j = 0; j < J; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "Summe von " << i << " und " << j << " ist gerade" << endl;
            }
            else
            {
                cout << "Summe von " << i << " und " << j << " ist ungerade" << endl;
            }
        }
    }
}
