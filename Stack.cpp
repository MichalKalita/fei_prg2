//
// Created by Michal Kalita on 24/02/16.
//

#include <iostream>
#include "Stack.h"

Stack::Stack(int max_size)
{
    this->array = new int[max_size];
    this->allocated_size = max_size;
    this->index = 0; // 0 prvku, dalsi prvek bude zapsan na pozici 0
}

bool Stack::isEmpty()
{
    return this->index == 0;
}

void Stack::push(int x)
{
    this->increaseSize(index + 1);

    this->array[index] = x;

    this->index++;
}

int Stack::pop()
{
    if (index == 0)
    {
        return -1; // prazdny
    }

    int value = this->array[--index];
    this->optimizeSize();
    return value;
}

bool Stack::increaseSize(int size)
{
    std::cout << "_zvetsuji na " << size << std::endl;
    if (size < allocated_size)
    {
        return false;
    }
    else if (size == allocated_size)
    {
        return true;
    }
    else
    {
        this->resize(size);
        return true;
    }
}

Stack::~Stack()
{
    delete[] array;
}

void Stack::optimizeSize()
{
    if (index + 1 >= allocated_size) // zasobnik je plny
    {
        this->increaseSize(allocated_size * 2); // zvetsim na dvojnasobek
    }
    else if (index < (allocated_size / 2)) // zasobnik ma obsazenu mene jak polovinu
    {
        this->resize(allocated_size / 2);
    }
    // jinak nedelam nic
}

void Stack::resize(int size)
{
    std::cout << "_menim velikost na " << size << std::endl;

    int *array = new int[size]; // nove pole
    for (int i = 0; i < index; ++i) // kopiruju data
    {
        array[i] = this->array[i];
    }
    delete[] this->array; // mazu stare pole
    this->array = array; // nahrazuji stare pole za nove
}
