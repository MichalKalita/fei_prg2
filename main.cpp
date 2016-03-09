#include <iostream>
#include "KeyValue.h"

using namespace std;

int main()
{
    KeyValues *kv;
    kv = new KeyValues();

    for (int i = 0; i < N; ++i)
    {
        cout << kv->Item(i).GetValue() << endl;
    }

    for (int i = 0; i < N; ++i)
    {
        kv->Item(i).SetValue(i * 5);
    }

    for (int i = 0; i < N; ++i)
    {
        cout << kv->Item(i).GetValue() << endl;
    }

    delete kv;

    return 0;
}