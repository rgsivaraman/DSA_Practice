class Solution {
    public int myAtoi(String s) {
        int n = s.length();
        char[] a = s.toCharArray();
        int result = 0;
        int sign = 1;
        int i = 0;

        // Ignore leading whitespaces
        while (i < n && a[i] == ' ') {
            i++;
        }

        // Check for sign
        if (i < n && (a[i] == '+' || a[i] == '-')) {
            sign = (a[i++] == '-') ? -1 : 1;
        }

        // Read in digits until a non-digit character is encountered
        while (i < n && Character.isDigit(a[i])) {
            int curr = a[i++] - '0';

            // Check for overflow
            if (result > Integer.MAX_VALUE / 10 || (result == Integer.MAX_VALUE / 10 && curr > 7)) {
                return (sign == 1) ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            // Build the result
            result = result * 10 + curr;
        }

        // Apply sign
        return result * sign;
    }
}