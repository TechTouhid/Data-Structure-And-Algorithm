class Node:
    def __init__(self, value):
        self.info = value
        self.link = None


class SingleLinkedList:
    def __init__(self):
        self.start = None

    def display_list(self):  # for displaying the list
        if self.start is None:
            print("List is empty")
            return
        else:
            print("List is :   ")
            p = self.start
            while p is not None:
                print(p.info, " ", end="")
                p = p.link
            print()

    def count_nodes(self):  # For counting the element in the list
        p = self.start
        n = 0
        while p is not None:
            n += 1
            p = p.link
        print(f"The number of nodes in the list {n}")

    def search(self, x):  # For Searching the node in the list
        p = self.start
        position = 1
        while p is not None:
            if p.info == x:
                print(f"{x} is at position {position}")
                return True
            position += 1
            p = p.link
        else:
            print(f"{x} not found in list")
            return False

    def insert_in_beginning(self, data):  # Insert node at the beginning of the list
        temp = Node(data)  # created a object form the Node class
        temp.link = self.start
        self.start = temp

    def insert_at_end(self, data):  # insert a node at the end of the list
        temp = Node(data)
        if self.start is None:
            self.start = temp
            return

        p = self.start
        while p.link is not None:
            p = p.link
        p.link = temp

    def create_list(self):
        n = int(input("Enter the number of the nodes: "))
        if n == 0:
            return
        for i in range(n):
            data = int(input("Enter the element to be inserted: "))
            self.insert_at_end(data)

    def insert_after(self, data, x):
        p = self.start
        # Af first need to search the element of the list
        while p is not None:
            if p.info == x:
                break
            p = p.link
        if p is None:
            print(f'{x} not present in the list')
        else:
            temp = Node(data)
            temp.link = p.link
            p.link = temp

    def insert_before(self, data, x):
        # if list is empty
        if self.start is None:
            print('List is empty')
            return
        # if x is in first node, new node is to be inserted before first node
        if x == self.start.info:
            temp = Node(data)
            temp.link = self.start
            self.start = temp
            return
        # Find the reference to predecessor of node containing x
        p = self.start
        while p.link is not None:
            if p.link.info == x:
                break
            p = p.link

        if p is None:
            print(f'{x} is not in the list')

        else:
            temp = Node(data)
            temp.link = p.link
            p.link = temp

    def insert_at_position(self, data, k):
        if k == 1:
            temp = Node(data)
            temp.link = self.start
            self.start = temp
            return
        p = self.start
        i = 1
        while i < k - 1 and p is not None:  # find a  reference to k-1 node
            p = p.link
            i += 1

        if p is None:
            print(f"You can insert only upto position {k}")
        else:
            temp = Node(data)
            temp.link = p.link
            p.link = temp

    def delete_node(self, x):
        pass

    def delete_first_node(self):
        pass

    def delete_last_node(self):
        pass

    def reverse_list(self):
        pass

    def bubble_sort_exdata(self):
        pass

    def bubble_sort_exlinks(self):
        pass

    def merge_sort(self):
        pass

    def has_cycle(self):
        pass

    def find_cycle(self):
        pass

    def remove_cycle(self):
        pass

    def insert_cycle(self, x):
        pass

    def merge2(self, list2):
        pass

    def _merge2(self, p1, p2):
        pass

    def _divide_list(self, p):
        pass

    #####################################################


List = SingleLinkedList()

List.create_list()

while True:
    print("-----------------------------------------")
    print("1. Display List")
    print("2. Count The Number Of Nodes")
    print("3. Search For An Element")
    print("4. Insert in the beginning of the list")
    print("5. Insert a node at the end of the list")
    print("6. Insert a node after a specified node")
    print("7. Insert a node before a specified node")
    print("8. Insert a node at a given position")
    print("9. Delete first node")
    print("10. Delete last node")
    print("11. Delete any node")
    print("12. Reverse the list")
    print("13. Bubble sort by exchanging data")
    print("14. Bubble sort by exchanging links")
    print("15. Merge sort")
    print("16. Insert Cycle")
    print("17. Delete Cycle")
    print("18. Remove Cycle")
    print("19. Quit")
    print("----------------------------------------")

    option = int(input("Enter Your Choice: "))
    if option == 1:
        List.display_list()

    elif option == 2:
        List.count_nodes()

    elif option == 3:
        data = int(input("Enter The Element to be searched : "))
        List.search(data)

    elif option == 4:
        data = int(input("Enter The Element to be inserted : "))
        List.insert_in_beginning(data)

    elif option == 5:
        data = int(input("Enter The Element to be inserted : "))
        List.insert_at_end(data)

    elif option == 6:
        data = int(input("Enter The Element to be inserted : "))
        x = int(input("Enter The Element after which to insert : "))
        List.insert_after(data, x)

    elif option == 7:
        data = int(input("Enter The Element to be inserted : "))
        x = int(input("Enter The Element before which to insert : "))
        List.insert_before(data, x)

    elif option == 8:
        data = int(input("Enter The Element to be inserted : "))
        k = int(input("Enter The kth Element which to be insert : "))
        List.insert_at_position(data, k)

    elif option == 9:
        List.delete_first_node()

    elif option == 10:
        List.delete_last_node()

    elif option == 11:
        data = int(input("Enter The Element to be deleted : "))
        List.delete_node(data)

    elif option == 12:
        List.reverse_list()

    elif option == 13:
        List.bubble_sort_exdata()

    elif option == 14:
        List.bubble_sort_exlinks()

    elif option == 15:
        List.merge_sort()

    elif option == 16:
        data = int(input("Enter The Element at which the cycle has to be inserted : "))
        List.insert_cycle()

    elif option == 17:
        if List.has_cycle():
            print("List has a cycle")
        else:
            print("List does not have a cycle")
    elif option == 18:
        List.remove_cycle()

    elif option == 19:
        break
    else:
        print("Wrong option")
    print()
