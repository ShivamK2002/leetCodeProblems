# from math import sort
class Solution(object):
    def missingNumber(self, nums):
        i = 0
        nums.sort()
        while i<len(nums):
            if(i not in nums ): return i
            i+=1
        return nums[len(nums)-1]+1