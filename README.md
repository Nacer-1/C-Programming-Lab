# C-Programming-Lab

A collection of small command-line programs written in C while learning the language. Each project is in its own folder.

## Projects

### [Health-Insurance](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Health-Insurance)
Rates a client's health risk and calculates the insurance premium.
Concepts: `if/else`, `switch`, input validation

### [Greenhouse-Sensor](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Greenhouse-Sensor)
Manages temperature and humidity data: min/max, averages, standard deviation.
Concepts: arrays, menus, `math.h`

### [Sticks-Game](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Sticks-Game)
2-player game: take 1 to 3 sticks, whoever takes the last one loses.
Concepts: loops, game logic

### [String-Tools-Menu](https://github.com/Nacer-1/C-Programming-Lab/blob/main/String-Tools-Menu)
Splits sentences into words, counts vowels, and a word-order game.
Concepts: strings, `fgets`, menus

### [Mystery-Number-Game](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Mystery-Number-Game)
Guess a secret number (or number + letter) in limited attempts, 3 levels.
Concepts: `rand`, loops, input handling

### [store-stock-manager](https://github.com/Nacer-1/C-Programming-Lab/blob/main/store-stock-manager)
Manages store stock: quantities, prices, totals, sorting, search.
Concepts: 2D arrays, sorting, binary search

### [Bank-Account](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Bank-Account)
Console banking app with account creation and login.
Concepts: structs, menus, input validation

### [student-grades-manager](https://github.com/Nacer-1/C-Programming-Lab/blob/main/student-grades-manager)
Manages student grades.
Concepts: arrays, menus

### [Hotel-menu-c](https://github.com/Nacer-1/C-Programming-Lab/blob/main/Hotel-menu-c)
Manages hotel participants: add, calculate a bill (hotel stars + meal), display by hotel stars, delete by ID.
Concepts: `struct`, arrays of structs, string validation (`strcmp`), menus

## Build and run

Each project is a single `.c` file. Compile with `gcc`:

```
cd <project-folder>
gcc main.c -o program
./program
```

Projects using `math.h` (for example Greenhouse-Sensor) need the math library on Linux/macOS:

```
gcc main.c -o program -lm
```

Replace `main.c` with the actual file name in each folder.

## Requirements

- A C compiler (GCC or Clang)
- A terminal

## Notes

- All programs are interactive and read input from the keyboard.
- Written for learning purposes, so input validation is basic in some places.
- The store-stock-manager menu is in French; the other projects are in English.

## Author

[Nacer-1](https://github.com/Nacer-1)
