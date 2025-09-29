# 🎯 Mini Project 01 — Number Guessing Game  

**Author:** Sudhan Nanasaheb Dabhade  

---

## 📌 About the Project  
This is a simple **Number Guessing Game** built using C++.  
The program randomly generates a number between 1 and 100, and the player has to guess it.  
Hints such as **Hot**, **Cold**, or **Right** guide the player closer to the answer.  

---

## 🛠️ Libraries Used  
- `<iostream>` → for input and output operations  
- `<cstdlib>` → for generating random numbers (`rand()`) and seeding (`srand()`)  
- `<ctime>` → for using the system time (`time(0)`) as a seed  

---

## 🧑‍💻 Key Learnings  
- `rand()` from `<cstdlib>` generates pseudo-random numbers.  
- `srand()` sets the **seed** (starting point) for `rand()` so results vary between runs.  
- `time(0)` from `<ctime>` provides the current epoch time (seconds since Jan 1, 1970), which is often used as the seed for randomness.  

---

## 🚀 How to Run  
1. Clone this repository or copy the source code.  
2. Compile the program:  
   ```bash
   g++ number_guess.cpp -o number_guess
