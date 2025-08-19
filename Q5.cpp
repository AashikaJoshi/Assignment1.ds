#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int n;
    int m;
    cout << "Enter row size : " << endl;
    cin >> n;
    cout << "Enter column size : " << endl;
    cin >> m;
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "The array is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }

    cout << endl;

    cout << "The sum of every row : " << endl;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < m; j++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Row " << i + 1 << " sum :" << sum << endl;
    }
    cout << endl;

    cout << "The sum of every column is :" << endl;
    for (int j = 0; j < m; j++)
    {
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = sum + arr[i][j];
        }
        cout << "Column " << j + 1 << " sum : " << sum << endl;
    }
    cout << endl;
    return 0;
}