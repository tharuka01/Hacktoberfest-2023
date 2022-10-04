#ifndef LINKED_LIST_H
#define LINKED_LIST_H

typedef struct node
{
    int data;
    struct node *link;
} Node;

typedef struct linked_list
{
    Node *head;
    Node *tail;
    int length;
} LinkedList;

void insert_node(int element, int pos);
void remove_node(int pos);
void display();
void get_element(int pos);
void find(int element);

#endif
