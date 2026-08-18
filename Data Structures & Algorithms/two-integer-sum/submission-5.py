class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        val = {}
        for i in range(len(nums)):
            val[nums[i]] = i
        for i in range(len(nums)):
            diff = target - nums[i]
            if diff in val and val[diff] != i:
                return [i, val[diff]]
        return[]