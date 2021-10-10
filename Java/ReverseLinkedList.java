package Java;

class ReverseLinkedList {
  public static class Node {
    int data;
    Node next;

    public Node(int data) {
      this.data = data;
      this.next = null;
    }
  }

  static Node head;

  // Function to add the element at the end of the linked list
  static void add(int data) {
    Node toAdd = new Node(data);
    if (head == null) {
      head = toAdd;
      return;
    }
    Node temp = head;
    while (temp.next != null) {
      temp = temp.next;
    }
    temp.next = toAdd;
  }

  // Function to print the linked list
  static void print() {
    Node temp = head;
    while (temp != null) {
      System.out.print(temp.data + " ");
      temp = temp.next;
    }
  }

  // Function to reverse the linked list
  static void reverseList() {
    Node prev = null;
    Node curr = head;
    Node next = null;
    while (curr != null) {
      next = curr.next;
      curr.next = prev;
      prev = curr;
      curr = next;
    }
    head = prev;
    print();
  }

  public static void main(String[] args) {
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    print();
    deletePosition(3);
    System.out.println();
    print();
  }
}