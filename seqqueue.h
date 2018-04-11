#pragma once

#include <stddef.h>

#define SeqQueueMaxSize 1000

typedef char SeqQueueType;

typedef struct SeqQueue{
    SeqQueueType data[SeqQueueMaxSize];
    size_t head;
    size_t tail;
    size_t size;
} SeqQueue;

//
