# 100 Days of DSA Journey

Welcome to my **100 Days of DSA (Data Structures and Algorithms)** challenge! This repository will be my personal journey to master DSA and improve my problem-solving skills through daily practice.

## Table of Contents

- [Day 00 - Focus on Pattern Building](#day-00-focus-on-pattern-building)

## Day 00 - Focus on Pattern Building

On Day 00, we start by strengthening the fundamental aspect of DSA: **Pattern Building**.

### What is Pattern Building?

Pattern building is the ability to recognize common structures and patterns within problems. It's a key skill that helps you quickly devise efficient solutions and understand how algorithms work. The focus is on identifying recurring themes in problem-solving and practicing them.

### Tips for Logic Building

Here are some tips to improve your problem-solving skills and logic-building capabilities:

1. **Understand the Problem**:
   - Read the problem statement multiple times.
   - Break it down into smaller parts.
   - Visualize the problem through examples or diagrams.

2. **Identify the Pattern**:
   - Start by solving basic problems with loops, recursion, or brute force.
   - Look for repeated patterns in problems (e.g., array manipulation, matrix traversal, searching, sorting).
   - Practice recognizing common patterns, such as:
     - Sliding window
     - Backtracking
     - Divide and conquer
     - Greedy algorithms

3. **Practice with Simple Patterns**:
   - Start with basic patterns like:
     - Printing number pyramids
     - Star patterns (triangular, square, etc.)
     - Palindromes
   - Gradually move on to more complex patterns as your logic improves.

4. **Write Pseudocode**:
   - Before jumping into coding, write pseudocode for the algorithm to clarify your logic.
   - This will help in breaking the problem into smaller chunks.

5. **Practice Regularly**:
   - Consistency is key. Spend time solving problems daily and review previous solutions to spot improvements.
   - Don't be afraid to make mistakes; they are a part of learning.

6. **Debugging**:
   - Always debug and trace your code step-by-step.
   - Use print statements to check the flow of your algorithm.
   - Debugging enhances your understanding of how your solution works.

**Logic**: 
1. The number of rows determines the pattern.
2. For each row, print increasing numbers from `1` to `i`, then print decreasing numbers back to `1`.
   
**Pseudocode**:
1. Loop from 1 to `n` (rows).
2. For each row, print numbers from `1` to `i`.
3. After reaching `i`, print numbers from `i-1` back to `1`.

### Next Steps:
Start solving basic patterns today, and every day we will tackle more challenging DSA problems.

---

## Day 01 to Day 100 - Problem Solving

Every day, a new DSA problem will be posted here. Each problem will be designed to improve various aspects of DSA, from arrays to graphs, dynamic programming, and more.

Make sure to:
- Understand the problem thoroughly.
- Write pseudocode before jumping into implementation.
- Write clean and efficient code.
- Test your solution with multiple test cases.

## Resources

- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/domains/tutorials/10-days-of-dsa)
- [GeeksforGeeks](https://www.geeksforgeeks.org/data-structures/)

## Contributing

Feel free to fork this repository, create issues, and submit pull requests if you want to contribute.

---------------------------------------------------------------------------------------------------------------
## Contributing

Contributions are welcome! If you want to contribute by adding new patterns or improving existing ones, please follow the steps below.

### 1. **Fork the Repository**
   - Navigate to the **Day-00 Patterns** repository on GitHub.
   - In the top right corner of the repository page, click the **Fork** button to create a copy of the repository under your GitHub account.

### 2. **Clone Your Fork**
   - After forking, go to your GitHub profile and open your forked version of the **Day-00 Patterns** repository.
   - Click the **Code** button, then copy the repository URL (either HTTPS or SSH).
   - Open your terminal or Git Bash and clone the repository:
     ```bash
     git clone https://github.com/your-username/Day-00-Patterns.git
     ```
   - This command downloads the repository to your local machine.

### 3. **Create a New Branch**
   - Navigate to the repository folder:
     ```bash
     cd Day-00-Patterns
     ```
   - Create a new branch where you'll make your changes (e.g., adding a new pattern or improving an existing one):
     ```bash
     git checkout -b new-pattern-branch
     ```
   - This ensures that you don’t make changes directly on the `main` branch.

### 4. **Add New Patterns or Improve Existing Ones**
   - Open the repository files and add new pattern solutions, or improve existing ones.
   - After making the changes, stage the files by running:
     ```bash
     git add .
     ```
   - This adds all modified files to the staging area for commit.

### 5. **Commit Your Changes**
   - Commit the changes with a descriptive message that explains what you’ve done:
     ```bash
     git commit -m "Added new pattern for number pyramid"
     ```

### 6. **Push Your Changes to Your Fork**
   - Push the changes to the branch on your forked repository:
     ```bash
     git push origin new-pattern-branch
     ```

### 7. **Create a Pull Request (PR)**
   - After pushing your changes, go to your forked repository on GitHub.
   - You should see a prompt to create a pull request (PR) from your branch to the original **Day-00 Patterns** repository.
   - Click on **Compare & Pull Request**.
   - Provide a clear description of your changes and why they should be merged (e.g., "Added a new pattern for number pyramid").
   - Click **Create pull request** to submit it.

