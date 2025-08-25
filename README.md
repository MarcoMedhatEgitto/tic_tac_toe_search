# Tic-Tac-Toe (C++)

A simple **Tic-Tac-Toe** game built with C++ for two players in the console.

---

## 🎮 How to Play
- The game board is represented as a grid of **1–9 slots**.
- Players take turns entering the slot number where they want to place their marker (**X** or **O**).
- The first player to align 3 of their markers (horizontally, vertically, or diagonally) wins.
- If all 9 slots are filled with no winner, the game ends in a **Draw**.

---

## 🖥️ Example Board

```
-------
|1|2|3|
-------
|4|5|6|
-------
|7|8|9|
-------
```

After some moves:

```
-------
|X|O|3|
-------
|4|X|6|
-------
|7|8|O|
-------
```

---

## 🚀 Compilation & Execution

### Compile
```bash
g++ -o tictactoe main.cpp
```

### Run
```bash
./tictactoe
```

*(On Windows, run `tictactoe.exe` instead.)*

---

## ⚡ Features
- Two-player game in the terminal.
- Input validation (prevents overwriting occupied slots).
- Detects win, draw, or ongoing play.
- Clears screen for a clean board view after each move.

---

## 📂 Project Structure
```
├── main.cpp      # Main source code
├── README.md     # Documentation
```

---

## 🏆 Game End Conditions
- **Player X wins** → X aligns 3 slots.
- **Player O wins** → O aligns 3 slots.
- **Draw** → All slots filled without a winner.

---

## 👨‍💻 Author
Developed as a simple C++ console project to practice:
- Functions
- Arrays
- Loops
- Game logic handling
