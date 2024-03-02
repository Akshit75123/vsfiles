import java.util.*;
public class strings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = sc.nextLine();

        // System.out.print(name);

        // stringname.length -- gives length of a string
        // charAt

        for (int i =0; i<name.length(); i++){
            System.out.println(name.charAt(i));
        }
        
        
        String name1 = "Akshit";
        String name2 = "Panwar";

        //string1.compareTo(string2)
        // s1>s2 --> +ve value
        // s2==s2 --> 0
        // s1<s2 --> -ve value
        if (name1.compareTo(name2)==0)
            System.out.println("Strings are equal");
        else 
            System.out.println("Strings are not equal");

        // substring function -- substring(beg index, end index)
        String name3 = name1.substring(1,4);
        System.out.println(name3);
        sc.close();
    }

}
