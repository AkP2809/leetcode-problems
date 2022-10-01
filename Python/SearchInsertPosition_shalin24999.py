class Solution(object):
    def searchInsert(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: int
        """
	# binary search O(log N)
        if len(nums) == 0:
            return 0
        N = len(nums)
        mid = N / 2
        if nums[mid] == target:
            return mid
        elif nums[mid] > target:
            return self.searchInsert(nums[:mid],target)
        else:
            res = self.searchInsert(nums[mid+1:],target)
            return res + mid + 1
