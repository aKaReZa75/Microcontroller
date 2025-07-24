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
│   │     ├─ Microcontrollers vs Others — Concepts and comparisons.
│   │     ├─ History — ICs and embedded systems.
│   │     └─ Selection — Choosing microcontrollers for projects.
│   │
│   ├── [aKaReZa 3 - Microcontroller, Architecture]
│   │     ├─ Digital vs Analog — Signal systems.
│   │     ├─ Processor Designs — 8086 and AVR architecture.
│   │     ├─ Code Flow — Programming and instruction execution.
│   │     └─ Memory — ROM, RAM, PROM types.
│   │
│   ├── [aKaReZa 5 - Microcontroller, Requirement]
│   │     ├─ Dev Tools — Editor, compiler, assembler, debugger, programmer.
│   │     ├─ IDEs — CodeVision AVR, MicroChip Studio, VSCode, STM32 CubeIDE.
│   │     └─ Programming Methods — Types and usage.
│   │
│   ├── [aKaReZa 7 - Microcontroller, Basics]
│   │     ├─ Bootloader — Simulators vs emulators.
│   │     ├─ Architectures — RISC, CISC, SoC overview.
│   │     ├─ Boards & Docs — Development boards, datasheets, manuals.
│   │     └─ Registers — Fuse bits and register basics.
│   │
│   ├── [aKaReZa 9 - Microcontroller, Oscillators]
│   │     ├─ Clock Sources — Internal vs external.
│   │     ├─ Frequency Concepts — Natural/resonance + oscillator circuit.
│   │     ├─ Accuracy — PPM, PPB, error calculation.
│   │     └─ Temperature Effects — Impact and optimization.
│   │
│   ├── [aKaReZa 18 - Microcontroller, Assigning value to a register]
│   │     ├─ Register Formats — Binary, hex, decimal.
│   │     ├─ Bit Operations — Shift, set, clear, toggle, change, check.
│   │     └─ Tools — Calculator for conversions.
│   │
│   ├── [aKaReZa 25 - Microcontroller, Practical]
│   │     ├─ Implementation — Testing method with examples.
│   │     └─ Methodology — Old vs new tutorial format.
│   │
│   └── [aKaReZa 30 - Microcontroller, Arduino BootLoader]
│         ├─ Programming — ATMEGA328 and ATMEGA16U2 with Arduino IDE.
│         ├─ Bootloader — Usage and setup.
│         ├─ Tools — Arduino IDE, PlatformIO.
│         └─ Auto Reset — Code upload without a programmer.
│
├── GPIO (General Purpose Input Output)
│   ├── [aKaReZa 11 - Microcontroller, GPIO - Part A]
│   │     ├─ GPIO Overview — Usage, inputs/outputs, LED control.
│   │     └─ Output Config — Pin settings and configuration.
│   │
│   └── [aKaReZa 16 - Microcontroller, GPIO - Part B]
│         ├─ Input Types — Mechanical switches and push buttons.
│         ├─ NO vs NC — Switch behavior comparison.
│         ├─ Pull-up/Down — Resistor roles and Active High/Low logic.
│         └─ Bounce — De-bouncing techniques for clean input.
│
├── Interrupts
│   └── [aKaReZa 45 - Microcontroller, Interrupts]
│         ├─ Polling vs Interrupts — Concepts and comparisons.
│         ├─ ISR — Writing and handling Interrupt Service Routines.
│         ├─ Vector Table — Lookup and usage.
│         ├─ Heap & Stack — Memory structure basics.
│         ├─ FIFO & LIFO — Data handling methods.
│         ├─ Priority — Managing interrupt levels and nesting.
│         └─ External — Triggering interrupts via hardware.
|
├── Display Interfaces
│   ├── [aKaReZa 28 - Microcontroller, Display]
│   │     └── Visual Outputs — Overview: LED, 7/14 Segment, Dot Matrix, LCD, OLED.
│   │
│   ├── [aKaReZa 35 - Microcontroller, 7Segments]
│   │     ├─ 7-Segment — Common cathode/anode, digit patterns, lookup tables.
│   │     └── Multiplexing — Reduce pin usage, refresh technique.
│   │
│   └── [aKaReZa 41 - Microcontroller, Alphanumeric LCD]
│         ├─ 16x2 LCD — Wiring, contrast, HD44780 basics.
│         ├─ Memory — DDRAM, CGRAM usage.
│         └─ Interface Modes — 8-bit, 4-bit, and LCD library.
|
├── Timers and Counters
│   └── [aKaReZa 54 - Microcontroller, Timer]
│         ├─ Mode 1: Accurate Time — For precise timing like display refreshing.
│         ├─ Mode 2: PWM — Motor and servo speed control.
│         ├─ Mode 3: Counter — Frequency counting and tachometer use.
│         ├─ Mode 4: Capture — Pulse capture for duty cycle and frequency analysis.
│         ├─ Mode 5: RTC — Real-Time Clock functionality.
│         ├─ Mode 6: WDT — System protection via watchdog.
│         └─ Mode 7: Millis — Millisecond-level timing.
│
├── Analog Peripherals
│   ├── [aKaReZa 68 - Microcontroller, Analog Peripherals - Part A]
│   │     ├─ Analog Signals — Basics and sensor outputs.
│   │     └─ ADC — Conversion process and sampling frequency.
│   │
│   └── [aKaReZa 69 - Microcontroller, Analog Peripherals - Part B]
│         ├─ ADC Types — SAR, Delta-Sigma, Flash comparison.
│         ├─ ADC Techniques — Single Ended vs Differential.
│         ├─ External ADC — Working with ADS1115.
│         ├─ DAC — Concepts and external DACs: DAC0808, MCP4725.
│         └─ PWM & Comparator — PWM as DAC and analog comparator usage.
│
├── Communication Protocols
│   ├── [aKaReZa 63 - Microcontroller, Communication Protocols - Part A]
│   │     ├─ Parallel vs Serial — Data transmission comparison and pros/cons.
│   │     ├─ USART & UART — Protocol formats and serial communication basics.
│   │     ├─ Baud Rate vs Bit Rate — Error calculation and correction methods.
│   │     └─ Practical usage — Applying protocols in real-world projects.
│   │
│   └── [aKaReZa 64 - Microcontroller, Communication Protocols - Part B]
│         ├─ SPI — High-speed device communication.
│         ├─ I2C — Two-wire multi-device communication.
│         ├─ 1-Wire — Single-wire protocol for device interfacing.
│         └─ Other Protocols — Overview of additional communication methods.
|
├── Motors
│   ├── [aKaReZa 89 - PMDC Motor - PART A]
│   │     ├─ PMDC Basics — Types, structure, speed/direction control.
│   │     ├─ H-Bridge — Motor driving circuit logic.
│   │     ├─ Braking — Fast stop mechanisms.
│   │     ├─ Dead Band — Neutral zone control concepts.
│   │     ├─ Encoders — Detection methods and selection.
│   │     └─ Driver ICs — Component overview.
│   │
│   ├── [aKaReZa 90 - PMDC Motor - PART B]
│   │     ├─ Dead Band — Influence on control behavior.
│   │     ├─ Motor Control — Speed, direction, braking logic.
│   │     ├─ Encoders — Output signal use for direction/speed.
│   │     ├─ Tachometer — Practical speed measurement setup.
│   │     └─ PWM Frequency — Efficiency tuning.
│   │
│   ├── [aKaReZa 91 - Stepper Motor]
│   │     ├─ Motor Types — PM, VR, Hybrid intro.
│   │     ├─ Wiring — 4/5/6/8-wire configurations.
│   │     ├─ Modes — UniPolar vs BiPolar.
│   │     ├─ Stepping — Micro/Half/Full stepping.
│   │     ├─ Drivers — Interface and setup.
│   │     ├─ Homing — Positioning technique.
│   │     └─ Braking & Speed — Methods and limits.
│   │
│   └──  [aKaReZa 92 - Servo Motor]
│          ├─ Overview — Structure and types.
│          ├─ Control — Signals and positioning commands.
│          ├─ Variants — Positional vs Continuous.
│          ├─ Wiring — Driver interface and connections.
│          ├─ Models — Dyanmixel, MG995, AC type.
│          └─ Experiments — Practical signal testing.
│     
└── RF Modules
    └── [aKaReZa 110 - GSM Modems]
          ├─ Intro — Mobile networks (2G–4G) and module overview.
          ├─ Modules — Quectel M66, SIMCom features.
          ├─ AT Commands — Setup, communication, signal check.
          ├─ SMS — Sending, receiving, error reporting via AT+CMEE.
          ├─ Voice — Call functionality through AT command set.
          └─ Syntax — `CR`, `NL` role and command sequencing tips.
