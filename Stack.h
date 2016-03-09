//
// Created by Michal Kalita on 24/02/16.
//

#ifndef PRG3_STACK_H
#define PRG3_STACK_H


class Stack
{
private:
    int *array;
    int index = 0;
    int allocated_size = 0;
    void resize(int size);
public:
    Stack(int max_size); // konstruktor
    ~Stack(); // destruktor

    void push(int x);

    int pop();

    bool isEmpty();

    bool increaseSize(int size);

    void optimizeSize(); // zmeni velikost zasobniku tak, aby byla optimalni, nechava vzdy aspon jednu polozku volnou
};


#endif //PRG3_STACK_H
