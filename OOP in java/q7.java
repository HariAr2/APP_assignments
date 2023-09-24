/*
 *
 * Object-Oriented Programming Paradigm 
 * 
 * Write a Java program to create an interface Resizable with methods resizeWidth(int width)
 * and resizeHeight(int height) that allow an object to be resized. Create a class Rectangle
 * that implements the Resizable interface and implements the resize methods.
 * 
 * 
 */

interface Resizable {
    void resizeWidth(int width);
    void resizeHeight(int height);
}

class Rectangle implements Resizable {
    private int width;
    private int height;

    public Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    @Override
    public void resizeWidth(int width) {
        this.width = width;
        System.out.println("Resized width to " + width);
    }

    @Override
    public void resizeHeight(int height) {
        this.height = height;
        System.out.println("Resized height to " + height);
    }

    public void displaySize() {
        System.out.println("Width: " + width);
        System.out.println("Height: " + height);
    }
}

public class q7 {
    public static void main(String[] args) {
        Rectangle rectangle = new Rectangle(10, 20);

        System.out.println("Original Size:");
        rectangle.displaySize();

        rectangle.resizeWidth(15);
        rectangle.resizeHeight(25);

        System.out.println("Resized Size:");
        rectangle.displaySize();
    }
}
