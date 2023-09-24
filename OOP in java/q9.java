import operators.ArithmeticOperations;
public class q9 {
    public static void main(String[] args) {
        int num1 = 10;
        int num2 = 5;

        int sum = ArithmeticOperations.add(num1, num2);
        int difference = ArithmeticOperations.subtract(num1, num2);
        int product = ArithmeticOperations.multiply(num1, num2);
        int quotient = ArithmeticOperations.divide(num1, num2);

        System.out.println("Sum: " + sum);
        System.out.println("Difference: " + difference);
        System.out.println("Product: " + product);
        System.out.println("Quotient: " + quotient);
    }
}
