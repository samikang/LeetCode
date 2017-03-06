
class Solution(object):
    def rotate(self, nums, k):

        if k==0:
            return
        if len(nums)==1:
            return
        s=len(nums)        
        sub1=nums[:s-k]

        
        sub2=nums[s-k:]
        
        nums[:]=sub2+sub1
