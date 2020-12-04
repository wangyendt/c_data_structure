//
// Created by 80301815 on 2020/12/4.
//

#include <iostream>
#include "queue.h"

using namespace std;

void test_deque() {
    Queue *q = queue_new();
    int a = 1;
    float b = 2;
    cout << "len=" << get_queue_len(q) << endl;
    queue_push_head(q, (QueueValue) &a);
    cout << "len=" << get_queue_len(q) << endl;
    queue_push_tail(q, (QueueValue) &b);
    cout << "len=" << get_queue_len(q) << endl;
    cout << *(int *) queue_peek_head(q) << endl;
    cout << "len=" << get_queue_len(q) << endl;
    cout << *(int *) queue_pop_head(q) << endl;
    cout << "len=" << get_queue_len(q) << endl;
    cout << *(float *) queue_peek_tail(q) << endl;
    cout << "len=" << get_queue_len(q) << endl;
    cout << *(float *) queue_pop_tail(q) << endl;
    cout << "len=" << get_queue_len(q) << endl;
}

int main() {
    test_deque();
    return 0;
}