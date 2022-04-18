#pragma once
#include "RingBuffer.h"

class Iterator {
private:
	int index;
	RingBuffer queue;
public:
	friend class Queue;
	Iterator(RingBuffer& que);
	void start();
	void next();
	bool finish();
	double getValue();
};
