/* MULTI THREADDING PROBLEM 
 * Write a java program that implements a multi-thread application that has three threads. First thread
generates random integer every 1 second and if the value is even, second thread computes the square of
the number and prints. If the value is odd, the third thread will print the value of cube of the number.
*/

import java.util.Random;

class RandomNumberGenerator extends Thread {
    private Random random = new Random();
    private long startTime;

    public RandomNumberGenerator() {
        this.startTime = System.currentTimeMillis();
    }

    @Override
    public void run() {
        try {
            while (System.currentTimeMillis() - startTime < 3000) { 
                int number = random.nextInt(100); 
                System.out.println("Generated Number: " + number);

                if (number % 2 == 0) {
                    SquareThread squareThread = new SquareThread(number);
                    squareThread.start();
                } else {
                    CubeThread cubeThread = new CubeThread(number);
                    cubeThread.start();
                }

                Thread.sleep(1000); 
            }
        } catch (InterruptedException e) {
            System.out.println("RandomNumberGenerator thread interrupted.");
        }
    }
}

class SquareThread extends Thread {
    private int number;

    public SquareThread(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        int square = number * number;
        System.out.println("Square of " + number + " is " + square);
    }
}

class CubeThread extends Thread {
    private int number;

    public CubeThread(int number) {
        this.number = number;
    }

    @Override
    public void run() {
        int cube = number * number * number;
        System.out.println("Cube of " + number + " is " + cube);
    }
}

public class q1 {
    public static void main(String[] args) {
        RandomNumberGenerator randomNumberGenerator = new RandomNumberGenerator();
        randomNumberGenerator.start();
    }
}
