import java.util.Arrays;

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
    char aArr[] = a.toCharArray();
    char bArr[] = b.toCharArray();
    Arrays.sort(aArr);
    Arrays.sort(bArr);
    return Arrays.equals(aArr, bArr);
  }
  
}
