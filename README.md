# Arkanoid Game

A classic clone of the arcade game Arkanoid, written in C++ using the SFML 3.0 library. Control the paddle, bounce the ball, and destroy colorful blocks to complete all levels!

## Features
- Multiple levels with unique block configurations
- Score tracking and high score saving
- Different block types with distinct colors
- Smooth ball and paddle animations
- Game messages: GAME OVER, NEW LEVEL, VICTORY
- Level configuration via text file
- Sound effects for game events
- Attractive graphics and backgrounds

## Controls
- **Left**: ← (left arrow) or `A`
- **Right**: → (right arrow) or `D`
- **Start/Restart**: Space
- **Quit game**: Escape

## Project Structure
src/
├── ball.cpp # Ball logic
├── block.cpp # Block logic
├── block_intersection.cpp # Block collision handling
├── game.cpp # Main game logic
├── levels_manager.cpp # Level management
├── main.cpp # Entry point
├── message_box.cpp # Message system
├── paddle_intersection.cpp # Paddle collision handling
├── puddle.cpp # Paddle logic
├── resources_manager.cpp # Resource management
├── score_board.cpp # Score system
└── wall_intersection.cpp # Wall collision handling

include/
├── ball.h
├── block.h
├── block_intersection.h
├── game.h
├── levels_manager.h
├── message_box.h
├── paddle_intersection.h
├── puddle.h
├── resources_manager.h
├── score_board.h
└── wall_intersection.h

resources/
├── fonts/ # Fonts for text
├── sounds/ # Sound effects
│ ├── game-lost.wav # Game over sound
│ ├── game-won.wav # Win game sound
│ ├── next_level.wav # Level complete sound
│ └── victory.wav # Victory sound
├── textures/ # Graphic assets
│ ├── background.png # Background image
│ ├── karmatic_arcade.tif # Game logo
│ ├── objects.png # Game object sprites
│ └── splashscreen.png # Splash screen
└── levels.txt # Level configuration

## Level Configuration
Levels are configured via the `resources/levels.txt` file (format: 10 columns × 16 rows):

| Symbol | Color       |
|--------|------------|
| `.`    | Empty      |
| `R`    | Red        |
| `O`    | Orange     |
| `Y`    | Yellow     |
| `G`    | Green      |
| `C`    | Cyan       |
| `B`    | Blue       |
| `p`    | Purple     |

Example configuration:
```txt
# LVL 1:
..........
RRRRRRRRRR
OOOOOOOOOO
YYYYYYYYYY
GGGGGGGGGG
CCCCCCCCCC
BBBBBBBBBB
pppppppppp
..........
..........
..........
..........
..........
..........
..........
..........
```

### Building and Running

### Requirements
- C++17 compiler (GCC, Clang, or MSVC)
- SFML 3.0

### Building with CMake
1. Create a `CMakeLists.txt` file:
```cmake
cmake_minimum_required(VERSION 3.12)
project(Arkanoid)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(SFML 3.0 REQUIRED COMPONENTS graphics window system audio)

include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable(Arkanoid ${SOURCES})
target_link_libraries(Arkanoid sfml-graphics sfml-window sfml-system sfml-audio)

file(COPY resources DESTINATION ${CMAKE_CURRENT_BINARY_DIR})
```

2. Build and run the project:

```bash
mkdir build && cd build
cmake .. && make
./Arkanoid
```

### Manual Build
```bash
g++ -std=c++17 -Iinclude src/*.cpp -o Arkanoid -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio
mkdir -p build/resources && cp -r resources/* build/resources/
./Arkanoid
```

### Author
DmitriuAndreevich

### License
MIT License
