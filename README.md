# ATmega2560 Microcontroller – Bare Metal Programming

This repository contains my learning journey and custom implementations for the **ATmega2560 microcontroller** using **register-level bare metal programming in C**.  
The focus of this project is to understand the internal architecture of AVR controllers without using Arduino libraries or high-level frameworks.

---

## What is in this Repository

- ✔ Custom **register-level bare metal headers** for:
  - GPIO control  
  - Basic middleware abstraction  
- ✔ Embedded programs written purely in **C language**
- ✔ My **handwritten learning notes** and explanations  
- ✔ Official **ATmega2560 datasheet** for reference  
- ✔ `.gitignore` file – excludes build outputs such as `.exe`, `.o`, `.hex`
- ✔ `.gitattributes` – maintains proper line endings and Git behavior

---

## Objective

- To learn how microcontrollers work at the **hardware register level**
- To avoid Arduino abstraction and understand:
  - Port manipulation  
  - Bitwise operations  
  - Memory-mapped registers  
  - Low-level peripheral control
- To build reusable headers for future AVR projects

---

## Tools Used

- **Microchip Studio (Atmel Studio 7)**
- Arduino mega Board
- **Proteus** for simulation