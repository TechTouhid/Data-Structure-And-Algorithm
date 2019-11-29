class Node:
    def __init__(self, value):
        self.info = value
        self.link = None

class SingleLinkedList:
    def __init__(self):
        self.start = Node

    def display_list(self):
        pass

    def count_nodes(self):
        pass

    def search(self, x):
        pass

    def insert_in_beninning(self, data):
        pass

    def insert_at_end(self, data):
        pass

    def create_list(self):
        pass

    def insert_after(self, data, x):
        pass

    def insert_before(self, data, x):
        pass

    def insert_at_position(self, data, x):
        pass

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
    print("4. Insert In")
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

    option = int(input("Enter Your Choice"))
    if option == 1:
        List.display_list()

    elif option == 2:
        List.count_nodes()

    elif option == 3:
        data = int(input("Enter The Element to be searched : "))
        List.search(data)

    elif option == 4:
        data = int(input("Enter The Element to be inserted : "))
        List.insert_in_beninning(data)

    elif option == 5:
        data = int(input("Enter The Element to be inserted : "))
        List.insert_at_end(data)

    elif option == 6:
        data = int(input("Enter The Element to be inserted : "))
        x = data = int(input("Enter The Element after which to insert : "))
        List.insert_before(data, x)

    elif option == 7:
        data = int(input("Enter The Element to be inserted : "))
        x = int(input("Enter The Element before which to insert : "))
        List.insert_before(data, x)

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
