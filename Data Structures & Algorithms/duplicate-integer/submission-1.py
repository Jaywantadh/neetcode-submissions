from typing import List
class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        element_count = {}

        
        for elem in nums:
            if elem in element_count:
                element_count[elem] += 1        
                return True
            else:
            
                element_count[elem] = 1

        
        return False

solution = Solution()
nums = []
print(solution.hasDuplicate(nums))





