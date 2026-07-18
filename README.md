# 🤖 Arduino Line Follower Robot

![Arduino](https://img.shields.io/badge/Arduino-Uno-blue?style=for-the-badge&logo=arduino)
![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge)
![Platform](https://img.shields.io/badge/Platform-Arduino-green?style=for-the-badge)
![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

An Arduino Uno based autonomous **Line Follower Robot** that detects and follows a black line using **dual IR sensors** and controls two DC motors through the **L298N Motor Driver**.

This project was developed during a robotics workshop to understand the practical implementation of embedded systems, sensor interfacing, motor control, and Arduino programming.

---

# 📌 Project Overview

The robot continuously reads data from two IR sensors placed underneath the chassis.

Depending on sensor readings, the Arduino adjusts the speed of the left and right motors using the L298N motor driver, enabling the robot to accurately follow a predefined black track on a white surface.

---

# ✨ Features

- 🤖 Automatic Line Following
- 🎯 Dual IR Sensor Detection
- ⚡ Differential Motor Speed Control
- 🔌 Arduino Uno Based
- 🚗 Two DC Gear Motors
- 🛠️ Modular Hardware Design
- 📚 Beginner Friendly Arduino Code

---

# 🛠 Hardware Components

| Component | Quantity |
|-----------|---------:|
| Arduino Uno | 1 |
| L298N Motor Driver | 1 |
| IR Sensor Module | 2 |
| BO DC Gear Motor | 2 |
| Wheels | 2 |
| Robot Chassis | 1 |
| Castor Wheel | 1 |
| Jumper Wires | As Required |
| 12V Power Supply | 1 |

---

# 💻 Software Used

- Arduino IDE
- Embedded C / Arduino C++

---

# ⚙️ Working Principle

1. IR sensors continuously detect the surface.
2. White surface reflects IR light differently than the black line.
3. Arduino processes sensor inputs.
4. L298N driver controls both motors.
5. Motor speed is adjusted according to sensor readings.
6. The robot follows the line automatically.

---

# 📂 Repository Structure

```
Line-Follower-Robot
│
├── Docs/
│   └── README.md
│
├── Images/
│   ├── Project Images
│   └── README.md
│
├── Videos/
│   ├── Project Showcase Video
│   └── README.md
│
├── LineFollower.ino
├── LICENSE
└── README.md
```

---

# 📸 Project Images

Project photographs are available inside the **Images** folder.

They include:

- Hardware Assembly
- Robot Chassis
- Electronics Setup
- Competition Arena
- Final Robot Body

---

# 🎥 Project Video

The **Videos** folder contains a short showcase of the completed robot hardware.

> **Note:** The uploaded video presents the completed hardware and overall assembly. It is intended as a hardware showcase and does not demonstrate live line-following performance.

---

# 📖 Documentation

Additional documentation and project notes are available inside the **Docs** folder.

---

# 🚀 Future Improvements

- PID Control Algorithm
- Adjustable Speed Calibration
- Bluetooth Configuration
- Obstacle Detection
- Maze Solving Capability
- ESP32 Upgrade
- OLED Display Integration

---

# 📄 License

This project is licensed under the **MIT License**.

---

# 👨‍💻 Author

**Yashwardhan Jangid**

B.Tech — Electronics & Communication Engineering

MBM University, Jodhpur

⭐ If you found this project useful, consider giving this repository a **Star**.
