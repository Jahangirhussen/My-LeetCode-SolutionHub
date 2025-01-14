class Solution:
    def interpret(self, command: str) -> str:
        result = ""
        i = 0
        while i < len(command):
            if command[i] == 'G':
                result += 'G'
            elif command[i] == '(' and command[i + 1] == ')':
                result += 'o'
                i += 1
            elif command[i] == '(' and command[i + 1] == 'a':
                result += "al"
                i += 3
            i += 1
        return result

