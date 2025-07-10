<h2><a href="https://leetcode.com/problems/minimum-size-subarray-sum">209. Minimum Size Subarray Sum</a></h2><h3>Medium</h3><hr><p>Given an array of positive integers <code>nums</code> and a positive integer <code>target</code>, return <em>the <strong>minimal length</strong> of a </em><span data-keyword="subarray-nonempty"><em>subarray</em></span><em> whose sum is greater than or equal to</em> <code>target</code>. If there is no such subarray, return <code>0</code> instead.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> target = 7, nums = [2,3,1,2,4,3]
<strong>Output:</strong> 2
<strong>Explanation:</strong> The subarray [4,3] has the minimal length under the problem constraint.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> target = 4, nums = [1,4,4]
<strong>Output:</strong> 1
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> target = 11, nums = [1,1,1,1,1,1,1,1]
<strong>Output:</strong> 0
</pre>
<p><strong class="Approach">Sliding window:</strong></p>
<pre>
<strong>this is the actual approach of this problem.Instead of using nested loops (which leads to O(n²) time complexity), 
we use two pointers to create a "window" that slides over the data to maintain a running condition (like sum, unique elements, etc.)
When to Use Sliding Window?
Use it when:
You're dealing with contiguous subarrays/substrings.
You want to optimize brute force that checks all possible subarrays.
You want to maintain some property within a window as it slides.
Types
✅ 1. Fixed-size Window
Window size is constant.
You slide the window forward one element at a time.

✅ 2. Variable-size Window
Window size grows or shrinks based on some condition.
Common in problems involving substrings with constraints (e.g., longest substring with K distinct characters).
The logic behind the Problem :
take a window = 0 ; and two loop counter variables right =0 ; left =0; and ans = INT_MAX;
<li>iterate right from 0 &lt;=nums.length</li> and count the sum window+=nums[right];
Iterate loop to check whether window >= target if true then upadate ans = minimum(ans,right-left+1) and window -= nums[left++];
then return ans;

</strong>
</pre>


<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= target &lt;= 10<sup>9</sup></code></li>
	<li><code>1 &lt;= nums.length &lt;= 10<sup>5</sup></code></li>
	<li><code>1 &lt;= nums[i] &lt;= 10<sup>4</sup></code></li>
</ul>

<p>&nbsp;</p>
<strong>Follow up:</strong> If you have figured out the <code>O(n)</code> solution, try coding another solution of which the time complexity is <code>O(n log(n))</code>.
