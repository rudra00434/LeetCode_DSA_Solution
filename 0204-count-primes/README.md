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
<p><strong class="Simple code using Boolean Array">Code:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> <p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> n = 10
<strong>Output:</strong> 4
<strong>Explanation:</strong> import java.util.*;

public class Sieve {
    public static void main(String[] args) {
        int n = 100; // change as needed
        List<Integer> primes = sieve(n);
        System.out.println(primes);
    }

    // O(n log log n) time, O(n) space
    public static List<Integer> sieve(int n) {
        boolean[] isComposite = new boolean[n + 1]; // false = prime candidate
        List<Integer> primes = new ArrayList<>();

        if (n < 2) return primes;

        for (int p = 2; p * p <= n; p++) {
            if (!isComposite[p]) {
                // start from p*p to avoid re-marking smaller multiples
                for (int multiple = p * p; multiple <= n; multiple += p) {
                    isComposite[multiple] = true;
                }
            }
        }

        for (int i = 2; i <= n; i++) {
            if (!isComposite[i]) primes.add(i);
        }
        return primes;
    }
}

</pre>

</pre>


<img width = 500px height = 300px src="https://github.com/user-attachments/assets/adf9d8e6-fe66-4b25-a9e6-57122e4f9732" >
