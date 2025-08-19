#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int transpose[100][100];
    int n;
    int m;

    cout << "Enter row size of matrix : " << endl;
    cin >> n;
    cout << "Enter column size of matrix : " << endl;
    cin >> m;

    cout << "Enter the elements for matrix : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "The MATRIX is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The Transpose of matrix is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            transpose[i][j] = arr[j][i];
            cout << transpose[i][j] << ",";
        }
        cout << endl;
    }

    return 0;
}