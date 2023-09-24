/*
 * Object-Oriented Programming Paradigm
 * 
 * Write a Java program to create class called "TrafficLight" with attributes for color and
 * duration, and methods to change the color and check for red or green.
 * 
 * 
 */
import java.util.Scanner;

class TrafficLight {
    private String color;

    public TrafficLight(String color) {
        this.color = color;
    }

    public void changeColor(String newColor) {
        color = newColor;
    }

    public boolean isRed() {
        return color.equalsIgnoreCase("red");
    }

    public boolean isGreen() {
        return color.equalsIgnoreCase("green");
    }
    public boolean isYellow(){
        return color.equalsIgnoreCase("yellow");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the initial color: ");
        String color = scanner.nextLine();
        
        TrafficLight trafficLight = new TrafficLight(color);
        
        System.out.print("Enter new color: ");
        String newColor = scanner.next();
        trafficLight.changeColor(newColor);
        
        if (trafficLight.isRed()) {
            System.out.println("The light is red.");
        } else if (trafficLight.isGreen()) {
            System.out.println("The light is green.");
        }
        else{
            System.out.println("The light is yellowre.");
        }
        
        scanner.close();
    }
}
