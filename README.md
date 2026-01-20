# PIC Microwave Oven Simulator

A comprehensive microwave oven simulator built using PIC microcontroller, designed for educational purposes and embedded systems learning.

## 🚀 Features

- **Multiple Cooking Modes:**
  - Microwave Mode (90W default power)
  - Grill Mode
  - Convection Mode
  - Auto-cook presets

- **User Interface:**
  - 16x2 Character LCD Display
  - 4x4 Matrix Keypad for input
  - Real-time timer display
  - Power level indicators

- **Control Functions:**
  - Timer setting and countdown
  - Start/Pause/Stop operations
  - Temperature control for convection mode
  - 30-second quick add functionality

- **Hardware Simulation:**
  - Fan control simulation
  - Buzzer notifications
  - LED indicators

## 🛠️ Hardware Requirements

- **Microcontroller:** PIC16F877A/PIC18F4550 (or compatible)
- **Display:** 16x2 Character LCD
- **Input:** 4x4 Matrix Keypad
- **Simulation:** PICSimLab
- **IDE:** MPLAB X IDE with XC8 Compiler

## 📁 Project Structure
pic-microwave-simulator-picsimlab/
│
├── src/
│ ├── main.c # Main application logic
│ ├── clcd.c # LCD display functions
│ ├── clcd.h # LCD header file
│ ├── matrix_keypad.c # Keypad interface functions
│ ├── matrix_keypad.h # Keypad header file
│ ├── microoven.c # Microwave-specific functions
│ ├── microoven.h # Microwave header definitions
│ ├── timers.c # Timer configuration and ISR
│ └── timers.h # Timer header file
│
├── simulation/
│ ├── microwave_sim.picsimlab # PICSimLab simulation file
│ └── circuit_diagram.png # Hardware connection diagram
│
├── mplab_project/
│ ├── microwave_simulator.X/ # MPLAB X IDE project folder
│ └── Makefile # Build configuration
│
├── docs/
│ ├── user_manual.md # User operation guide
│ ├── hardware_setup.md # Hardware connection guide
│ └── programming_guide.md # Code explanation and modification guide
│
├── README.md
├── LICENSE
└── .gitignore

## 🚀 Quick Start ### 1. Clone the Repository ```bash git clone https://github.com/yourusername/pic-microwave-simulator-picsimlab.git cd pic-microwave-simulator-picsimlab
2. Open in MPLAB X IDE
Launch MPLAB X IDE
Open Project → Navigate to mplab_project/microwave_simulator.X
Build the project (Clean and Build)
3. Simulation in PICSimLab
Open PICSimLab
Load the simulation file: simulation/microwave_sim.picsimlab
Load the compiled hex file from MPLAB X
Start simulation
4. Hardware Setup (Optional)
Refer to docs/hardware_setup.md for physical implementation details.

🎮 How to Use
Power On
The device starts with a welcome screen
Automatically transitions to the main menu
Main Menu Options
Key 1: Microwave Mode (90W)
Key 2: Microwave Mode (Custom Power)
Key 3: Convection Mode
Key 4: Start/Quick Cook
During Operation
Key 4: Add 30 seconds
Key 5: Pause/Resume
Key 6: Stop and return to menu
Setting Time
Use numeric keys (0-9) to input minutes and seconds
Format: MM:SS
Key #: Confirm time setting
*Key : Clear/Reset
🔧 Configuration
Microcontroller Settings
c

#pragma config WDTE = OFF    // Watchdog Timer disabled
// Add other configuration bits as needed
Pin Configuration
LCD Data: PORTD (RD0-RD7)
LCD Control: PORTC (RC0-RC2)
Keypad: PORTB (RB0-RB7)
Fan Control: RE0
Buzzer: RE1
📚 Code Structure
Main Functions
init_config(): Initialize all peripherals
main(): Main application loop and state machine
State management for different operating modes
Key Files
main.c: Core application logic and state machine
clcd.c/h: LCD display interface
matrix_keypad.c/h: Keypad scanning and input handling
microoven.c/h: Appliance-specific functions
timers.c/h: Timer configuration and interrupt handling
🐛 Troubleshooting
Common Issues
LCD not displaying: Check wiring connections and contrast adjustment
Keypad not responsive: Verify pull-up resistors and debouncing
Timer not counting: Check Timer2 configuration and interrupt settings
Debug Tips
Use MPLAB X debugger for step-by-step execution
Monitor variables in watch window
Use PICSimLab's oscilloscope feature for signal analysis
🤝 Contributing
Fork the repository
Create a feature branch (git checkout -b feature/new-feature)
Commit your changes (git commit -am 'Add new feature')
Push to the branch (git push origin feature/new-feature)
Create a Pull Request

👨‍💻 Author
SanthoshKumar

GitHub: SanthoshKumar-BE
Email: santhosh29ssk@gmail.com
🙏 Acknowledgments
PICSimLab development team for the excellent simulation environment
Microchip Technology for MPLAB X IDE and XC8 compiler
Embedded systems community for inspiration and support
🔗 References
MPLAB X IDE Documentation
PICSimLab Official Website
PIC16F877A Datasheet
Note: This is an educational project designed for learning embedded systems programming and simulation.

## File Structure Map
📦 pic-microwave-simulator-picsimlab/
├── 📂 src/
│ ├── 📄 main.c # Your provided main application file
│ ├── 📄 clcd.c # LCD control functions
│ ├── 📄 clcd.h # LCD header
│ ├── 📄 matrix_keypad.c # Keypad functions

│ ├── 📄 matrix_keypad.h # Keypad header
│ ├── 📄 microoven.c # Microwave operations
│ ├── 📄 microoven.h # Microwave definitions
│ ├── 📄 timers.c # Timer functions
│ ├── 📄 timers.h # Timer header
│ └── 📄 main.h # Main definitions
├── 📂 mplab_project/
│ └── 📂 microwave_simulator.X/ # MPLAB X project files
├── 📂 simulation/
│ ├── 📄 microwave_sim.picsimlab # PICSimLab simulation file
│ └── 🖼️ circuit_diagram.png # Hardware diagram
├── 📂 docs/
│ ├── 📄 user_manual.md # Operation guide
│ ├── 📄 hardware_setup.md # Wiring guide
│ └── 📄 programming_guide.md # Code documentation
├── 📄 README.md # Main documentation
├── 📄 LICENSE # MIT License
├── 📄 .gitignore # Git ignore rules
└── 📄 CHANGELOG.md # Version history
