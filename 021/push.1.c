void push(struct node* head, int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node)); // ������������ ��� ���������, ������������ malloc()
    newNode->data = data;
    newNode->next = NULL; // head �������� NULL
    head = newNode;
}
void push_test() {
    newNode* head = build(); // List �������� �� newNode*
    push(&head, 1); // ����������� ���� &
}
