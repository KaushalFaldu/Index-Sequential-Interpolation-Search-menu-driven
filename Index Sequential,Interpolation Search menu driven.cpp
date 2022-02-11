#include <iostream>

using namespace std;
#define SIZE 5

class Search {
private:
    int ele[SIZE];

public:
    void Input();
    int LinearSearch(int item);
};

//Input Element into the list
void Search::Input()
{
    int i = 0;

    cout << "\nEnter Items : \n";

    for (i = 0; i < SIZE; i++) {
        cout << "Enter ELE[" << i + 1 << "] : ";
        cin >> ele[i];
    }
}

//Function to search item from list
int Search::LinearSearch(int item)
{
    int POS = -1;
    int LOC = 0;

    for (LOC = 0; LOC < SIZE; LOC++) {
        if (ele[LOC] == item) {
            POS = LOC;
            break;
        }
    }

    return POS;
}

int main()
{
    int i = 0;
    int item;
    int pos;

    Search s = Search();

    s.Input();

    cout << "\n\nEnter Item To Be Searched : ";
    cin >> item;

    pos = s.LinearSearch(item);

    if (pos >= 0) {
        cout << "\nItem Found At Position : " << pos + 1 << endl;
    }
    else {
        cout << "\nItem Not Found In The List\n";
    }

    return 0;
}
