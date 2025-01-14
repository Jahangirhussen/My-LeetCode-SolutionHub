class Solution:
    def finalValueAfterOperations(self, operations: list[str]) -> int:
        x = 0  # Initial value of X
        for op in operations:  # Iterate through each operation
            if op in ("++X", "X++"):
                x += 1  # Increment X by 1
            elif op in ("--X", "X--"):
                x -= 1  # Decrement X by 1
        return x  # Return the final value of X
