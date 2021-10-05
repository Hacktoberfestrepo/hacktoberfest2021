package GFG;

import java.util.*;
import java.io.*;


class Node{
    int data;
    Node next;
    
    Node(int x){
        data = x;
        next = null;
    }
    
}
public class ReverseLinkedList {
	static void printList(Node node) 
	{ 
		while (node != null) 
		{ 
			System.out.print(node.data + " "); 
			node = node.next; 
		} 
		System.out.println(); 
	}
    public static void main(String args[]) throws IOException { 
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while(t > 0){
        	int n = sc.nextInt();
            Node head = new Node(sc.nextInt());
            Node tail = head;
            for(int i=0; i<n-1; i++)
            {
                tail.next = new Node(sc.nextInt());
                tail = tail.next;
            }
            ReverseLL g = new ReverseLL();
            head = g.reverseList(head);
            printList(head); 
            t--;
        }
        sc.close();
    } 
} 
   // } Driver Code Ends


//function Template for Java

/* Return reference of new head of the reverse linked list 
 class Node {
     int value;
    Node next;
    Node(int value) {
        this.value = value;
    }
} */

class ReverseLL
{
   Node reverseList(Node head)
   {
       Node current = head;
        Node previous = null;
        Node forward = null;
        while(current.next != null){
            forward = current.next;
            current.next = previous;
            previous = current;
            current = forward;
        }
        head = current;
        head.next = previous;
        return head;
   }
}