```

<table style="border-collapse: collapse;">
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/Clsv0KyD4RM">aKaReZa 1 – Microcontroller, Introduction</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about what a microcontroller is, the differences between microcontrollers, microprocessors, and microcomputers, the history of ICs (Integrated Circuits), what embedded systems are, applications of microcontrollers, and where and in what applications to use microcontrollers.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/Clsv0KyD4RM">
        <img src="https://img.youtube.com/vi/Clsv0KyD4RM/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 1 – Microcontroller, Introduction Thumbnail"/>
      </a>
    </td>
  </tr>   
     
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/vrKq5oZxuT0">aKaReZa 3 – Microcontroller, Architecture</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about analog vs. digital, Morris Mano architecture, 8086 processor architecture, AVR architecture, programming languages (high-level, assembly, machine), code execution by processors, and types of microcontroller memory.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/vrKq5oZxuT0">
        <img src="https://img.youtube.com/vi/vrKq5oZxuT0/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 3 – Microcontroller, Architecture Thumbnail"/>
      </a>
    </td>
  </tr>
     
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/GfvmpeDFT_o">aKaReZa 5 – Microcontroller, Requirement</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about editor, compiler, assembler, interpreter, debugger, IDE, and programmer.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/GfvmpeDFT_o">
        <img src="https://img.youtube.com/vi/GfvmpeDFT_o/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 5 – Microcontroller, Requirement Thumbnail"/>
      </a>
    </td>
  </tr>
     
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/XhBq_QvCxYE">aKaReZa 7 – Microcontroller, Basics</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about Bootloader Simulator, Emulator, RISC-CISC SOC, Platform, Datasheet, Usermanual, Referencemanual, Application note, Fusebit, and Register.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/XhBq_QvCxYE">
        <img src="https://img.youtube.com/vi/XhBq_QvCxYE/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 7 – Microcontroller, Basics Thumbnail"/>
      </a>
    </td>
  </tr>
     
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/WPOZ_3E0mC8">aKaReZa 9 – Microcontroller, Oscillators</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about internal vs. external clock sources, natural and resonance frequency, equivalent oscillator circuits, the benefits of using an external oscillator, understanding PPM and PPB units, calculating oscillator errors and accuracy, and the impact of temperature on oscillator accuracy.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/WPOZ_3E0mC8">
        <img src="https://img.youtube.com/vi/WPOZ_3E0mC8/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 9 – Microcontroller, Oscillators Thumbnail"/>
      </a>
    </td>
  </tr>
     
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/_i_MXrbRf7o">aKaReZa 11 – Microcontroller, GPIO - Part A</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about the definition and application of GPIO, various input/output examples, driving LEDs with GPIO, and microcontroller output configurations.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/_i_MXrbRf7o">
        <img src="https://img.youtube.com/vi/_i_MXrbRf7o/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 11 – Microcontroller, GPIO - Part A Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/QGhRRsIICUU">aKaReZa 16 – Microcontroller, GPIO - Part B</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about various input types for microcontrollers, mechanical switches, push buttons, Normally Open vs. Normally Close, connecting push buttons to microcontrollers, pull-up and pull-down resistors, Active Low vs. Active High, and debouncing switches.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/QGhRRsIICUU">
        <img src="https://img.youtube.com/vi/QGhRRsIICUU/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 16 – Microcontroller, GPIO - Part B Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/kBbZi6WWGiM">aKaReZa 18 – Microcontroller, Assigning value to a register</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn various methods for assigning values to microcontroller registers and the approach used in all tutorials on this channel.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/kBbZi6WWGiM">
        <img src="https://img.youtube.com/vi/kBbZi6WWGiM/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 18 – Microcontroller, Assigning value to a register Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/5B_eDfAgxZU">aKaReZa 25 – Microcontroller, Practical</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn the best method (from my experience) for testing and practically implementing all microcontroller courses on the channel. I explain the topic in detail with a practical example, and future microcontroller tutorials will follow the content of this video.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/5B_eDfAgxZU">
        <img src="https://img.youtube.com/vi/5B_eDfAgxZU/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 25 – Microcontroller, Practical Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/C2yjVLjOY4c">aKaReZa 28 – Microcontroller, Display</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about various output devices through which a microcontroller visually communicates with the external world, including LED, 7 Segment, 14 Segment, Dot Matrix, Alphanumeric, Graphical, OLED, and other displays. The video also compares these devices and mentions that tutorials for setting up and using all these devices will be provided on the channel over time.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/C2yjVLjOY4c">
        <img src="https://img.youtube.com/vi/C2yjVLjOY4c/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 28 – Microcontroller, Display Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/zN1l83ps8rc">aKaReZa 30 – Microcontroller, Arduino BootLoader</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn how to program custom boards using the Arduino compiler without a separate programmer, and how to upload code from other compilers to microcontrollers.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/zN1l83ps8rc">
        <img src="https://img.youtube.com/vi/zN1l83ps8rc/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 30 – Microcontroller, Arduino BootLoader Thumbnail"/>
      </a>
    </td>
  </tr>  

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/ZmDLpSMhs-I">aKaReZa 35 – Microcontroller, 7Segments</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn how to control common cathode and common anode 7-segment displays with a microcontroller, and the multiplexing technique to drive multiple 7-segment displays with fewer pins.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/ZmDLpSMhs-I">
        <img src="https://img.youtube.com/vi/ZmDLpSMhs-I/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 35 – Microcontroller, 7Segments Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/wq8CSptCZ9o">aKaReZa 41 – Microcontroller, Alphanumeric LCD</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about 16x2 character LCDs, how to connect them to a microcontroller, and how to display custom text on the screen.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/wq8CSptCZ9o">
        <img src="https://img.youtube.com/vi/wq8CSptCZ9o/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 41 – Microcontroller, Alphanumeric LCD Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/Zr2dET7aFKM">aKaReZa 45 – Microcontroller, Interrupts</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about the concept and application of interrupts, comparing polling and interrupts methods, interrupt routines, interrupt vector tables, understanding heap and stack, FIFO and LIFO, the process of an interrupt occurring, interrupt priorities, nested interrupts, and external interrupts.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/Zr2dET7aFKM">
        <img src="https://img.youtube.com/vi/Zr2dET7aFKM/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 45 – Microcontroller, Interrupts Thumbnail"/>
      </a>
    </td>
  </tr>
  
  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/R8XcFXiZaRU">aKaReZa 54 – Microcontroller, Timer</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about the concept and function of timer-counter units in microcontrollers, the application of each part of these units, the operation of their seven different modes, and practical examples to understand these modes in specific microcontrollers.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/R8XcFXiZaRU">
        <img src="https://img.youtube.com/vi/R8XcFXiZaRU/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 54 – Microcontroller, Timer Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/CzTxCzfNQtw">aKaReZa 63 – Microcontroller, Communication Protocols - Part A</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about data transmission and messaging by microcontrollers using parallel and serial protocols, comparing their advantages and disadvantages, USART and UART protocols, data formats, Baud Rate vs. Bit Rate, and calculating and eliminating Baud Rate errors.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/CzTxCzfNQtw">
        <img src="https://img.youtube.com/vi/CzTxCzfNQtw/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 63 – Microcontroller, Communication Protocols - Part A Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/jNMS3Ukl_1E">aKaReZa 64 – Microcontroller, Communication Protocols - Part B</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about SPI, I2C, 1Wire protocols and their key points.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/jNMS3Ukl_1E">
        <img src="https://img.youtube.com/vi/jNMS3Ukl_1E/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 64 – Microcontroller, Communication Protocols - Part B Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/PrTcroT5kgM">aKaReZa 68 – Microcontroller, Analog Peripherals - Part A</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about analog signals, various sensors with analog outputs, different types of analog sensor outputs, analog-to-digital conversion units, the process of converting analog values to digital, the stages of analog-to-digital conversion, and the importance and impact of sampling frequency.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/PrTcroT5kgM">
        <img src="https://img.youtube.com/vi/PrTcroT5kgM/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 68 – Microcontroller, Analog Peripherals - Part A Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/F_oOUHInUFk">aKaReZa 69 – Microcontroller, Analog Peripherals - Part B</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about ADC errors, ADC channels and pins, ADC power, ground, and reference, Single Ended and Differential measurement, SAR and Delta-Sigma ADCs, comparing SAR, Delta-Sigma, and Flash ADCs, external ADC ADS1115, DAC, using PWM as DAC, external DACs DAC0808 and MCP4725, and internal microcontroller analog comparator unit.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/F_oOUHInUFk">
        <img src="https://img.youtube.com/vi/F_oOUHInUFk/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 69 – Microcontroller, Analog Peripherals - Part B Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/baebjz0w9KQ">aKaReZa 89 – Microcontroller, PMDC Motor - PART A</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about the basics and applications of PMDC (Permanent Magnet DC) motors, including types of electric machines, differences and uses of various electric motors, PMDC motor structure and applications, speed control methods, direction change techniques, H-bridge structure and control, rapid braking, motor driver ICs, dead band concept, types of encoders, and an introduction to the JGA25-13 motor.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/baebjz0w9KQ">
        <img src="https://img.youtube.com/vi/baebjz0w9KQ/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 89 – Microcontroller, PMDC Motor - PART A Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/Kle814RO_og">aKaReZa 90 – Microcontroller, PMDC Motor - PART B</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about the dead band concept and its impact on motor control, speed, direction, and braking methods for PMDC motors, speed measurement with encoders, direction detection with encoders, tachometer structure and application for speed measurement, the impact of PWM frequency on motor performance and efficiency, and selecting the appropriate PWM frequency for motors.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/Kle814RO_og">
        <img src="https://img.youtube.com/vi/Kle814RO_og/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 90 – Microcontroller, PMDC Motor - PART B Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/ws5ms61Bx-o">aKaReZa 91 – Microcontroller, Stepper Motor</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about stepper motors, their types (Permanent Magnet, Variable Reluctance, Hybrid), the NEMA 17 motor, wiring configurations (4, 5, 6, 8 wires), driving methods (Unipolar, Bipolar, Micro Step, Half Step, Full Step), microstepping for precision, stepper motor drivers, homing technique, braking methods, and maximum speed.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/ws5ms61Bx-o">
        <img src="https://img.youtube.com/vi/ws5ms61Bx-o/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 91 – Microcontroller, Stepper Motor Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/7y1G4hoaXaM">aKaReZa 92 – Microcontroller, Servo Motor</a>
      </h3>
      <p style="margin: 8px 0 0;">
        In this video, learn about servo motors, their structure and applications, control signal principles, types of servos, Positional Servo control, servo motor drivers, continuous servo applications, four-wire servo motors, Dyanmixel professional servos, AC servos, MG995 servo specifications, and practical tests.
      </p>
    </td>
    <td width="360" valign="top" style="padding: 0;">
      <a href="https://youtu.be/7y1G4hoaXaM">
        <img src="https://img.youtube.com/vi/7y1G4hoaXaM/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 92 – Microcontroller, Servo Motor Thumbnail"/>
      </a>
    </td>
  </tr>

  <tr>
    <td valign="top" style="padding: 0 10px;">
      <h3 style="margin: 0;">
        <a href="https://youtu.be/w70hpMyDvRU">aKaReZa 110 – Microcontroller, GSM Modems</a>
      </h3>
      <p style="margin: 8px 0 0;">
        Discover how to work with GSM modules and microcontrollers to send SMS, make calls, and connect to mobile networks. This video covers Quectel and SIMCom modules, AT command sequences, SIM status checks, signal strength readings, and voice call setup—ideal for mastering GSM communication in embedded systems.
      </p>
    </td>
    <td width="360" valign="top">
      <a href="https://youtu.be/w70hpMyDvRU">
        <img src="https://img.youtube.com/vi/w70hpMyDvRU/maxresdefault.jpg"
             width="360"
             alt="aKaReZa 110 – Microcontroller, GSM Modems Thumbnail"/>
      </a>
    </td>
  </tr>
  
</table>


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
