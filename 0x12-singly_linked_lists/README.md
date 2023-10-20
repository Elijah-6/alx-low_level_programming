## Task 0
### Print list 
Write a function that prints all the elements of a list_t list.

    Prototype: size_t print_list(const list_t *h);
    Return: the number of nodes
    Format: see example
    If str is NULL, print [0] (nil)
    You are allowed to use printf

This code iterates through the linked list and prints each node's length and string value, or [0] (nil) if the string is NULL. It also counts the number of nodes in the list and returns that count.

## Task 1
### List length
Write a function that returns the number of elements in a linked list_t list.

    Prototype: size_t list_len(const list_t *h);

This function iterates through the linked list and counts the number of nodes, then returns that count.

## Task 2
### Add node
Write a function that adds a new node at the beginning of a list_t list.

    Prototype: list_t *add_node(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

This function takes a pointer to a pointer **head to the list (to allow modification of the list in the calling function), duplicates the input string str, creates a new node, and inserts it at the beginning of the list. It returns the address of the new element or NULL if it fails (due to memory allocation issues). It uses the strdup function to duplicate the string, so make sure to free the memory allocated by this function when you're done with the linked list.

## Task 3
### Add node at the end
Write a function that adds a new node at the end of a list_t list.

    Prototype: list_t *add_node_end(list_t **head, const char *str);
    Return: the address of the new element, or NULL if it failed
    str needs to be duplicated
    You are allowed to use strdup

This function takes a pointer to a pointer **head to the list, duplicates the input string str, creates a new node, and inserts it at the end of the list. It returns the address of the new element or NULL if it fails (due to memory allocation issues). It uses the strdup function to duplicate the string, so make sure to free the memory allocated by this function when you're done with the linked list.

## Task 4
### Free list
Write a function that frees a list_t list.

    Prototype: void free_list(list_t *head);

Here's a C function that frees a_ list_t list, releasing the memory allocated for each node and its associated strings.
This function iterates through the linked list, freeing the memory allocated for each node's string and the node itself.
It ensures that the memory is properly deallocated, preventing memory leaks.

## Task 5
### The Hare and the Tortoise 
Write a function that prints You're beat! and yet, you must allow,\nI bore my house upon my back!\n before the main function is executed.

    You are allowed to use the printf function

To print the specified message before the main function is executed, you can use a constructor attribute provided by some compilers.
This attribute allows you to specify a function that should be executed before main.
___attribute__((constructor))


## Task 6
### Real programmers can write assembly code in any language

Write a 64-bit program in assembly that prints Hello, Holberton, followed by a new line.

    You are only allowed to use the printf function
    You are not allowed to use interrupts
    Your program will be compiled using nasm and gcc:

