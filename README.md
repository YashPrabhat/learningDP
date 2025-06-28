
Each `.cpp` file typically contains:

*   The function implementing the specific technique.
*   Example usage in a `main` function.
*   Comments explaining the logic, time complexity, and space complexity.

## 🤔 The Three Techniques

This repository highlights the transition through these methods:

1.  **Plain Recursion (Brute Force):**
    *   Directly translates the problem's recurrence relation into code.
    *   Often simple to write but suffers from solving the same subproblems repeatedly (overlapping subproblems).
    *   Usually has exponential time complexity.

2.  **Memoization (Top-Down DP):**
    *   An optimization of plain recursion.
    *   Stores the results of expensive function calls in a cache (like `std::unordered_map` or an array) and returns the cached result when the same inputs occur again.
    *   Starts from the original problem and breaks it down (top-down).
    *   Reduces time complexity significantly (often polynomial). Uses extra space for the cache.

3.  **Tabulation (Bottom-Up DP):**
    *   An iterative approach.
    *   Builds up the solution from the base cases to the desired solution by filling a table (like an array or `std::vector`).
    *   Avoids recursion overhead.
    *   Can sometimes achieve better space complexity than memoization by optimizing table storage.

## ✨ How to Use and Explore

1.  **Clone the Repository:**
    ```bash
    git clone https://github.com/yash-prabhat/dynamic-programming-practice.git
    cd dynamic-programming-practice
    ```

2.  **Browse Problems:** Navigate into the `problems/` directory and choose a problem you want to study (e.g., `cd problems/fibonacci`).

3.  **Examine Implementations:** Look at the `.cpp` files (`plain_recursion.cpp`, `memoization.cpp`, `tabulation.cpp`) to understand the different approaches for that problem.

4.  **Compile and Run (Using VS Code Terminal Example):**
    *   Open VS Code in the repository's root directory.
    *   Open the Integrated Terminal (`Ctrl + `` or `View > Terminal`).
    *   Navigate to the specific problem folder (e.g., `cd problems/fibonacci`).
    *   Compile a specific implementation (e.g., `memoization.cpp`):
        ```bash
        g++ memoization.cpp -o memo_fib
        ```
        *(Replace `g++` with your compiler command if needed, like `clang++` or `cl`)*
    *   Run the compiled executable:
        ```bash
        ./memo_fib  # On macOS/Linux
        memo_fib    # On Windows
        ```
    *   Repeat for `plain_recursion.cpp` and `tabulation.cpp` to compare their output and potentially performance on larger inputs.

## ✅ Prerequisites

*   A C++ compiler (like g++, clang++, or MSVC) installed and accessible from your terminal.
*   Basic knowledge of C++ syntax.
*   (Optional but Recommended) VS Code or another code editor/IDE.

## 🤝 Contributing

Contributions are welcome! If you have solutions to new DP problems you'd like to add, or improvements to existing ones, please:

1.  Fork the repository.
2.  Create a new branch (`git checkout -b feature/new-problem`).
3.  Add your problem in a new directory within `problems/`, including implementations for all three techniques (if applicable).
4.  Commit your changes (`git commit -m 'Add solution for [Problem Name]'`).
5.  Push to the branch (`git push origin feature/new-problem`).
6.  Create a Pull Request describing your contribution.

Please ensure your code is well-commented and follows a consistent style.

---

Happy coding and happy learning!
