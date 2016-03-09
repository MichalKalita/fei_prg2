#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{

    Stack stack(5);

    cout << "zasobnik je prazdny " << stack.isEmpty() << endl;

    for (int i = 1; i <= 20; ++i)
    {
        stack.push(i);
    }

    cout << "zasobnik je prazdny " << stack.isEmpty() << endl;

    int value;
    while (1)
    {
        value = stack.pop();
        if (value == -1) break;
        else
        {
            cout << "hodnota: " << value << endl;
        }
    }

    cout << "zasobnik je prazdny " << stack.isEmpty() << endl;

    return 0;
}