class Solution {
public int removeElement(int[] nums, int val) {
int writer = 0;
int n=nums.length;
for (int reader = 0; reader < n; reader++)
 { if (nums[reader] != val) { nums[writer++] = nums[reader];
}
}
return writer;
}
}