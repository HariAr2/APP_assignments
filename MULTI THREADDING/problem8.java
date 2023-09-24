/* MULTI THREADDING PROBLEMS
 * Create two objects threadobj1 and threadobj2 for the class UserThreadPriority. Set the name of
threadobj1 as “ThreadA” and threadobj2 as “ThreadB”. Get a String and a Character from the user and
assign into UserThreadPriority class variable k and c respectively. Call the start() method for the thread
objects threadobj1 and threadobj2.
 */
import java.security.PublicKey;
import java.util.Scanner;
class Utp extends Thread{
    private String k;
    private char c;
    public Utp(String name){
        super(name);
    }
    public void setvalue(String k,char c){
        this.k=k;
        this.c=c;
    }
    public void run(){
        System.out.println(getName()+" (k): "+k+" (c): "+c);
    }
}
public class problem8{
    public static void main(String [] args){
        Scanner s =new Scanner(System.in);
        System.out.println("enter a string(k): ");
        String k=s.nextLine();
        System.out.println("Enter a char(c):");
        char c= s.nextLine().charAt(0);
        Utp thread1 = new Utp("Thread A");
        Utp thread2 = new Utp("Thread B");
        thread1.setvalue(k, c);
        thread2.setvalue(k, c);
        thread1.start();
        thread2.start();
        s.close();
    }
}