class Solution:
    def minAnd2ndMin(self, arr):
        if len(arr) < 2:
            return [-1]
        
        smallest = float('inf')
        second = float('inf')
        
        for num in arr:
            if num < smallest:
                second = smallest
                smallest = num
            elif num < second and num != smallest:   # important: != to skip duplicates
                second = num
        
        if second == float('inf'):
            return [-1]
        
        return [smallest, second]