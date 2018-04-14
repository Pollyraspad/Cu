void push(node_t* head, int data) {
    node_t* newNode = (*node_t)malloc(sizeof(mode_t));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}
void push_test() {
    list_t* head = build();
    push(head, 1);
}