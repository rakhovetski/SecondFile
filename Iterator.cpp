#include "Iterator.h"

Iterator::Iterator(RingBuffer& que) {
	this->index = que.first;
	this->queue = que;
}

void Iterator::start() {
	index = queue.first;
}

void Iterator::next() {
	index = (index + 1) % queue.size;
}

bool Iterator::finish() {
	if (queue.isEmpty()) {
		return 1;
	}
	return index == queue.last;
}

double Iterator::getValue() {
	return queue.array1[index];
}