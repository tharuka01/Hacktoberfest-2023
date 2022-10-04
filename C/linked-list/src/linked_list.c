#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "linked_list.h"

LinkedList ll = { NULL, NULL, 0 };

void print_node(Node *n)
{
    printf("Node element: %d\n", n->data);
    printf("Next node address: %p\n", n->link);
}

void insert_when_empty(int element)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = element;
    new_node->link = NULL;

    ll.head = new_node;
    ll.tail = new_node;
    ll.length++;
}

void append(int element)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = element;
    new_node->link = NULL;

    ll.tail->link = new_node;
    ll.tail = new_node;
    ll.length++;
}

void pre_append(int element)
{
    Node *new_node = (Node*) malloc(sizeof(Node));
    new_node->data = element;
    new_node->link = ll.head;
    ll.head = new_node;
    ll.length++;
}

void insert_node(int element, int pos)
{
    if (pos < 0)
    {
        printf("Invalid position\n");
    }
    else if (ll.head == NULL)
    {
        insert_when_empty(element);
    }
    else if (pos == 0)
    {
        pre_append(element);
    }
    else if (pos == ll.length-1)
    {
        append(element);
    }
    else
    {
        Node *new_node = (Node*) malloc(sizeof(Node));
        new_node->data = element;

        Node *prev = ll.head;
        for (int i = 0; i < pos-1; i++)
        {
            prev = prev->link;
        }

        new_node->link = prev->link;
        prev->link = new_node;
        ll.length++;
    }
}

void remove_node(int pos)
{
    if (pos < 0 || pos >= ll.length)
    {
        printf("Invalid position\n");
    }
    else if (ll.length == 1)
    {
        free(ll.head);
        ll.head->link = NULL;
        ll.tail->link = NULL;
        ll.length--;
    }
    else if (pos == 0)
    {
        Node *tmp = ll.head;
        ll.head = ll.head->link;
        free(tmp);
        ll.length--;
    }
    else if (pos == ll.length-1)
    {
        Node *prev = ll.head;
        for (int i = 0; i < pos-1; i++)
        {
            prev = prev->link;
        }

        free(prev->link);
        prev->link = NULL;
        ll.tail = prev;
        ll.length--;
    }
    else
    {
        Node *prev = ll.head;
        for (int i = 0; i < pos-1; i++)
        {
            prev = prev->link;
        }

        Node *link = prev->link->link;
        free(prev->link);
        prev->link = link;
        ll.length--;
    }
}

void display()
{
    Node *tmp = ll.head;
    for (int i = 0; i < ll.length-1; i++)
    {
        printf("%d -> ", tmp->data);
        tmp = tmp->link;
    }

    printf("%d\n", tmp->data);
}

void get_element(int pos)
{
    if (pos < 0 || pos >= ll.length)
    {
        printf("Invalid position\n");
    }
    else if (pos == 0)
    {
        print_node(ll.head);
    }
    else if (pos == ll.length-1)
    {
        print_node(ll.tail);
    }
    else
    {
        Node *tmp = ll.head;
        for (int i = 0; i < pos; i++)
        {
            tmp = tmp->link;
        }

        print_node(tmp);
    }
}

void find(int element)
{
    Node *tmp = ll.head;
    bool found = false;
    for (int i = 0; i < ll.length; i++)
    {
        if (tmp->data == element)
        {
            printf("Element found!\n");
            printf("Node index: %d\n", i);
            print_node(tmp);
            found = true;
        }

        tmp = tmp->link;
    }

    if (!found)
    {
        printf("Element not found!\n");
    }
}
