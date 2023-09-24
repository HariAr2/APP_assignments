/* MULTI THREADDING PROBLEM
 * Write a java program for to solve producer consumer problem in which a producer produce a value and
consumer consume the value before producer generate the next value.
 */

import java.util.concurrent.ArrayBlockingQueue;
import java.util.concurrent.BlockingQueue;

class Producer extends Thread {
    private BlockingQueue<Integer> buffer;

    public Producer(BlockingQueue<Integer> buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        try {
            for (int i = 1; i <= 10; i++) {
                System.out.println("Producer produced: " + i);
                buffer.put(i);
                Thread.sleep(1000); // Simulate production time
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

class Consumer extends Thread {
    private BlockingQueue<Integer> buffer;

    public Consumer(BlockingQueue<Integer> buffer) {
        this.buffer = buffer;
    }

    @Override
    public void run() {
        try {
            while (true) {
                int value = buffer.take();
                System.out.println("Consumer consumed: " + value);
                Thread.sleep(1500); // Simulate consumption time
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        }
    }
}

public class q2 {
    public static void main(String[] args) {
        BlockingQueue<Integer> buffer = new ArrayBlockingQueue<>(5); // Buffer size of 5

        Producer producer = new Producer(buffer);
        Consumer consumer = new Consumer(buffer);

        producer.start();
        consumer.start();
    }
}
