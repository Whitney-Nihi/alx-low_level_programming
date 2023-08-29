README for 0x13. C - More singly linked lists project containing functions prototypes and descriptions

-size_t print_listint(const listint_t *h) - Prototype for function that prints all the elements of a linked list
-size_t listint_len(const listint_t *h) - Prototyep for function that returns the number of elements in a linked list
-listint_t *add_nodeint(listint_t **head, const int n) - Prototype for function that adds new node at the beginning of a linked list
-listint_t *add_nodeint_end(listint_t **head, const int n) - Prototype for function that adds a new node at the end of a linked list
-void free_listint(listint_t *head) - Prototype for function that frees a linked list
-void free_listint2(listint_t **head) - Prototype for function that frees a linked list and sets the head to NULL
-int pop_listint(listint_t **head) - Prototype for function that deletes the head node of a linked list and returns the head node’s data (n)
-listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) - Prototype for function that returns the nth node of a linked list
