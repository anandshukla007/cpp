#include <iostream>
#include <stdio.h>
using namespace std;

class Graph
{
    int matrix[100][100];
    int size;

    void input()
    {
        cout << "total vertices: ";
        cin >> size;
        for (int i = 1; i <= size; i++)
        {
            for (int j = 1; j <= size; j++)
            {
                char choice;
                printf("any vertice from %d to %d? ", i, j);
                cin >> choice;
                if (choice == 'y' || choice == 'Y')
                    matrix[i][j] = 1;
                else
                    matrix[i][j] = 0;
            }
        }
    }

    void output()
    {
        cout << "  | ";
        for (int i = 1; i <= size; i++)
            cout << i << " ";
        cout << "\n  | ";
        for (int i = 1; i <= size; i++)
            cout << "~ ";
        cout << endl;

        for (int i = 1; i <= size; i++)
        {
            cout << i << " | ";
            for (int j = 1; j <= size; j++)
            {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

public:
    void setup()
    {
        input();
        output();
    }
};

int main()
{
    Graph g;
    g.setup();
    return 0;
}