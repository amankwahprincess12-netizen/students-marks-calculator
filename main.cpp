#include <iostream>
using namespace std;

int main()
{
    int marks[3];
    int total = 0;
    float average;

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter student mark: ";
        cin >> marks[i];

        total = total + marks[i];
    }

    average = total / 3.0;

    cout << "Total marks: " << total << endl;
    cout << "Average marks: " << average << endl;

    return 0;
}