using System;
using System.Collections.Generic;

/*
 * I have a friend that encountered this question at a recent interview, a commmon first approach is
 * using nested for loop, however; to be most correct use a method of hashing. The problem was introduced as the following:
 * 
 * You are provided with a class Node that contains the properties: int data and Node next. Write a function named FindDuplicate
 * that takes in the head of a linked list. If the list contains any duplicates return the number, otherwise return -1.
 * 
 * Ex. [1] -> [2] -> [3] -> [4]         ===> -1
 * Ex. [1] -> [2] -> [3] -> [3] -> [4]  ===>  3
 */

namespace DuplicateInList
{
    //  Linked List Node Class
    class Node
    {
        public int data;
        public Node next;   // Points to the next node in the list

        public Node(int data)
        {
            this.data = data;
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Node head = InitLinkedList();
            Console.WriteLine(FindDuplicate(head));
        }

        // Provided function
        static Node InitLinkedList()
        {
            var head = new Node(0);
            var curr = head;

            for (int i = 1; i < 5; i++)
            {
                curr.next = new Node(i);
                curr = curr.next;
            }

            for (int i = 4; i < 10; i++)
            {
                curr.next = new Node(i);
                curr = curr.next;
            }

            return head;
        }

        // Function To Write
        static int FindDuplicate(Node node)
        {
            // HashSet is used for fastest lookup
            var foundNums = new HashSet<int>();

            // Loop until end of list
            while (node != null)
            {
                if (foundNums.Contains(node.data))
                    return (node.data);
                else
                    foundNums.Add(node.data);

                node = node.next;
            }

            return -1;
        }
    }
}
