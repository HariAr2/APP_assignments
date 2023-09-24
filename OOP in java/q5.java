/* 
 * 
 * Object-Oriented Programming Paradigm
 * 
 * Write a Java program to create a class called Shape with methods called getPerimeter() and
 * getArea(). Create a subclass called Circle that overrides the getPerimeter() and getArea()
 * methods to calculate the area and perimeter of a circle.
 * 
 */

class Shape {
    public double getPerimeter() {
        return 0.0;
    }

    public double getArea() {
        return 0.0;
    }
}

class Circle extends Shape {
    private double radius;

    public Circle(double radius) {
        this.radius = radius;
    }

    @Override
    public double getPerimeter() {
        return 2 * Math.PI * radius;
    }

    @Override
    public double getArea() {
        return Math.PI * radius * radius;
    }
}

public class q5 {
    public static void main(String[] args) {
        Circle circle = new Circle(5.0);

        double perimeter = circle.getPerimeter();
        double area = circle.getArea();

        System.out.println("Circle Perimeter: " + perimeter);
        System.out.println("Circle Area: " + area);
    }
}
