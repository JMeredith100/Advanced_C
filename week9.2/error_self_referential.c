#include <stdio.h>
#include <stdlib.h>

// Linked List example
 typedef struct list{
    int data;
    struct list *next_element;
} list;

int main()
{
    list *head = NULL;
    head = malloc(sizeof(list));
    head->data = 10;
    head->next_element = malloc(sizeof(list));
    list *current_element = head->next_element;

    current_element->data = 20;
    current_element->next_element = NULL;

    free(head);
    free(current_element);


    /*struct list first_node;
    struct list second_node;

    first_node.data = 10;
    first_node.next_element = &second_node;
    second_node.next_element = NULL;
    (first_node.next_element)->data = 20;

    printf("%p\n", first_node.next_element);
    printf("%d\n", second_node.data);
    */

    return 0;
}