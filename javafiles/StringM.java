//Video-31

import java.lang.String;
public class StringM {
    public static void main(String[] args) {
        //Substring Functions
        // 1. substring(int beginIndex)
        // 2. substring(int beginIndex, int endIndex)
        String s1=new String("Akshit");
        String s2=s1.substring(2);
        String s3=s1.substring(2,4); // 2 will be included and 4 will be excluded
        System.out.println(s2);
        System.out.println(s3);
        
        
        
        
        // Comparing Strings 
        // 1- equals(someString) -- returns true or false
        // 2- equalsIgnoreCase(String anotherString)
        // 3- compareTo(String s)

        // String s1=new String("Computer");
        // String s2=new String("computer");

        // // if(s1.equals(s2))
        // if (s1.equalsIgnoreCase(s2))
        //     System.out.println("Strings are same");
        // else 
        //     System.out.println("Strings are not same");
        
        // int i=s1.compareTo(s2); //= 77(M)-109(m)
        // // if the strings are not same, then it will return the difference of the ASCII code of both the unmatched characters.
        // if (i==0){
        //     System.out.println("Strings are same " + i);
        // } else if(i>0) {
        //     System.out.println("Strings are not same "+ i); //opposite to dictionary order
        // }
        // else if(i<0) {
        //     System.out.println("Strings are not same "+ i); //dictionary order
        // }

        //indexOf() -->
        // function list -:
        // 1. indexOf(int ch)
        // 2. indexOf(int ch, int fromInedx)
        // 3. indexOf(String str)
        // 4. indexOf(String str, int fromIndex)
        // 5. lastIndexOf(int ch)
        // 6. lastIndexOf(int ch, int fromIndex)
        // 7. lastIndexOf(String str)
        // 8. lastIndexOf(String str, int fromIndex)
        
        // String str1=new String("computer");
        // int i=str1.indexOf("p"); //func-1
        // int j=str1.indexOf('p',2); //func-2
        // System.out.println("index is "+i);
        // System.out.println("index is "+j);
        // int k=str1.indexOf("uter"); //func-3
        // System.out.println(k); 
        // int e=str1.lastIndexOf('m');  //2
        // //starts searching from last character 'r' but index number will remain same. i.e. c-->0, o-->1 ......
        // System.out.println(e);
        
        
        
        // String s1=new String("Computer");
        // System.out.println(s1);
        // String s2=s1.toUpperCase();
        // System.out.println(s2);
        // s2=s1.toLowerCase();
        // System.out.println(s2);


        // String s1=new String("Computer");
        // System.out.println(s1);
        // s1.toUpperCase();
        // System.out.println(s1);
        // s1.toLowerCase();
        // System.out.println(s1);
        // all these print statements will return same string 'Computer' because there will be no permanent change in the String.
        //Omitted Code 
        

    }
}
