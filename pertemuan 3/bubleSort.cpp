#include <iostream>
using namespace std;

int arr[20];
int n;

void input()
{

    while (true)
    {

        cout << "Input maximum lenght : ";
        cin >> n;

        if (n <= 20)
        {
            break;
        }
        else
        {
            cout << "n is bigger than 20";
        }
    }

    cout << endl;
    cout << "===================" << endl;
    cout << "Enter Elements of Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data - " << i + 1 << " : ";
        cin >> arr[i];
        cout << endl;
    }
}

void display()
{
    cout << endl;
    cout << "===================" << endl;
    cout << "sorted array" << endl;
    cout << "===================" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Data" << i + 1 << " : " << arr[i] << endl;
    }
}

void bubbleSortAlgorithm()
{
    // set pass =1
    int pass = 1;
    // If pass <= n - 1, go to step 2.
    do
    {
        // repeat step 3 varying j from 0 to n-1-pass

        for (int j = 0; j <= n - 1 - pass; j++)
        //
        // j + 1, swap the two elements.
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
        // Increment pass by 1.
        pass = pass + 1;
    } while (pass <= n - 1); // atau pass <=
}

int main()
{
    input();
    bubbleSortAlgorithm();
    display();
}