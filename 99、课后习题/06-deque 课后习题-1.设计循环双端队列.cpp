class MyCircularDeque {
    deque<int> d;
    int capacity;
    int size;
public:
    MyCircularDeque(int k) {
        d.clear();
        capacity = k;
        size = 0;
    }

    bool insertFront(int value) {
        if (size == capacity) {
            return false;
        }
        size++;
        d.push_front(value);
        return true;
    }

    bool insertLast(int value) {
        if (size == capacity) {
            return false;
        }
        size++;
        d.push_back(value);
        return true;
    }

    bool deleteFront() {
        if (size == 0) {
            return false;
        }
        size--;
        d.pop_front();
        return true;
    }

    bool deleteLast() {
        if (size == 0) {
            return false;
        }
        size--;
        d.pop_back();
        return true;
    }

    int getFront() {
        if (size == 0) return -1;
        return d.front();
    }

    int getRear() {
        if (size == 0) return -1;
        return d.back();
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */