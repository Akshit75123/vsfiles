package pack2;
public class Student {
    private int rollno;
    private String name;
    public void setRollno(int r){
        rollno=r;
    }
    public void setName(String n){
        name=n;
    }
    public int getRollno(int r){
        return rollno;
    }
    public String getName(){
        return name;
    }

    public static void main(String[] args) {
        System.out.println("Refer to Example files in pack1");
    }
}
