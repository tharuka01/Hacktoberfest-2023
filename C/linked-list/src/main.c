#include <stdio.h>
#include "linked_list.h"

int main()
{
    printf("Inserts:\n");
    insert_node(5, 0);
    insert_node(15, 1);
    insert_node(30, 2);
    insert_node(0, 0);
    insert_node(10, 2);
    insert_node(20, 5);
    display();

    printf("\nRemoves:\n");
    remove_node(6);
    remove_node(5);
    remove_node(0);
    remove_node(2);
    display();

    printf("\nGets:\n");
    get_element(0); printf("\n");
    get_element(1); printf("\n");
    get_element(2); printf("\n");
    get_element(3);
    display();

    printf("\nFinds:\n");
    find(5); printf("\n");
    find(10); printf("\n");
    find(30); printf("\n");
    find(15);
    display();

    return 0;
}
