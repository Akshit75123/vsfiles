package bank;

class Accounts{
    public String name;
    // four types of access modifiers:- public, default, protected, and private.

    // we do not need to write default 
    protected String email;
    private String password;

    // we use getters and setters for private 

    public String getPassword(){
        return password;
    }

    public void setPassword(String pass){
        this.password=pass;
    }

}
public class Bank {
    public static void main(String[] args) {
        bank.Accounts account1 = new bank.Accounts();
        account1.name="customer1";
        account1.email="vscode381@gmail.com";
        // account1.password="abcd" cannot accessed beacuse private access modifiers can only be accessed in the given class.

        account1.setPassword(
            "abcd"
        );

        System.out.println(account1.getPassword());



    }
}
