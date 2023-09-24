class MyThread extends Thread {
    public MyThread(String name) {
        super(name);
    }

    @Override
    public void run() {
        try {
            System.out.println("Thread " + getName() + " is sleeping for 5 seconds.");
            Thread.sleep(5000); // Sleep for 5 seconds
            System.out.println("Thread " + getName() + " started running");
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

public class problem3 {
    public static void main(String[] args) {
        MyThread thread1 = new MyThread("1");
        MyThread thread2 = new MyThread("2");

        thread1.start();
        thread2.start();
    }
}
