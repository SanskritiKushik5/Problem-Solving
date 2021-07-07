#include <iostream>
using namespace std;
int queue[5], f=-1, r=-1, n=5;
void Insert(int x){
    if ((f == 0 && r == n-1) || (f == r+1))
        cout << "Overflow" <<endl;
    else
    {
        if (f == - 1)
            f = 0;
        if (r == n)
            r = 0;
        else
            r += 1;
        queue[r] = x;
    }
}
void Delete(){
    if (f == -1)
        cout << "Underflow " << endl;
    else
    {
        cout << "Element deleted from queue is : " << queue[f] << endl;
        if (f == r)
            f = r = -1;
        else
        {
            if (f == n-1)
                f == 0;
            else
                f = f + 1;
        }
    }
}
void Display(){
    int i;
    if (f == - 1)
    {
        printf("Queue is empty \n");
        return;
    }
    if (f <= r)
    {
        printf("Queue is : ");
        for (i = f; i <= r; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
    else
    {
        printf("Queue is : ");
        for (i = 0; i <= r; i++)
            printf("%d ", queue[i]);
        for (i = f; i <= n; i++)
            printf("%d ", queue[i]);
        printf("\n");
    }
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

