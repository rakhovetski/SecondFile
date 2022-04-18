#include "RingBuffer.h"
#include <iostream>

RingBuffer::RingBuffer() {
	size = 0;
	array1 = nullptr;
	first = 0;
	last = 0;
}

RingBuffer::RingBuffer(int size) {
	this->size = size;
	array1 = new double[size];
	first = 0;
	last = 0;
}

RingBuffer::RingBuffer(const RingBuffer& copy) {
	this->size = copy.size;
	first = copy.first;
	last = copy.last;
	array1 = new double[copy.size];
	for (int i = 0; i < size; i++) {
		array1[i] = copy.array1[i];
	}
}

void RingBuffer::addElemInEnd(double elem) {
	if (first == ((last + 1) % size)) {
		throw std::exception("isFull");
	}
	array1[last] = elem;
	last = (last + 1) % size;
}

double RingBuffer::getElemInStart() {
	if (isEmpty()) {
		throw std::exception("isEmpty");
	}
	double temp = array1[first];
	first = (first + 1) % size;
	return temp;
}

double RingBuffer::checkElemInStart() {
	if (isEmpty()) {
		throw std::exception("isEmpty");
	}
	return array1[first];
}

int RingBuffer::getSizeBuffer() {
	return size;
}

bool RingBuffer::isEmpty() {
	return first == last;
}


void RingBuffer::clearBuffer() {
	first = 0;
	last = 0;
}
