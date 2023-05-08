#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *child1;
    struct node *child2;
    struct node *child3;
} Node;

Node *newNode(int data)
{
    Node *new = (Node *)malloc(sizeof(Node *));
    new->data = data;
    new->child1 = NULL;
    new->child2 = NULL;
    new->child3 = NULL;

    return new;
}

void addNode(int data, Node *root)
{
    if (root == NULL)
        return;
    Node *new = newNode(data);
    if (root->child1 == NULL)
    {
        root->child1 = new;
        return;
    }
    if (root->child2 == NULL)
    {
        root->child2 = new;
        return;
    }
    if (root->child3 == NULL)
    {
        root->child3 = new;
        return;
    }
}

void deleteTree(Node *root)
{
    if (root == NULL)
        return;
    /* Delete Left sub-tree */
    deleteTree(root->child1);
    root->child1 = NULL;
    /* Delete right sub-tree */
    deleteTree(root->child2);
    root->child2 = NULL;
    /* Delete right sub-tree */
    deleteTree(root->child3);
    root->child3 = NULL;

    /* At last, delete root node */
    printf("Deleteing Node : %d\n", root->data);
    free(root);

    return;
}

void traverse(Node *root)
{
    if (root->child1 != NULL)
    {
        traverse(root->child1);
    }
    if (root->child2 != NULL)
    {
        traverse(root->child2);
    }
    if (root->child3 != NULL)
    {
        traverse(root->child3);
    }

    printf("%d\n", root->data);
}

void main()
{
    Node *root = newNode(2);
    addNode(3, root);
    addNode(4, root);
    addNode(6, root);
    addNode(7, root->child2);
    addNode(5, root->child2);

    traverse(root);

    deleteTree(root->child2);

    traverse(root);
}