class Solution:
    def distMoney(self, money: int, children: int) -> int:
        if money < children:
            return -1
        if money == children * 8:
            return children
        if money > children * 8:
            return children - 1

        money -= children
        ans = money // 7
        rem = money % 7
        children -= ans

        if rem == 3 and children == 1:
            ans -= 1
        return ans

