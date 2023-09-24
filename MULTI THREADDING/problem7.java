import java.util.Scanner;
class ThreadA extends Thread{
    private String k;
    private int dc;
    public ThreadA(String k){
        this.k=k;
        this.dc=dc;
    }
    public void run(){
        for(int i=0;i<k.length();i++){
            if(Character.isDigit(k.charAt(i))){
                dc++;
            }
        }
        System.out.println("ThreadA Digits: "+ dc);
    }
}
class ThreadB extends Thread{
    private String k;
    private int cc;
    public ThreadB(String k){
        this.k=k;
        this.cc=cc;
    }
    public void run(){
        for(int i=0;i<k.length();i++){
            if(Character.isLetter(k.charAt(i))){
                cc++;
            }
        }
        System.out.println("TreadB Characters: "+cc);
    }
}
public class problem7{
    public static void main(String [] args){
        Scanner s=new Scanner(System.in);
        System.out.println("String:");
        String k =s.nextLine();
        ThreadA thread1 = new ThreadA(k);
        ThreadB thread2 = new ThreadB(k);
        thread1.start();
        thread2.start();
        s.close();
    }
}