using System;

namespace StringRotation{
    class Program{
        static void Main(string[] args){
            Console.WriteLine(Rotate("abcd", 6));
        }

        static string Rotate(string str, int shiftAmount){
            // Get remainder in case shiftAmount > str.Length
            shiftAmount = shiftAmount % str.Length;

            // Separate the string into two halves at the index shiftAmount
            str = str.Substring(shiftAmount) + str.Substring(0, shiftAmount);

            return str;
        }
    }
}
