0. Print list
Prototype: size_t print_listint(const listint_t *h);
1. List length
Prototype: size_t listint_len(const listint_t *h);
2. Add node
Prototype: listint_t *add_nodeint(listint_t **head, const int n);
3. Add node at the end
Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
4. Free list
Prototype: void free_listint(listint_t *head);
5. Free
Prototype: void free_listint2(listint_t **head);
6. Pop
Prototype: int pop_listint(listint_t **head);
7. Get node at index
Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
8. Sum list
Prototype: int sum_listint(listint_t *head);
9. Insert
Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
10. Delete at index
Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
11. Reverse list
Prototype: listint_t *reverse_listint(listint_t **head);12. Print (safe version)
12. Print (safe version)
Prototype: size_t print_listint_safe(const listint_t *head);
13. Free (safe version)
Prototype: size_t free_listint_safe(listint_t **h);
14. Find the loop
Prototype: listint_t *find_listint_loop(listint_t *head);

