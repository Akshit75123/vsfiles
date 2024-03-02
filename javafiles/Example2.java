import java.lang.String;

abstract class Initial{
    String name;
    int age;
    int phone;
    String address; 

    public void setName(String n){name=n;}
    public String getName(){return name;}
}

class Faculty extends Initial{
    int fCode;
    public String department;
    public void setCode(int n){fCode=n;}
    public void getCode(int n){System.out.println(n);}
}

class Stud extends Initial{
    int sId;
    int room;
    public void setId(int n){sId=n;}
    public void getId(int n){System.out.println(n);}
}
public class Example2 {
    public static void main(String[] args) {
        Faculty parikshit=new Faculty();
        parikshit.department="ECE";
        parikshit.name="Parikshit Kishore Singh";
        parikshit.setCode(1000);
        parikshit.getCode(1000);
        parikshit.getName();
    }
}
