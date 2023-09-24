/* multi threading problems
 * Write a java program in which thread sleep for 6 sec in the loop in reverse order from 5 to 1 and change
the name of thread.
 */
class MyThread extends Thread {
    public MyThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        try {
            for (int i = 6; i >= 1; i--) {
                System.out.println("Thread " + getName() + " is sleeping for " + i + " seconds.");
                Thread.sleep(1000 * i); // Sleep for i seconds
                System.out.println("Thread " + getName() + " is running again.");
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

public class problem4 {
    public static void main(String[] args) {
        MyThread thread = new MyThread("1");

        thread.start();
    }
}
