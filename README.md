# CodeForces

C++ solutions to Codeforces problems, organized by difficulty rating.

## Structure

```
rank_800/         solutions to 800-rated problems
rank_900-1000/     solutions to 900-1000-rated problems
template.cpp       starter template for new solutions
```

Each file is named `problem_<id>.cpp` after the Codeforces problem number and follows `template.cpp`'s shape: a `Solution` class with a `solve()` method, called from `main()`.

## Running a solution

```bash
g++ -std=c++17 -O2 -o sol rank_800/problem_1250.cpp
./sol < input.txt
```
