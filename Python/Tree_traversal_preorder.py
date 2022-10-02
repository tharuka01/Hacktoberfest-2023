# Program for preorder tree traversal
#              1
#          2      3
#        4   5  6   7

# A class that represents an individual node in a binary tree
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key


# A function to print preorder tree traversal
def printPreorder(root):

    if root:

        # Print the data of node
        print(root.val, end=' ')

        # First recur on left child of the root
        printPreorder(root.left)

        # Now recur on the right child of the root
        printPreorder(root.right)


# Driver Code
if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)

    print("Preorder traversal of binary tree is:")
    printPreorder(root)
    print()
