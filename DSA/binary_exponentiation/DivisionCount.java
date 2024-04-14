import java.math.BigInteger;
import java.util.Scanner;

public class DivisibleCount {
    public static BigInteger countNumbersDivisibleByNAndM(BigInteger n, BigInteger m, BigInteger l, BigInteger r) {
        // Calculate the least common multiple (LCM) of n and m
        BigInteger lcm = n.multiply(m).divide(n.gcd(m));

        // Calculate the number of multiples of lcm in the range [l, r]
        BigInteger multiples_in_r = r.divide(lcm);
        BigInteger multiples_in_l_minus_1 = l.subtract(BigInteger.ONE).divide(lcm);

        // Calculate the count of numbers divisible by both n and m
        return multiples_in_r.subtract(multiples_in_l_minus_1);
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input values as strings to create BigIntegers
        String nStr = scanner.next();
        String mStr = scanner.next();
        String lStr = scanner.next();
        String rStr = scanner.next();

        // Create BigInteger objects from the input
        BigInteger n = new BigInteger(nStr);
        BigInteger m = new BigInteger(mStr);
        BigInteger l = new BigInteger(lStr);
        BigInteger r = new BigInteger(rStr);

        // Calculate and print the result
        BigInteger result = countNumbersDivisibleByNAndM(n, m, l, r);
        System.out.println(result);
    }
}