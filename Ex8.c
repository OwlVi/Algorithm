#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode* left;
    struct TreeNode* right;
};

struct TreeNode* createBalancedBST(int A[], int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    struct TreeNode* root = (struct TreeNode*)malloc(sizeof(struct TreeNode));

    root->data = A[mid];
    root->left = createBalancedBST(A, start, mid - 1);
    root->right = createBalancedBST(A, mid + 1, end);

    return root;
}

void inOrderTraversal(struct TreeNode* root) {
    if (root != NULL) {
        inOrderTraversal(root->left);
        printf("%d ", root->data);
        inOrderTraversal(root->right);
    }
}

int main() {
    const int n = 6;
    int A[] = {1, 2, 3, 4, 5, 6};

    struct TreeNode* root = createBalancedBST(A, 0, n - 1);

    printf("In-order traversal of the balanced BST: ");
    inOrderTraversal(root);

    return 0;
}
