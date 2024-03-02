//Video -30

public class String {
    public String(java.lang.String string) {
    }

    //java.lang.String class is final which implies no class can extend it
    //Java String class is immutable i.e. Strings in java once created and initialized, cannot be changed on the same refernce.
    public static void main(String[] args) {
        String str1=new String("My Name is Bond"); 
        System.out.println(str1);
        //str1 is a reference variable.
        // str1 refers to the object of class String containing the above string 
    }
}
   
