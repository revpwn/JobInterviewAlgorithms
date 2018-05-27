using System;
using System.Collections.Generic;

namespace DuplicateInList{
    //  Linked List Node Class
    class Node{
        public int data;
        public Node next;   // Points to the next node in the list

        public Node(int data){
            this.data = data;
        }
    }

    class Program{
        static void Main(string[] args){
            Node head = InitLinkedList();
            Console.WriteLine(string.Join (",", FindDuplicate(head)));
        }

        // Provided function
        static Node InitLinkedList(){
            var head = new Node(0);
            var curr = head;

            for (int i = 1; i < 5; i++){
                curr.next = new Node(i);
                curr = curr.next;
            }

            for (int i = 3; i < 10; i++){
                curr.next = new Node(i);
                curr = curr.next;
            }
            return head;
        }

        // Function To Write
        static List<int> FindDuplicate(Node node){
            // HashSet is used for fastest lookup
            var foundNums = new HashSet<int>();
            var listDuplicates = new List<int>();

            // Loop until end of list
            while (node != null){
                if (foundNums.Contains (node.data))
                    listDuplicates.Add (node.data);
                else
                    foundNums.Add(node.data);

                node = node.next;
            }

            return listDuplicates;
        }
    }
}
