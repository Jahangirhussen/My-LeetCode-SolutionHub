class Solution:
    def numberOfEmployeesWhoMetTarget(self, hours, target):
        count = 0
        for x in hours:
            if x >= target:
                count += 1
        return count

