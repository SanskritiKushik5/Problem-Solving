#include <bits/stdc++.h>
using namespace std;
int arr[10], top=-1;
void Push();
void Pop();
void Display();
int main()
{
    int ch;
    cout << "-------Stack-------" << endl;
    cout << "1. Push \n2. Pop\n3. Display\n4. Exit" << endl;
    while(1)
    {
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch)
        {
        case 1:
            Push();
            break;
        case 2:
            Pop();
            break;
        case 3:
            Display();
            break;
        case 4:
            exit(0);
            break;
        default:
            cout << "Enter a valid choice!" << endl;
            break;
        }
    }
    return 0;
}
void Push()
{
    int x;
    cout << "Enter the value: ";
    cin >> x;
    if (top >= 10)
        cout << "Overflow" << endl;
    else
    {
        top += 1;
        arr[top] = x;
    }
}
void Pop()
{
    if (top == -1)
        cout << "Underflow" << endl;
    else
    {
        cout << "Popped: " << arr[top] << endl;
        top -= 1;
    }
}
void Display()
{
    for (int i=0; i<=top; i++)
        cout << arr[i] << " ";
    cout << endl;
}
