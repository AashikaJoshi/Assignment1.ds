#include <iostream>
using namespace std;
int main()
{
    int arr[100][100];
    int brr[100][100];
    int crr[100][100];

    int n;
    int m;
    int p;
    cout << "Enter row size of matrix1 : " << endl;
    cin >> n;
    cout << "Enter column size of matrix1 : " << endl;
    cin >> m;
    cout << "Enter column size of matrix2 : " << endl;
    cin >> p;
    cout << "Enter the elements for matrix1 : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    cout << "The  first MATRIX is : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Enter the elements for matrix2 : " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cin >> brr[i][j];
        }
    }
    cout << endl;
    cout << "The second MATRIX is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            cout << brr[i][j] << ",";
        }
        cout << endl;
    }
    cout << endl;
    cout << "The Matrix multiplication for the above matrix is : " << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < p; j++)
        {
            crr[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                crr[i][j] += arr[i][k] * brr[k][j];
            }
            cout << crr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}