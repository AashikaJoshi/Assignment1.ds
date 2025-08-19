#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cout << "Enter no.of elements in array : " << endl;
    cin >> n;
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    cout << "The array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    cout << "Reversing an array : " << endl;
    int i = 0;
    int j = n - 1;
    while (i > j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;

    return 0;
}
