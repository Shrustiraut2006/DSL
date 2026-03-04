#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};
Node *front = NULL, *rear = NULL;

void enqueue(int x) {
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    if (rear == NULL)
        front = rear = temp;
    else {
        rear->next = temp;
        rear = temp;
    }
    cout << "Inserted: " << x << endl;
}
void dequeue() {
    if (front == NULL) {
        cout << "Underflow\n";
        return;
    }
    cout << "Deleted: " << front->data << endl;
    Node* temp = front;
    front = front->next;
    delete temp;
}
int main() {
    enqueue(100);
    enqueue(200);
    dequeue();
    return 0;
}
