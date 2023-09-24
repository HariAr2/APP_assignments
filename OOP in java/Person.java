/*
 * Object-Oriented Programming Paradigm
 * 
 * Write a Java program to create a class called "Person" with a name and age attribute. Create
 *two instances of the "Person" class, set their attributes using the constructor, and print their
 *name and age.
 * 
 */
import java.util.Scanner;

class Person {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void displayInfo() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter name: ");
        String name = scanner.nextLine();
        
        System.out.print("Enter age: ");
        int age = scanner.nextInt();
        
        Person person = new Person(name, age);
        person.displayInfo();
        
        scanner.close();
    }
}

