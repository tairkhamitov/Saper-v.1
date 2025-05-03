# **Minesweeper in C V1.0**

[![C Language](https://img.shields.io/badge/C-17A2B8?style=flat&logo=c)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)

### Key Features
**Core Gameplay**:
  - Minefield generation (5x5 grid)
  - Cell revelation with adjacent mine count
  - Win/lose condition detection
  - Pure C (C11 standard)
  - Make build system
  - Cross-platform (macOS/Linux/Windows WSL)

### Technical Details
- **`main.c`**: Game loop and input handling
- **`game.c`**: Game logic implementation
  - `init_pole()` - Initializes minefield
  - `open_cell()` - Handles cell opening logic
  - `check_win()` - Victory condition check
- **`game.h`**: Constants and function declarations


### How to run?
```c
git clone https://github.com/tairkhamitov/Saper-v.1.git
cd Saper-v.1
make
./build/minesweeper
```


### Key Algorithms
1. Minefield generation (currently hardcoded)
2. Flood fill for empty areas
3. Adjacent mine counting:
   
```c
for (int dx = -1; dx <= 1; dx++) {
    for (int dy = -1; dy <= 1; dy++) {
        // Checks all 8 surrounding cells
    }
}
```
