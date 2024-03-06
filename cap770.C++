#include <iostream>
using namespace std;
struct Node {
  int number;
  Node* next;
};
void push(Node** head_ref, int new_number) {
  Node* new_node = new Node();
  new_node->number = new_number;
  new_node->next = (*head_ref);
  (*head_ref) = new_node;
}
int getFrequency(Node* head, int x) {
  int count = 0;
  Node* temp = head;
  while (temp != nullptr) {
    if (temp->number == x) {
      count++;
    }
    temp = temp->next;
  }
  return count;
}
void printList(Node* node) {
  while (node != nullptr) {
    cout << node->number << " ";
    node = node->next;
  }
  cout << endl;
}
int main() {
  Node* head = nullptr;
  push(&head, 8);
  push(&head, 3);
  push(&head, 5);
  push(&head, 8);
  push(&head, 5);
  cout << "Linked list: ";
  printList(head);
  int x = 8;
  int frequency = getFrequency(head, x);
  cout << "Frequency of " << x << " is: " << frequency << endl;
  return 0;
}
