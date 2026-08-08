1. What is a "Simple Operation"?
Think of a simple operation as a single instant task—like assigning a variable (a = 10), printing something, or adding two numbers together.

It runs in O(1) constant time, which basically means it takes a tiny fraction of a second, no matter how big your input data gets.

2. The Golden Rule of LeetCode: 10^8 Operations
LeetCode (and most coding platforms) gives your code roughly 1 second to run.

1 second ≈ 10^8 operations (100 million steps).

If your code runs more than 10^8 steps for a test case, you get the dreaded Time Limit Exceeded (TLE) error.

3. Cheat Sheet: What algorithm can you use based on N?
Look at the value of N in the problem description to figure out what code will actually pass:

N <= 10: Go crazy. Even horrible code like O(N!) or O(2^N) will pass.

N <= 1,000: O(N^2) (nested loops) will work (1,000^2 = 10^6 ops, well under 10^8).

N <= 10^5: O(N^2) will fail! You must use O(N log N) or O(N).

N <= 10^8: Only O(N) linear code will pass.

N >= 10^9: Loop isn't even allowed. You need binary search or math—O(log N) or O(1).

4. How to Calculate Complexity in 3 Steps
Split your code into separate blocks (code that runs one after another, not inside each other).

Find the runtime of each block:

Single statement or simple assignment → O(1)

Loop running N times → O(N)

Loop inside another loop (both N times) → O(N^2)

Built-in array sort → O(N log N)

Drop the smaller stuff and keep the big boss:

If your program has O(1) + O(N) + O(N log N), ignore O(1) and O(N).

Final Answer: O(N log N) because it grows the fastest and takes the most time.