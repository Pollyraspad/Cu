void push(struct node* head, int data) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node)); // отсутствовал тип указателя, возвращающий malloc()
    newNode->data = data;
    newNode->next = NULL; // head заменить NULL
    head = newNode;
}
void push_test() {
    newNode* head = build(); // List заменить на newNode*
    push(&head, 1); // отсутствует знак &
}
