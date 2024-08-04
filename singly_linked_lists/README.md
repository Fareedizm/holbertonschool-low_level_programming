# Singly Linked Lists

This project implements various operations on singly linked lists in C. The implemented operations include printing a list, finding the length of a list, adding nodes to the beginning or end of a list, and freeing a list.

## Data Structures

### list_t

```c
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

