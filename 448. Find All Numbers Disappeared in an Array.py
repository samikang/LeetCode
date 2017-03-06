class Solution(object):
    def findDisappearedNumbers(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        res = []
        for i in range(0,len(nums)):
            res.append(i+1)
        
        res1=list(set(res)-set(nums))
        return res1
