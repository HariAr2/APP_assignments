/* MUTLI THREDDING PROBLEM 
 * Write java program using sleep() method of Thread class where the new class thread created from the
previous class is implemented by using sleep method for 10,20,50,70,100 ns
 */
class trd extends Thread{
    private long duration;
    public trd(long duration){
        this.duration=duration;
    }
    public void run(){
        try{
            System.out.println("Thread is sleeping for "+duration);
            Thread.sleep(duration);
            System.out.println("thread runs after "+duration);
        }catch(InterruptedException e){
            Thread.currentThread().interrupt();
        }
    }
}
public class problem9{
    public static void main(String [] args){
        trd thread1=new trd(10);
        trd thread2=new trd(20);
        trd thread3=new trd(50);
        trd thread4=new trd(70);
        trd thread5=new trd(100);
        thread1.start();
        thread2.start();
        thread3.start();
        thread4.start();
        thread5.start();
        
    }
}