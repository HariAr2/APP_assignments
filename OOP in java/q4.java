/* 
 * Object-Oriented Programming Paradigm
 * 
 * Write a Java program to create a class called Employee with methods called work() and
 * getSalary(). Create a subclass called HRManager that overrides the work() method and
 * adds a new method called addEmployee().
 * 
 * 
 */
import java.util.Scanner;

class Employee {
    private String name;
    private double salary;

    public Employee(String name, double salary) {
        this.name = name;
        this.salary = salary;
    }

    public void work() {
        System.out.println(name + " is working.");
    }

    public double getSalary() {
        return salary;
    }

    public String getName() {
        return name;
    }
}

class HRManager extends Employee {
    public HRManager(String name, double salary) {
        super(name, salary);
    }

    @Override
    public void work() {
        System.out.println(getName() + " (HR Manager) is managing HR tasks.");
    }

    public void addEmployee(Employee employee) {
        System.out.println(getName() + " (HR Manager) is adding " + employee.getName() + " to the company.");
    }
}

public class q4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter the name of an employee: ");
        String employeeName = scanner.nextLine();
        System.out.print("Enter the salary of " + employeeName + ": ");
        double employeeSalary = scanner.nextDouble();

        Employee employee1 = new Employee(employeeName, employeeSalary);

        System.out.print("Enter the name of an HR Manager: ");
        scanner.nextLine(); // Consume the newline character
        String managerName = scanner.nextLine();
        System.out.print("Enter the salary of " + managerName + ": ");
        double managerSalary = scanner.nextDouble();

        HRManager hrManager = new HRManager(managerName, managerSalary);

        System.out.print("Enter the name of another employee: ");
        scanner.nextLine(); // Consume the newline character
        String employeeName2 = scanner.nextLine();
        System.out.print("Enter the salary of " + employeeName2 + ": ");
        double employeeSalary2 = scanner.nextDouble();

        Employee employee2 = new Employee(employeeName2, employeeSalary2);

        employee1.work();
        System.out.println("Salary of " + employee1.getName() + ": $" + employee1.getSalary());

        hrManager.work();
        System.out.println("Salary of " + hrManager.getName() + ": $" + hrManager.getSalary());
        hrManager.addEmployee(employee2);

        scanner.close();
    }
}
