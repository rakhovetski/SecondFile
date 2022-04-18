#include "Iterator.h"
#include <iostream>
using namespace std;

int main()
{
    int size = 5;
    RingBuffer buffer(size);
    buffer.addElemInEnd(10);
    buffer.addElemInEnd(11);
    buffer.addElemInEnd(12);
    buffer.addElemInEnd(13);
    buffer.addElemInEnd(14);
    Iterator itera(buffer);
    cout << itera.getValue() << endl;
    itera.next();
    cout << itera.getValue() << endl;
    itera.next();
    cout << itera.getValue() << endl;
    itera.next();
    cout << itera.getValue() << endl;
    itera.next();
    cout << itera.getValue() << endl;
}
