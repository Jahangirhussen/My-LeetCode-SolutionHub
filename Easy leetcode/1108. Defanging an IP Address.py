class Solution:
    def defangIPaddr(self, address: str) -> str:
        s = ""
        for char in address:
            if char == '.':
                s += "[.]"
            else:
                s += char
        return s

