/* 
 * Object-Oriented Programming Paradigm
 * 
 * 
 * Write a Java program to create an interface Flyable with a method called fly_obj(). Create
three classes Spacecraft, Airplane, and Helicopter that implement the Flyable interface.
Implement the fly_obj() method for each of the three classes. Hint :- fly_obj definition –
prints the particular object is flying.
 * 
 * 
 * 
*/

interface Flyable {
    void fly_obj();
}

class Spacecraft implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Spacecraft is flying.");
    }
}

class Airplane implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Airplane is flying.");
    }
}

class Helicopter implements Flyable {
    @Override
    public void fly_obj() {
        System.out.println("Helicopter is flying.");
    }
}

public class q8 {
    public static void main(String[] args) {
        Spacecraft spacecraft = new Spacecraft();
        Airplane airplane = new Airplane();
        Helicopter helicopter = new Helicopter();

        spacecraft.fly_obj();
        airplane.fly_obj();
        helicopter.fly_obj();
    }
}
