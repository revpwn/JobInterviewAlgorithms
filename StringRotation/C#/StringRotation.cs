using System;

/*
 * I encountered this question at a recent interview, I was asked the following:
 * 
 * Write a function that when given a string and a non-negative number, it rotates the given amount.
 * Ex. "abcd", 1 => "bcda"
 * Ex. "abcd", 6 => "cdab"
 */

namespace StringRotation
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine(Rotate("abcd", 6));
        }

        static string Rotate(string str, int shiftAmount)
        {
            // Get remainder in case shiftAmount > str.Length
            shiftAmount = shiftAmount % str.Length;

            // Seperate the string into two halves at the index shiftAmount
            str = str.Substring(shiftAmount) + str.Substring(0, shiftAmount);

            return str;
        }
    }
}
