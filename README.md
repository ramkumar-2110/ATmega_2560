# ATmega2560 – Bare Metal Programming (Register Level)

This repository documents my learning and development journey with the **ATmega2560 microcontroller** using **bare-metal programming in Embedded C**.

The goal is to understand and implement microcontroller functionality at the **register level**, without relying on Arduino libraries or high-level abstractions.

---

## Project Highlights

- ✔ Fully **bare-metal development (no Arduino libraries)**
- ✔ Custom **driver development from scratch**
- ✔ Focus on **hardware-level understanding**
- ✔ Modular and reusable code structure

---

## Repository Structure
ATmega_2560/

├── Drivers/
│   ├── [gpio.c](Drivers/gpio.c)
│   ├── [gpio.h](Drivers/gpio.h)
│   ├── [delay.c](Drivers/delay.c)
│   ├── [delay.h](Drivers/delay.h)

├── Middleware/
│   ├── [lcd.c](Middleware/lcd.c)
│   ├── [lcd.h](Middleware/lcd.h)
│   ├── [keypad.c](Middleware/keypad.c)
│   ├── [keypad.h](Middleware/keypad.h)
│   ├── [seven_segment.c](Middleware/seven_segment.c)
│   ├── [seven_segment.h](Middleware/seven_segment.h)
│   ├── [dot_matrix.c](Middleware/dot_matrix.c)
│   ├── [dot_matrix.h](Middleware/dot_matrix.h)

├── Applications/
│   └── calculator/
│       └── [main.c](Applications/calculator/main.c)

├── Datasheets/
│   └── [ATmega2560 Datasheet](Datasheets/ATmega2560.pdf)

├── Notes/
│   └── [Notes](Notes/)

└── [README.md](README.md)

---

## Modules Implemented

### 🔹 GPIO Driver
- Direct register manipulation
- Pin configuration (INPUT / OUTPUT)
- Port read/write operations
- Bit-level control

---

### 🔹 Delay Driver
- Software-based delay using loops
- Timing approximation without timers

---

### 🔹 LCD Driver (Middleware)
- 16x2 LCD interface (8-bit mode)
- Commands and data handling
- Custom character support
- String display functions

---

## Objective

- Understand **microcontroller internals**
- Work with:
  - Memory-mapped registers  
  - Bitwise operations  
  - Hardware control without abstraction  
- Build **reusable embedded drivers**
- Strengthen **low-level embedded system design skills**

---

## Tools Used

- **Microchip Studio (Atmel Studio 7)**
- **Arduino Mega (ATmega2560)**
- **Proteus** (Simulation)

---

## Learning Outcomes

- Deep understanding of AVR architecture  
- Experience in writing **driver-level code**  
- Strong foundation in **embedded C programming**  
- Ability to design **modular firmware systems**

---

## Future Work

- Timer Driver  
- UART (Serial Communication)  
- Interrupt Handling  
- PWM Driver  
- RTOS-like Scheduler  

---

## Author

**Ramkumar**  
Embedded Systems Enthusiast  
Department of ECE  

---

## Note

This repository is focused on **learning and understanding**, not just implementation.  
All code is written with the intention of **clarity, modularity, and reusability**.