class ListNode:
    def __init__(self, val = None, next = None):
        self.val = val;
        self.next = None
class LinkedLisk:
    def __init__(self):
        self.head = None
    def insert(self,val):
        newnode = ListNode(val)
        if(self.head):
            current= self.head
            while(current.next):
                current = current.next
            current.next=newnode
        else:
            self.head= newnode
    def printList(self):
        current = self.head
        while(current):
            print(current.val)
            current = current.next

class Solution:
    def mergeTwoLists(self, l1:ListNode,l2:ListNode)->ListNode:
        if not l1:
            return l2
        if not l2: 
            return l1
        
        current=headnode=ListNode(0)
        while l1 and l2:
            if l1.val<l2.val:
                current.next = l1
                l1 = l1.next
            else:
                current.next = l2
                l2 = l2.next
            current = current.next
        if l1: 
            current.next=l1
        elif l2: 
            current.next = l2
        return headnode.next

list1 = LinkedLisk()
list1.insert(2)
list1.insert(5)
list1.insert(6)
list1.insert(9)
list1.insert(12)

list2 = LinkedLisk()
list1.insert(1)
list1.insert(4)
list1.insert(6)
list1.insert(7)
list1.insert(10)



list3 = LinkedLisk()
list3 = Solution.mergeTwoLists(list1.head, list2.head)
list3.printList()
        
        
            