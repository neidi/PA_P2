#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

typedef struct treeNode {
    int data;
    struct treeNode* left;
    struct treeNode* right;
} TreeNode;

TreeNode* createNode(int data) {
    TreeNode* newNode = (TreeNode*)malloc(sizeof(TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

TreeNode* insertNode(TreeNode* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insertNode(root->left, data);
    } else if (data > root->data) {
        root->right = insertNode(root->right, data);
    }

    return root;
}

int containsValue(TreeNode* treeNode, int data){
    return -1;
}

void prepareTree(TreeNode* tree){    
    insertNode(tree, 5);
    insertNode(tree, 15);
    insertNode(tree, 3);
    insertNode(tree, 7);
    insertNode(tree, 12);
    insertNode(tree, 17);
}

void testCasesTree(TreeNode* tree){
    assert(containsValue(tree, 5) == 1);
    assert(containsValue(tree, 3) == 1);
    assert(containsValue(tree, 7) == 1);
    assert(containsValue(tree, 17) == 1);
    assert(containsValue(tree, 15) == 1);
    assert(containsValue(tree, 12) == 1);
    assert(containsValue(tree, 10) == 1);
    assert(containsValue(tree, 13) == 0);
    assert(containsValue(tree, 99) == 0);
    assert(containsValue(tree, 27) == 0);
    assert(containsValue(tree, 16) == 0);
    assert(containsValue(tree, 11) == 0);
    assert(containsValue(tree, 14) == 0);
    printf("congratulations all tests for binary tree passed");
}


int main() {
    TreeNode* root = createNode(10);
    prepareTree(root);
    testCasesTree(root);

    return 0;
}