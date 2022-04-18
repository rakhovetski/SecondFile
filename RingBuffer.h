#pragma once

class RingBuffer {
private:
	double* array1;
	int size;
	int first;
	int last;
public:
	RingBuffer();
	explicit RingBuffer(int size);
	explicit RingBuffer(const RingBuffer& copy);
	void addElemInEnd(double elem);
	double getElemInStart();
	double checkElemInStart();
	int getSizeBuffer();
	bool isEmpty();
	void clearBuffer();
	friend class Iterator;
};

