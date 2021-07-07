#include <iostream>
using namespace std;
int queue[20], f=-1, r=-1, n=20;
void Insert(int x){
    if (r >= n-1 )
        cout << "Overflow" <<endl;
    else
    {
        if (f == - 1)
            f = 0;
        r++;
        queue[r] = x;
    }
}
void Delete(){
    if (f == - 1 || f > r)
        cout << "Underflow " << endl;
    else
    {
        cout << "Element deleted from queue is : " << queue[f] << endl;
        f++;
    }
}
void Display(){
    int i;
    for(i=f; i<=r; i++)
        cout << queue[i] << " ";
    cout << "\n";
}
int main(){
    int x, ch;
    cout << "1. Insert" << endl;
    cout << "2. Delete" << endl;
    cout << "3. Display" << endl;
    cout << "4. Exit" << endl;
    while(1){
        cout << "Enter your choice: ";
        cin >> ch;
        switch(ch) {
            case 1: {
                cout << "Value to be inserted: ";
                cin >> x;
                Insert(x);
                break;
            }
            case 2: {
                Delete();
                break;
            }
            case 3: {
                Display();
                break;
            }
            case 4: {
               cout << "Exit" << endl;
               exit(0);
               break;
            }
            default: {
                cout << "Inappropriate number!";
            }
        }
    }
    return 0;
}
