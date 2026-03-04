#include <iostream>
using namespace std;
#define SIZE 5
class QueueArray {
    int arr[SIZE];
    int front, rear;
public:
    QueueArray() {
        front = -1;
        rear = -1;
    }
    void enqueue(int value) {
        if (rear == SIZE - 1) {
            cout << "Queue Overflow! Cannot insert " << value << endl;
            return;
        }
        if (front == -1)
            front = 0;
        rear++;
        arr[rear] = value;
        cout << "Inserted element: " << value << endl;
    }
    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow! Cannot delete element." << endl;
            return;
        }
        cout << "Deleted element: " << arr[front] << endl;
        front++;
    }
    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty." << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};
int main() {
    QueueArray q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();\
    q.dequeue();
    q.display();
    return 0;
}
