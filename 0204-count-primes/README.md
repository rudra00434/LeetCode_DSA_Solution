<h2><a href="https://leetcode.com/problems/count-primes">204. Count Primes</a></h2><h3>Medium</h3><hr><p>Given an integer <code>n</code>, return <em>the number of prime numbers that are strictly less than</em> <code>n</code>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> There are 4 prime numbers less than 10, they are 2, 3, 5, 7.
</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> n = 0
<strong>Output:</strong> 0
</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> n = 1
<strong>Output:</strong> 0
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>0 &lt;= n &lt;= 5 * 10<sup>6</sup></code></li>
</ul>
<h2>APPROACH:Sieve of Eratosthenes Algorithm with 0(n*log(log(n)))</h2>
<p><strong class = "Sieve of Eratosthenes"> </p>
<p>The Sieve of Eratosthenes is a classical algorithm to find all prime numbers up to a given number n efficiently. It works by repeatedly marking the multiples of each prime starting from 2.
Algorithm Steps
Create a list (or boolean array) of size n + 1 (from 0 to n), initialized as true (assuming all numbers are prime).
Index 0 and 1 are marked as false because 0 and 1 are not prime.
Start with the first prime number p = 2.
Mark all multiples of p (starting from p * p) as false (not prime) because any number divisible by p is composite.
Find the next number greater than p that is still marked true.
This becomes the new p.
Repeat steps 3–4 until p * p > n.
The remaining numbers marked true are primes.

Example (n = 30)
Start:
2, 3, 4, 5, 6, 7, 8, ... 30 (all marked prime initially)
Start with 2 → mark 4, 6, 8, ... 30 as composite.
Next prime is 3 → mark 9, 12, 15, ... 30 as composite.
Next prime is 5 → mark 25, 30 as composite.
Next prime is 7 → 7 * 7 = 49 > 30, stop.
Remaining primes: 2, 3, 5, 7, 11, 13, 17, 19, 23, 29.
</p>
<img src="https://www.google.com/url?sa=i&url=https%3A%2F%2Fslideplayer.com%2Fslide%2F17701135%2F&psig=AOvVaw3h7WRjQbif6_8Pu2AkBspd&ust=1753566317000000&source=images&cd=vfe&opi=89978449&ved=0CBUQjRxqFwoTCIDl8N792I4DFQAAAAAdAAAAABAE" alt="sieve of Eratosthenes" >
