class Solution {
    public int distMoney(int money, int children) {
        if (money < children) {
            return -1;
        }
        if (money == children * 8) {
            return children;
        }
        if (money > children * 8) {
            return children - 1;
        }

        money -= children;
        int ans = money / 7;
        int rem = money % 7;
        children -= ans;

        if (rem == 3 && children == 1) {
            ans--;
        }
        return ans;
    }
}
