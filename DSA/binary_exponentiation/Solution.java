import java.math.BigInteger;
import java.util.Scanner;
public class Solution {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String N = scanner.next();
        String M = scanner.next();
        String L = scanner.next();
        String R = scanner.next();
        BigInteger n = new BigInteger(N);
        BigInteger m = new BigInteger(M);
        BigInteger l = new BigInteger(L);
        BigInteger r = new BigInteger(R);

        BigInteger lcm=n.multiply(m).divide(n.gcd(m));
        BigInteger a= r.divide(lcm);
        BigInteger b=l.subtract(BigInteger.ONE).divide(lcm);
        System.out.println(a.subtract(b));
    }
}