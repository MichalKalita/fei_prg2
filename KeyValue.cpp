//
// Created by Michal Kalita on 24/02/16.
//

#include "KeyValue.h"

KeyValue::KeyValue(int k, float v)
{
    this->key = k;
    this->value = v;
}

float KeyValue::GetValue()
{
    return this->value;
}