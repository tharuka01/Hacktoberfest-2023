# Program for postorder tree traversal
#              1
#          2      3
#        4   5  6   7

# A class that represents an individual node in a binary tree
class Node:
    def __init__(self, key):
        self.left = None
        self.right = None
        self.val = key


# A function to print postorder tree traversal
def printPostorder(root):

    if root:

        # First recur on left child of the root
        printPostorder(root.left)

        # Now recur on the right child of the root
        printPostorder(root.right)

        # Print the data of node
        print(root.val, end=' ')


# Driver Code
if __name__ == "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.left = Node(6)
    root.right.right = Node(7)

    print("Postorder traversal of binary tree is:")
    printPostorder(root)
    print()
