/* Multi threading Problem
 * Write a java program for multithread in which user thread and thread started from main method
invoked at a time each thread sleep for 1 sec.
  */
class UserThread extends Thread{
    public void run(){
        try{
            System.out.println("User thread is running");
            Thread.sleep(1000);
            System.out.println("User thread stopped");
        }catch(InterruptedException e){
            Thread.currentThread().interrupt();
        }
    }

}
public class problem5{
    public static void main(String [] args){
        UserThread uThread = new UserThread();
        uThread.start();
        Thread mainThread = Thread.currentThread();
        System.out.println("Main thread is running");
        try{
            mainThread.sleep(1000);
        }catch(InterruptedException e){
            Thread.currentThread().interrupt();
        }
        System.out.println("main thread stopped");
    }
}