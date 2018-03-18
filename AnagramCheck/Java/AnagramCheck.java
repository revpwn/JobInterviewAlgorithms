public class AnagramCheck {

  public static void main(String[] args){
    //some test cases
    System.out.println(anagramCheck("Tom Marvolo Riddle", "I am Lord Voldemort"));
    System.out.println(anagramCheck("Hello", "olleH"));
    System.out.println(anagramCheck("Hi", "hello"));
  }
 
 
  public static boolean anagramCheck(String a, String b){
    //make all letters lower case and remove spaces
    a = a.toLowerCase().replaceAll("\\s","");
    b = b.toLowerCase().replaceAll("\\s","");
    
    return insertionSort(a.toCharArray()).equals(insertionSort(b.toCharArray()));
  }
  
  //because the Strings being checked are short, we can use a simpler sorting alg
  public static String insertionSort(char[] array){
    int i = 0;
    while(i < array.length)
    {
        int j = i - 1;
        char x = array[i];
        while(j >= 0)
        {
            if (array[j] >= x)
                array[j+1] = array[j];
            else
                break;
            j--;
        }
        array[j+1] = x;
        i++;
    }
    String result = String.valueOf(array);
    return result;
  }
  
}
