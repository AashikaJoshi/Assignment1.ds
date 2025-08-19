#include <iostream>
using namespace std;

int main()
{
    int arr[100];
    int n;
    int index;
    int element;
    int target;
    int choice;

    do
    {
        cout << "------MENU------" << endl;
        cout << "1.CREATE" << endl;
        cout << "2.DISPLAY" << endl;
        cout << "3.INSERT" << endl;
        cout << "4.DELETE" << endl;
        cout << "5.LINEAR SEARCH" << endl;
        cout << "6.EXIT" << endl;
        cout << "Enter your choice: " << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Create array" << endl;
            cout << "Enter the size of the array :" << endl;
            cin >> n;

            cout << "Enter the elements in the array : " << endl;
            for (int i = 0; i < n; i++)
            {
                cin >> arr[i];
            }
            cout << endl;
            break;
        case 2:
            cout << "Display Array : " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ",";
            }
            cout << endl;
            break;
        case 3:
            cout << "Insert an element .." << endl;
            cout << "Enter the index to add element : " << endl;
            cin >> index;
            cout << "Enter the element you want to insert: " << endl;
            cin >> element;
            for (int i = n; i > index; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[index] = element;
            n++;
            cout << "Display New Array after insertion: " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ",";
            }
            cout << endl;
            break;

        case 4:
            cout << "Enter the index of the element you want to delete : " << endl;
            cin >> index;
            for (int i = index; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            n--;
            cout << "Display New Array after deletion : " << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ",";
            }
            cout << endl;
            break;

        case 5:
        {
            cout << "Enter the number you want to search in the array : " << endl;
            cin >> target;
            bool found = false;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == target)
                {
                    cout << "Element found at index " << i << endl;
                    found = true;
                    break;
                }
            }
            if (!found)
            {
                cout << "Element not found." << endl;
            }
            cout << endl;
            break;
        }
        case 6:
            cout << "Exiting program.." << endl;

            cout << endl;
            break;

        default:
            cout << "Invalid choice." << endl;
            break;
        }
    } while (choice != 6);
    return 0;
}
