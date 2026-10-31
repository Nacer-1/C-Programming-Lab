# C Mini Projects

A collection of small command-line programs written in C while learning the language. Each project is in its own folder.

## Projects

### [Health-Insurance](./Health-Insurance)
Rates a client's health risk and calculates the insurance premium.
**Concepts:** `if/else`, `switch`, input validation

### [Greenhouse-Sensor](./Greenhouse-Sensor)
Manages temperature and humidity data: min/max, averages, standard deviation.
**Concepts:** arrays, menus, `math.h`

### [Sticks-Game](./Sticks-Game)
2-player game: take 1 to 3 sticks, whoever takes the last one loses.
**Concepts:** loops, game logic

### [String-Tools-Menu](./String-Tools-Menu)
Splits sentences into words, counts vowels, and a word-order game.
**Concepts:** strings, `fgets`, menus

### [Mystery-Number-Game](./Mystery-Number-Game)
Guess a secret number (or number + letter) in limited attempts, 3 levels.
**Concepts:** `rand`, loops, input handling

### [store-stock-manager](./store-stock-manager)
Manages store stock: quantities, prices, totals, sorting, search.
**Concepts:** 2D arrays, sorting, binary search

## Build and run

Each project is a single `.c` file. Compile with `gcc`:

```bash
cd <project-folder>
gcc main.c -o program
./program
```

Projects using `math.h` (for example Greenhouse-Sensor) need the math library on Linux/macOS:

```bash
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
