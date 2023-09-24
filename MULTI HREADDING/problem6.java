/* MULTI THREADDING PROBLEM
 * Write a java program to solve printer synchronization problem in which all the jobs must be completed
in order.
 */
class Printer {
    private int currentJob = 1;

    public synchronized void printJob(int jobNumber) {
        while (jobNumber != currentJob) {
            try {
                wait(); 
            } catch (InterruptedException e) {
                Thread.currentThread().interrupt();
            }
        }

        System.out.println("Printing " + jobNumber);

        currentJob++;
        notifyAll(); 
    }
}

class PrintJob extends Thread {
    private Printer printer;
    private int jobNumber;

    public PrintJob(Printer printer, int jobNumber) {
        this.printer = printer;
        this.jobNumber = jobNumber;
    }

    @Override
    public void run() {
        printer.printJob(jobNumber);
    }
}

public class problem6 {
    public static void main(String[] args) {
        Printer printer = new Printer();
        int totalJobs = 5;

        for (int i = 1; i <= totalJobs; i++) {
            Thread thread = new PrintJob(printer, i);
            thread.start();
        }
    }
}
