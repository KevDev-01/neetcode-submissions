class Solution:
    def trap(self, height: List[int]) -> int:
        if not height:
            return 0

        l = 0
        r = len(height) - 1

        maxl = height[l]
        maxr = height[r]

        cnt = 0

        while r - l > 1:
            if maxl < maxr:
                l += 1
                cnt += max(0, maxl - height[l])
                maxl = max(maxl, height[l])
            else:
                r -= 1
                cnt += max(0, maxr - height[r])
                maxr = max(maxr, height[r])
        
        return cnt