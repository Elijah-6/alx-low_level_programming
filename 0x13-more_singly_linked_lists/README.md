# 0x13. C - More singly linked lists

## 0. Print list
Write a function that prints all the elements of a listint_t list.

    Prototype: size_t print_listint(const listint_t *h);
    Return: the number of nodes
    Format: see example
    You are allowed to use printf

 This code uses h->n to access the n member of the listint_t structure pointed to by the h pointer. The n member represents the integer value stored in each node of the singly linked list. The function iterates through the linked list, printing the integer value of each node, and counting the number of nodes in the list.

## 1. List length
Write a function that returns the number of elements in a linked listint_t list.

    Prototype: size_t listint_len(const listint_t *h);

This function takes a pointer to the head of the linked list and iterates through the list while counting the number of nodes. It returns the count as the number of elements in the list.

## 2. Add node
Write a function that adds a new node at the beginning of a listint_t list.

    Prototype: listint_t *add_nodeint(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

This function takes a pointer to a pointer **head to the list (to allow modification of the list in the calling function), an integer value n, creates a new node, and inserts it at the beginning of the list. It returns the address of the new element or NULL if it fails (due to memory allocation issues). Make sure to free the memory allocated by this function when you're done with the linked list.


## 3. Add node at the end
Write a function that adds a new node at the end of a listint_t list.

    Prototype: listint_t *add_nodeint_end(listint_t **head, const int n);
    Return: the address of the new element, or NULL if it failed

This function takes a pointer to a pointer **head to the list, an integer value n, creates a new node, and inserts it at the end of the list. It returns the address of the new element or NULL if it fails (due to memory allocation issues). Make sure to free the memory allocated by this function when you're done with the linked list.

## 4. Free list
__mandatory__

Write a function that frees a listint_t list.

    Prototype: void free_listint(listint_t *head);
This function iterates through the linked list, freeing the memory allocated for each node and properly deallocating resources. The parentheses are not required on a void return statement, but they can be used for consistency.

## 5. Free
__mandatory__

Write a function that frees a listint_t list.

    Prototype: void free_listint2(listint_t **head);
    The function sets the head to NULL

This function frees the memory allocated for each node in the linked list and sets the head to NULL. It also checks if the head pointer is NULL to handle the case where the list is empty.

## 6. Pop
mandatory

Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).

    Prototype: int pop_listint(listint_t **head);
    if the linked list is empty return 0

This function deletes the head node of the linked list, returns the data from the old head node, and sets the head to the new head node. It also checks if the list is empty and returns 0 in that case.

## 7. Get node at index
mandatory

Write a function that returns the nth node of a listint_t linked list.

    Prototype: listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
    where index is the index of the node, starting at 0
    if the node does not exist, return NULL

This function iterates through the linked list, incrementing a count variable for each node it encounters. When the count matches the specified index, it returns the pointer to that node. If the node with the given index does not exist, it returns NULL.

## 8. Sum list
__mandatory__

Write a function that returns the sum of all the data (n) of a listint_t linked list.

    Prototype: int sum_listint(listint_t *head);
    if the list is empty, return 0

This function iterates through the linked list, adding up the values (n) of each node. If the list is empty, it returns 0. The return statement now includes the required parentheses around the return value.

## 9.Insert
Write a function that inserts a new node at a given position.

    Prototype: listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);
    where idx is the index of the list where the new node should be added. Index starts at 0
    Returns: the address of the new node, or NULL if it failed
    if it is not possible to add the new node at index idx, do not add the new node and return NULL

This function inserts a new node at the specified index, where the index starts at 0. If it is not possible to add the new node at the specified index, it returns NULL. The return statements now include the required parentheses around the return values.

## 10. Delete at index
mandatory

Write a function that deletes the node at index index of a listint_t linked list.

    Prototype: int delete_nodeint_at_index(listint_t **head, unsigned int index);
    where index is the index of the node that should be deleted. Index starts at 0
    Returns: 1 if it succeeded, -1 if it failed

This function deletes the node at the specified index, where the index starts at 0. If it succeeds, it returns 1. If it fails (e.g., the index is out of bounds or the list is empty), it returns -1. The return statements now include the required parentheses around the return values.

## 11. Reverse list
__advanced__

Write a function that reverses a listint_t linked list.

    Prototype: listint_t *reverse_listint(listint_t **head);
    Returns: a pointer to the first node of the reversed list
    You are not allowed to use more than 1 loop.
    You are not allowed to use malloc, free or arrays
    You can only declare a maximum of two variables in your function

This function uses a simple loop to reverse the linked list in place by updating the next pointers of the nodes. It declares two variables, prev and next_node, to facilitate the reversal.

Keep in mind that this function doesn't use dynamic memory allocation (malloc) or deallocate memory (free) as per the requirements.

## 12. Print (safe version)
__advanced__

Write a function that prints a listint_t linked list.

    Prototype: size_t print_listint_safe(const listint_t *head);
    Returns: the number of nodes in the list
    This function can print lists with a loop
    You should go through the list only once
    If the function fails, exit the program with status 98
    Output format: see example

This function iterates through the linked list, printing the addresses and values of the nodes while keeping track of the count. It also checks for loops by comparing each node with all previous nodes. If a loop is detected, the program exits with status 98.

## 13. Free (safe version)
__advanced__

Write a function that frees a listint_t list.

    Prototype: size_t free_listint_safe(listint_t **h);
    This function can free lists with a loop
    You should go though the list only once
    Returns: the size of the list that was free’d
    The function sets the head to NULL

This function frees the memory of the list while handling lists with a loop. It keeps track of the size of the list and sets the head to NULL after freeing the memory.

## 14. Find the loop
__advanced__

Write a function that finds the loop in a linked list.

    Prototype: listint_t *find_listint_loop(listint_t *head);
    Returns: The address of the node where the loop starts, or NULL if there is no loop
    You are not allowed to use malloc, free or arrays
    You can only declare a maximum of two variables in your function

This function uses two pointers, one moving at twice the speed of the other. If there's a loop in the linked list, the two pointers will eventually meet at some node within the loop. After they meet, one of the pointers is reset to the head, and they are moved at the same speed. The point at which they meet again is the start of the loop. If there's no loop, they'll reach the end of the list.
