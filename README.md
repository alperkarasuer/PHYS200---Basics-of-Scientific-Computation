# PHYS200 - Basics of Scientific Computation

This repository houses a collection of C programs developed as part of the coursework for PHYS200, focusing on the basics of scientific computing.
These codes are early examples of applying computing techniques in physics and may not represent optimal coding practices. They are intended for educational purposes and a demonstration of concepts learned in PHYS200.

## Projects Overview

### 1. File Sorting (`fileSorting.c`)

- **Description:** Reads integers from a text file named `input.txt`, sorts them using bubble sort, and writes the sorted integers to a new text file called `output.txt`.
- **Usage:** Ensure `input.txt` is in the same directory, compile and run `fileSorting.c`.

### 2. Random Walk Simulator (`randomWalk.c`)

- **Description:** Simulates a random walk for a user-defined number of steps using Libsodium for random number generation. The simulator records each step's coordinates and the final distance from the origin in `output.txt`.
- **Requirements:** Libsodium library.
- **Usage:** Compile with Libsodium, run `randomWalk.c`, and follow console prompts.

### 3. Rocket Trajectory Simulation (`rocket.c`)

- **Description:** Implements the Tsiolkovsky rocket equation to simulate the trajectory of a fuel-consuming rocket. Takes Earth's gravity as variable input based on the launch location's radius from Earth's center. The simulation records the rocket's velocity until escape speed is reached, with added delays to mimic real-time progression.
- **Usage:** Compile and run `rocket.c`, input Earth's radius at the launch location as prompted.

### 4. Chronometer (`saniye.c`)

- **Description:** Retrieves the current time in seconds since the Epoch, isolates the current second within the minute, and prints it to the console. Updates every second to simulate a chronometer.
- **Usage:** Compile and run `saniye.c`.

## Getting Started

To run these projects, you will need a C compiler (e.g., GCC). For projects requiring external libraries (e.g., `randomWalk.c` needs Libsodium), ensure the library is installed and properly linked during compilation.

## Compilation and Execution

Generic compilation command for GCC:

```sh
gcc <filename.c> -o <outputname> [additional flags]
```
Example for **`fileSorting.c`**:
```sh
gcc fileSorting.c -o fileSorting
```
and then execute the compiled program:

```sh
./fileSorting
```
Repeat similar steps for other projects, adjusting for any specific library dependencies as mentioned in their descriptions.
