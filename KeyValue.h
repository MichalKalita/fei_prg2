//
// Created by Michal Kalita on 24/02/16.
//

#ifndef PRG3_KEYVALUE_H
#define PRG3_KEYVALUE_H


class KeyValue
{
private:
    int key;
    float value;
public:
    KeyValue(int k, float v);

    float GetValue();
};


#endif //PRG3_KEYVALUE_H
