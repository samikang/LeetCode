class Solution(object):
    def intersect(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: List[int]
        """
        res=[]
        for n1 in nums1:
            if n1 in nums2:
                nums2.remove(n1)
                res += [n1]
                
        return res
