#include<iostream>
#include<math.h>
#include<time.h>
#include<stdlib.h>

using namespace std;

class Search
{
    int arr[1000000];
    int size;

    void input()
    {
        cout << "Enter " << size << " elements: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << i + 1 << ": ";
            cin >> arr[i];
        }
    }
    void output()
    {
        cout << "Your array is: " << endl;
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

public:
    Search(int N) { size = N; }
    void linear(int arr[1000000], int x, int size)
    {
        cout << "You are using linear search: ";
        for (int i = 0; i < size; i++)
        {
            if (x == arr[i])
            {
                cout << "Element Pos: " << i + 1;
                return;
            }
        }
        cout << "ERROR 404";
    }
    void sort_array()
    {
        int i, min, j;
        for (i = 1; i < size; i++)
        {
            min = arr[i];
            j = i - 1;
            while (j >= 0 && arr[j] > min)
            {
                arr[j + 1] = arr[j];
                j = j - 1;
            }
            arr[j + 1] = min;
        }
    }
    void binary(int x)
    {
        int low = 0, high = size - 1, mid = 0;
        cout << "You are using binary search: ";

        for (int i = 0; i < size; i++)
        {
            mid = (low + high) / 2;
            if (mid == arr[i])
            {
                cout << "Element Pos: " << i + 1;
                return;
            }
            if (arr[mid] > arr[i])
                high = mid - 1;
            else
                low = mid + 1;
        }
        cout << "ERROR 404";
    }
    void show_graph()
    {
        // ((float)t)/CLOCKS_PER_SEC)
        clock_t t1, t2;
        int x;
        int arr[1000000];

        cout << "SIZE\tTIME" << endl;
        for (int i = 1; i < 7; i++)
        {
            int size = pow(10, i);
            for (int j = 0; j < size; j++)
                arr[j] = rand() % size;

            t1 = clock();
            linear(arr, x, size);
            t2 = clock();

            cout << size << "\t" << t2 - t1 << endl;
        }
    }
    void setup()
    {
        int x, choice;
        input();
        output();
        cout << "Element to be searched: ";
        cin >> x;
        cout << "1|linear Search\n2|binary search\n3|searching graph > ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            linear(arr, x, size);
            break;
        case 2:
            sort_array();
            binary(x);
            break;
        case 3:
            show_graph();
            break;
        default:
            cout << "Invalid Input";
            break;
        }
    }
};
int main()
{
    int size;
    cout << "Enter the size of array: ";
    cin >> size;
    Search S(size);
    S.setup();
    return 0;
}