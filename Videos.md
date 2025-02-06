# Videos
In this document, you will find brief descriptions for each video.  
These summaries provide an overview of the topics covered in each video, allowing you to quickly and easily understand the content presented.  
The purpose of these short descriptions is to give a clear and concise understanding of each video's subject matter.

> [!IMPORTANT]
> In this section, only **common microcontroller** concept videos are available. These videos are generally divided into two main categories:
> 
> 1. **General Concepts and Basics:**  
>    This part includes videos that provide foundational knowledge and general principles applicable to **all microcontrollers**. Videos in this category typically begin with the keyword *`Microcontroller`*.  
>    - **Example:** In the video "*aKaReZa 45 - Microcontroller, Interrupts*", the overall functionality and applications of interrupts across various microcontrollers are explained. This builds a solid theoretical foundation before exploring device-specific details.
> 
> 2. **Microcontroller-Specific Implementations:**  
>    This part focuses on detailed setups, configurations, and practical demonstrations tailored to a specific microcontroller family.  
>    Videos in this category are identified by keywords related to particular microcontroller families such as *`AVR`*, *`STM32`*, *`STM8`*, *`ESP8266`*, *`ESP32`*, and *`PIC`*.  
>    - **Example for AVR:** For AVR-specific details, refer to the video "*aKaReZa 55 - AVR, External Interrupts*", where the setup and practical aspects of external interrupts in AVR microcontrollers are explained in detail.


```plaintext
📁 Microcontrollers
│
├── Fundamental
│   ├── [aKaReZa 1 - Microcontroller, Introduction]
│   ├── [aKaReZa 3 - Microcontroller, Architecture]
│   ├── [aKaReZa 5 - Microcontroller, Requirement]
│   ├── [aKaReZa 7 - Microcontroller, Basics]
│   ├── [aKaReZa 9 - Microcontroller, Oscillators]
│   ├── [aKaReZa 18 - Microcontroller, Assigning value to a register]
│   ├── [aKaReZa 25 - Microcontroller, Practical]
│   └── [aKaReZa 30 - Microcontroller, Arduino BootLoader]
│
├── GPIO (General Purpose Input Output)
│   ├── [aKaReZa 11 - Microcontroller, GPIO - Part A]
│   └── [aKaReZa 16 - Microcontroller, GPIO - Part B]
│
├── Interrupts
│   └── [aKaReZa 45 - Microcontroller, Interrupts]
|
├── Display Interfaces
│   ├── [aKaReZa 28 - Microcontroller, Display]
│   └── [aKaReZa 41 - Microcontroller, Alphanumeric LCD]
|
├── Timers and Counters
│   └── [aKaReZa 54 - Microcontroller, Timer]
│
├── Analog Peripherals
│   ├── [aKaReZa 68 - Microcontroller, Analog Peripherals - Part A]
│   └── [aKaReZa 69 - Microcontroller, Analog Peripherals - Part B]
│
├── Communication Protocols
│   ├── [aKaReZa 63 - Microcontroller, Communication Protocols - Part A]
│   └── [aKaReZa 64 - Microcontroller, Communication Protocols - Part B]
└──  Motors
     ├── [aKaReZa 89 - Microcontroller, PMDC Motor - PART A]
     ├── [aKaReZa 90 - Microcontroller, PMDC Motor - PART B]
     ├── [aKaReZa 91 - Microcontroller, Stepper Motor]
     └── [aKaReZa 92 - Microcontroller, Servo Motor]
```

