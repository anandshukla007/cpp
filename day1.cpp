#include <iostream>
using namespace std;

class Practical1
{
    int arr[100];
    int size;

public:
    Practical1(int x) { size = x; }
    void set_array()
    {
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    int find_pos(int num)
    {
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == num)
                return i + 1;
        }
        cout << "Element missing !!!";
        return -1;
    }
    float get_avg()
    {
        float sum = 0;
        for (int i = 0; i < size; i++)
            sum += arr[i];
        return sum/size;
    }
    int find_max()
    {
        int max = arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i] > max)
                max = arr[i];
        }
        return max;
    }
};
int main()
{
    int size;
    cout << "Enter list size: ";
    cin >> size;
    Practical1 p(size);
    return 0;
}