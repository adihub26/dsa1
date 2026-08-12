sliding window:
Goal:
Find the longest substring containing exactly k distinct characters.

Variables:
freq    → stores frequency of each character
low     → left boundary of the window
high    → right boundary of the window
d       → number of distinct characters
maxlen  → longest valid substring length

Logic:

1. Start:
   low = 0
   maxlen = -1
   d = 0

2. Create:
   freq[256] = 0

3. Move high from left to right.

4. Check:
   if freq[s[high]] == 0
       d++

   This means a NEW character entered the window.

5. Increase its frequency:
   freq[s[high]]++

6. If:
   d > k

   The window has too many distinct characters,
   so shrink it from the left.

7. While shrinking:
   freq[s[low]]--

   If:
   freq[s[low]] == 0

   that character completely disappeared,
   so:
   d--

   Then:
   low++

8. After shrinking, if:
   d == k

   the window has EXACTLY k distinct characters.

   Calculate:
   high - low + 1

   and update:
   maxlen = max(maxlen, high - low + 1)

9. Finally:
   return maxlen

Why maxlen = -1?

If no substring has exactly k distinct characters,
the answer should be -1.

Important:

k = number of DISTINCT characters,
NOT window size.

Example:
s = "aabacbebebe"
k = 3

"cbebebe" → c, b, e → exactly 3 distinct
length = 7

Answer = 7.

Goal:
Find the longest substring that can be converted into the same
character using at most k replacements.

freq → frequency of each character
low → left pointer
high → right pointer
maxfreq → highest frequency of any character in current window
maxlen → longest valid window

Start:
low = 0
maxfreq = 0
maxlen = 0

For every high:
    Add s[high] to freq

    Update maxfreq

    Calculate:
        window size - maxfreq

    This tells us how many characters need to be replaced.

    If replacements needed > k:
        Remove s[low]
        Move low++

    Update maxlen