- [aKaReZa 1 - Microcontroller, Introduction](https://youtu.be/Clsv0KyD4RM)  
  ---  
  In this video, learn about what a microcontroller is, the differences between microcontrollers, microprocessors, and microcomputers, the history of ICs (Integrated Circuits), what embedded systems are, applications of microcontrollers, and where and in what applications to use microcontrollers.

- [aKaReZa 3 - Microcontroller, Architecture](https://youtu.be/vrKq5oZxuT0)  
  ---  
  In this video, learn about analog vs. digital, Morris Mano architecture, 8086 processor architecture, AVR architecture, programming languages (high-level, assembly, machine), code execution by processors, and types of microcontroller memory.

- [aKaReZa 5 - Microcontroller, Requirement](https://youtu.be/GfvmpeDFT_o)  
  ---  
  In this video, learn about editor, compiler, assembler, interpreter, debugger, IDE, and programmer.

- [aKaReZa 7 - Microcontroller, Basics](https://youtu.be/XhBq_QvCxYE)  
  ---  
  In this video, learn about Bootloader Simulator, Emulator, RISC-CISC SOC, Platform, Datasheet, Usermanual, Referencemanual, Application note, Fusebit, and Register.

- [aKaReZa 9 - Microcontroller, Oscillators](https://youtu.be/WPOZ_3E0mC8)  
  ---  
  In this video, learn about internal vs. external clock sources, natural and resonance frequency, equivalent oscillator circuits, the benefits of using an external oscillator, understanding PPM and PPB units, calculating oscillator errors and accuracy, and the impact of temperature on oscillator accuracy.

- [aKaReZa 11 - Microcontroller, GPIO - Part A](https://youtu.be/_i_MXrbRf7o)  
  ---  
  In this video, learn about the definition and application of GPIO, various input/output examples, driving LEDs with GPIO, and microcontroller output configurations.

- [aKaReZa 16 - Microcontroller, GPIO - Part B](https://youtu.be/QGhRRsIICUU)  
  ---  
  In this video, learn about various input types for microcontrollers, mechanical switches, push buttons, Normally Open vs. Normally Close, connecting push buttons to microcontrollers, pull-up and pull-down resistors, Active Low vs. Active High, and debouncing switches.

- [aKaReZa 18 - Microcontroller, Assigning value to a register](https://youtu.be/kBbZi6WWGiM)  
  ---  
  In this video, learn various methods for assigning values to microcontroller registers and the approach used in all tutorials on this channel.
  
- [aKaReZa 25 - Microcontroller, Practical](https://youtu.be/5B_eDfAgxZU)  
  ---  
  In this video, learn the best method (from my experience) for testing and practically implementing all microcontroller courses on the channel. I explain the topic in detail with a practical example, and future microcontroller tutorials will follow the content of this video.
  
- [aKaReZa 28 - Microcontroller, Display](https://youtu.be/C2yjVLjOY4c)  
  ---  
  In this video, learn about various output devices through which a microcontroller visually communicates with the external world, including LED, 7 Segment, 14 Segment, Dot Matrix, Alphanumeric, Graphical, OLED, and other displays. The video also compares these devices and mentions that tutorials for setting up and using all these devices will be provided on the channel over time.
  
- [aKaReZa 30 - Microcontroller, Arduino BootLoader](https://youtu.be/zN1l83ps8rc)  
  ---  
  In this video, learn how to program custom boards using the Arduino compiler without a separate programmer, and how to upload code from other compilers to microcontrollers.
  
- [aKaReZa 35 - Microcontroller, 7Segments](https://youtu.be/ZmDLpSMhs-I)  
  ---  
  In this video, learn how to control common cathode and common anode 7-segment displays with a microcontroller, and the multiplexing technique to drive multiple 7-segment displays with fewer pins.

- [aKaReZa 41 - Microcontroller, Alphanumeric LCD](https://youtu.be/wq8CSptCZ9o)  
  ---  
  In this video, learn about 16x2 character LCDs, how to connect them to a microcontroller, and how to display custom text on the screen.
  
- [aKaReZa 45 - Microcontroller, Interrupts](https://youtu.be/Zr2dET7aFKM)  
  ---  
  In this video, learn about the concept and application of interrupts, comparing polling and interrupts methods, interrupt routines, interrupt vector tables, understanding heap and stack, FIFO and LIFO, the process of an interrupt occurring, interrupt priorities, nested interrupts, and external interrupts.

- [aKaReZa 54 - Microcontroller, Timer](https://youtu.be/R8XcFXiZaRU)  
  ---  
  In this video, learn about the concept and function of timer-counter units in microcontrollers, the application of each part of these units, the operation of their seven different modes, and practical examples to understand these modes in specific microcontrollers.

- [aKaReZa 63 - Microcontroller, Communication Protocols - Part A](https://youtu.be/CzTxCzfNQtw)  
  ---  
  In this video, learn about data transmission and messaging by microcontrollers using parallel and serial protocols, comparing their advantages and disadvantages, USART and UART protocols, data formats, Baud Rate vs. Bit Rate, and calculating and eliminating Baud Rate errors.  
  
- [aKaReZa 64 - Microcontroller, Communication Protocols - Part B](https://youtu.be/jNMS3Ukl_1E)  
  ---  
  In this video, learn about SPI, I2C, 1Wire protocols and their key points.

- [aKaReZa 68 - Microcontroller, Analog Peripherals - Part A](https://youtu.be/PrTcroT5kgM)  
  ---  
  In this video, learn about analog signals, various sensors with analog outputs, different types of analog sensor outputs, analog-to-digital conversion units, the process of converting analog values to digital, the stages of analog-to-digital conversion, and the importance and impact of sampling frequency.

- [aKaReZa 69 - Microcontroller, Analog Peripherals - Part B](https://youtu.be/F_oOUHInUFk)  
  ---  
  In this video, learn about ADC errors, ADC channels and pins, ADC power, ground, and reference, Single Ended and Differential measurement, SAR and Delta-Sigma ADCs, comparing SAR, Delta-Sigma, and Flash ADCs, external ADC ADS1115, DAC, using PWM as DAC, external DACs DAC0808 and MCP4725, and internal microcontroller analog comparator unit.
  
- [aKaReZa 89 - Microcontroller, PMDC Motor - PART A](https://youtu.be/baebjz0w9KQ)  
  ---  
  In this video, learn about the basics and applications of PMDC (Permanent Magnet DC) motors, including types of electric machines, differences and uses of various electric motors, PMDC motor structure and applications, speed control methods, direction change techniques, H-bridge structure and control, rapid braking, motor driver ICs, dead band concept, types of encoders, and an introduction to the JGA25-13 motor.

- [aKaReZa 90 - Microcontroller, PMDC Motor - PART B](https://youtu.be/Kle814RO_og)  
  ---  
  In this video, learn about the dead band concept and its impact on motor control, speed, direction, and braking methods for PMDC motors, speed measurement with encoders, direction detection with encoders, tachometer structure and application for speed measurement, the impact of PWM frequency on motor performance and efficiency, and selecting the appropriate PWM frequency for motors.  
  
- [aKaReZa 91 - Microcontroller, Stepper Motor](https://youtu.be/ws5ms61Bx-o)  
  ---  
  In this video, learn about stepper motors, their types (Permanent Magnet, Variable Reluctance, Hybrid), the NEMA 17 motor, wiring configurations (4, 5, 6, 8 wires), driving methods (Unipolar, Bipolar, Micro Step, Half Step, Full Step), microstepping for precision, stepper motor drivers, homing technique, braking methods, and maximum speed.

- [aKaReZa 92 - Microcontroller, Servo Motor](https://youtu.be/7y1G4hoaXaM)  
  ---  
  In this video, learn about servo motors, their structure and applications, control signal principles, types of servos, Positional Servo control, servo motor drivers, continuous servo applications, four-wire servo motors, Dyanmixel professional servos, AC servos, MG995 servo specifications, and practical tests.  

# 🌟 Support Me
If you found this repository useful:
- Subscribe to my [YouTube Channel](https://www.youtube.com/@aKaReZa75).
- Share this repository with others.
- Give this repository and my other repositories a star.
- Follow my [GitHub account](https://github.com/aKaReZa75).

# ✉️ Contact Me
Feel free to reach out to me through any of the following platforms:
- 📧 [Email: aKaReZa75@gmail.com](mailto:aKaReZa75@gmail.com)
- 🎥 [YouTube: @aKaReZa75](https://www.youtube.com/@aKaReZa75)
- 💼 [LinkedIn: @akareza75](https://www.linkedin.com/in/akareza75)