public  class HelloWorld{
    // public, private, protected and default are called as excess specifiers 
    // outer class can only be public or default and inner class can be any excess specifiers
    public static void main(String[] args){ //String is a class here as it is starting with upper case.
        System.out.println("Hello World"); //System is also a predefined class.
        // dot after class means we accesing some static member of that class e.g. out in system
        // out is static reference variable and it refers some object 
        //println is a function (predefined) inside out.
        int a=0b1111;
        int b=0b0101;
        int sum=a+b;
        System.out.println(sum);

        // TypeCasting Technique in JAVA
        // float y =6.7f;
        // int x=y; // worng statement -- narrowing conversion
        // int u=(int)y; // write statement -- typecasting
        // float z=3.5;  // this is double type value for float it needs 'f' suffix
    }
}