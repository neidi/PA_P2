#ifndef PA_P2_LIST_H
#define PA_P2_LIST_H

// list.h
typedef struct node {
    int data;
    struct node *next;
    struct node *previous;
} Node;

typedef struct list {
    int size;
    Node *head;
    Node *tail;
} List;

List* create_list(void);

void add(List* list, int data);
void append(List* list, int data);
int insert(List* list, int index, int data);
int delete(List* list, int index);
void traverse(const List* list);
void free_list(List* list);

#endif //PA_P2_LIST_H
