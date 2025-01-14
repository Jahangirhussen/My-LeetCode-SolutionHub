class Solution {
    public int differenceOfSums(int n, int m) {
        int totalSum = n * (n + 1) / 2;
        int k = n / m;
        int sumMultiplesOfM = m * k * (k + 1) / 2;
        int sumNotMultiplesOfM = totalSum - sumMultiplesOfM;
        return sumNotMultiplesOfM - sumMultiplesOfM;
    }

    public static void main(String[] args) {
        java.util.Scanner sc = new java.util.Scanner(System.in);
        int n = sc.nextInt();
        int m = sc.nextInt();
        Solution sol = new Solution();
        System.out.println(sol.differenceOfSums(n, m));
    }
}

