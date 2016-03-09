//
// Created by Michal Kalita on 24/02/16.
//

#ifndef KEYVALUE_H
#define KEYVALUE_H

const int N = 5;

class KeyValue
{
private:
    int key;
    float value;
public:
    KeyValue(int k, float v)
    {
        this->key = k;
        this->value = v;
    }

    void SetValue(float value)
    {
        this->value = value;
    }

    float GetValue()
    {
        return this->value;
    }
};

class KeyValues
{
private:
    KeyValue *keyValues[N];
public:
    KeyValues()
    {
        for (int i = 0; i < N; ++i)
        {
            KeyValue *kv = new KeyValue(i, 10 * i);
            this->keyValues[i] = kv;
        }
    }

    ~KeyValues()
    {
        for (int i = 0; i < N; ++i)
        {
            delete this->keyValues[i];
        }
    }

    KeyValue Item(int index)
    {
        return *(this->keyValues[index]);
    }
};


#endif //KEYVALUE_H
