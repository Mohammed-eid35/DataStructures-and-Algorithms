/*
 *
 * Singly Linked List Implemintation 
 * By : Muhammad Eid
 * 
 */

public class SinglyLinkedList {
    
    // Linked List Node
    private class Node {
        int value;
        Node next;
        
        Node(int val) {
            value = val;
            next = null;
        }
    }

    private Node first, last;
    int nodesNo; // The number of nodes in the list

    SinglyLinkedList() {
        first = last = null;
        nodesNo = 0;
    }

    // Check if the list is empty or not
    public boolean empty() { return nodesNo == 0; }

    // Insert node at the beginning of the list
    public void insertFirst(int val) {
        Node newNode = new Node(val);
        
        if (empty()) { // The first node in the list
            first = last = newNode;
        }
        else {
            newNode.next = first;
            first = newNode;
        }
        nodesNo++;
    }

    // Insert node at the end of the list
    public void insertLast(int val) {
        Node newNode = new Node(val);

        if (empty()) { // The first node in the list
            first = last = newNode;
        }
        else {
            last.next = newNode;
            last = newNode;
        }
        nodesNo++;
    }

    // Insert node at a position of the list
    public void insertAt(int pos, int val) {
        if (pos < 0 || pos > nodesNo) { // If the position is valid or not
            System.out.println("Out of bound");
            return;
        }

        if (pos == 0) { // At the first position
            insertFirst(val);
            return;
        }
        
        if (pos == nodesNo) { // At the last position
            insertLast(val);
            return;
        }
        
        Node cur = first;
        for (int i = 1; i < pos; ++i) {
            cur = cur.next;
        }
        Node newNode = new Node(val);
        newNode.next = cur.next;
        cur.next = newNode;
        
        nodesNo++;
    }

    // Delete the first node from the list
    public void deleteFirst() {
        if (empty()) { // If the list is empty
            System.out.println("The list is empty");
            return;
        }

        if (nodesNo == 1) {
            first = last = null;
        }
        else {
            first = first.next;
        }
        
        nodesNo--;
    }

    // Delete the last node from the list
    public void deleteLast() {
        if (empty()) { // If the list is empty
            System.out.println("The list is empty");
            return;
        }

        if (nodesNo == 1) {
            first = last = null;
        }
        else {
            Node cur = first.next, pre = first;
            while(cur != last) {
                pre = cur;
                cur = cur.next;
            }
            pre.next = null;
            last = pre;
        }
        
        nodesNo--;
    }

    // Delete value
    public void delete(int val) {
        if (empty()) { // If the list is empty
            System.out.println("The list is empty");
            return;
        }

        if (first.value == val) {
            deleteFirst();
            return;
        }

        Node cur = first.next, pre = first;
        while (cur != null) {
            if (cur.value == val){
                break;
            }
            pre = cur;
            cur = cur.next;
        }

        if (cur == null) {
            System.out.println("Not Found");
        }
        else if (cur == last) {
            deleteLast();
        }
        else {
            pre.next = cur.next;
            nodesNo--;
        }
    }

    // Reverse the list
    public void reverse() {
        Node pre = null, cur = first, nxt = first.next;
        while (nxt != null) {
            nxt = cur.next;
            cur.next = pre;
            pre = cur;
            cur = nxt;
        }

        first = pre;
    }

    // Find value in the list
    public int find(int val) {
        Node cur = first;
        int pos = 0;
        
        while (cur != null) {
            if (cur.value == val){
                return pos;
            }
            cur = cur.next;
            pos++;
        }
        
        return -1; // Not fount
    }

    public void printList() {
        Node cur = first;
        while (cur != null) {
            System.out.print(cur.value + " ");
            cur = cur.next;
        }
        System.out.println();
    }
}
