/* MULTI THREADDING PROBLEM
 * Write a java Thread program using Thread Priority for 5 processes and execute the priority order
among the process.
 */
class MyThread extends Thread {
    public MyThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        System.out.println("Thread " + getName() + " is running with priority " + getPriority());
    }
}

public class problem10 {
    public static void main(String[] args) {
        MyThread thread1 = new MyThread("Thread 1");
        MyThread thread2 = new MyThread("Thread 2");
        MyThread thread3 = new MyThread("Thread 3");
        MyThread thread4 = new MyThread("Thread 4");
        MyThread thread5 = new MyThread("Thread 5");
        thread1.setPriority(1);
        thread2.setPriority(3);
        thread3.setPriority(5);
        thread4.setPriority(7);
        thread5.setPriority(9);
        thread1.start();
        thread2.start();
        thread3.start();
        thread4.start();
        thread5.start();
    }
}
