import java.util.Scanner;

public class ParouImpar {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int numbers[] = new int[5], quantityEven = 0, quantityOdd = 0, i;

        for (i = 0; i < 5; i++) {
            System.out.print("Digite um número: ");
            numbers[i] = sc.nextInt();
        }

        quantityEven = verificationEven(numbers);

        quantityOdd = i - quantityEven;

        showResult(quantityEven, quantityOdd);

        sc.close();
    }

    public static int verificationEven(int[] numbers) {
        int counter = 0;

        for (int i = 0; i < 5; i++) {
            if (numbers[i] % 2 == 0) {
                counter++;
            }
        }

        return counter;
    }

    public static void showResult(int quantityEven, int quantityOdd) {
        System.out.printf("\nNúmeros pares = %d\n", quantityEven);
        System.out.printf("\nNúmeros ímpares = %d\n\n", quantityOdd);
    }
}
