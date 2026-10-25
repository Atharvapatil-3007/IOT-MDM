# 🔔 Smart Distance Alert System Using Arduino Nano and ESP32

## 📌 Project Overview

The **Smart Distance Alert System** is an IoT-based project designed to detect nearby objects and alert users when an object enters a predefined distance range.

The system uses an **HC-SR04 ultrasonic sensor** to measure the distance between the sensor and an object. An Arduino Nano processes the distance measurements and activates an active buzzer when an object is detected within the specified threshold of 30 cm.

An ESP32 provides Wi-Fi connectivity, allowing the system to send sensor readings and alert information to an online IoT dashboard for remote monitoring.

This project demonstrates the integration of embedded systems, ultrasonic sensing, wireless communication, and IoT-based data visualization.

## 🎯 Objectives

* Measure the distance between the sensor and nearby objects.
* Generate an audible alert when an object comes within 30 cm.
* Use an Arduino Nano to process sensor readings.
* Use an ESP32 to enable Wi-Fi connectivity.
* Display distance measurements and alert status on an IoT dashboard.
* Learn the fundamentals of IoT, sensor interfacing, and cloud-based monitoring.

## 🧰 Components Required

| No. | Component                 | Purpose                                  |
| --- | ------------------------- | ---------------------------------------- |
| 1   | Arduino Nano              | Reads the sensor and controls the buzzer |
| 2   | ESP32 DevKit              | Provides Wi-Fi connectivity              |
| 3   | HC-SR04 Ultrasonic Sensor | Measures the distance to nearby objects  |
| 4   | Active Buzzer             | Produces an audible warning              |
| 5   | Jumper Wires              | Connects the electronic components       |
| 6   | USB Cables                | Power and programming                    |
| 7   | Computer with Arduino IDE | Programming and testing                  |
| 8   | ThingSpeak Account        | Online IoT dashboard and data storage    |

## ⚙️ Working Principle

The system operates through the following steps:

1. **Distance Measurement:** The HC-SR04 ultrasonic sensor sends an ultrasonic pulse and measures the time taken for its echo to return.
2. **Distance Calculation:** The Arduino Nano calculates the distance using the measured echo time.
3. **Threshold Comparison:** The measured distance is compared with a predefined threshold of 30 cm.
4. **Alert Generation:** If an object is detected within 30 cm, the Arduino activates the buzzer. Otherwise, the buzzer remains off.
5. **Wireless Communication:** The ESP32 connects to a Wi-Fi network and sends the distance and alert status to the IoT platform.
6. **Dashboard Monitoring:** The online dashboard displays the uploaded measurements and alert information.

**Note:** The Arduino Nano and ESP32 require a communication connection and suitable software to exchange readings. The dashboard functionality requires the ESP32 to be programmed to upload the data.

## 🔌 Hardware Connections

### HC-SR04 to Arduino Nano

| HC-SR04 Pin | Arduino Nano Pin |
| ----------- | ---------------- |
| VCC         | 5V               |
| GND         | GND              |
| TRIG        | A0               |
| ECHO        | A1               |

### Active Buzzer to Arduino Nano

| Buzzer Pin   | Arduino Nano Pin |
| ------------ | ---------------- |
| Positive (+) | D7               |
| Negative (-) | GND              |

Use a buzzer that is suitable for the output pin's current limits; a transistor driver may be required for higher-current buzzers.

### Arduino Nano and ESP32

The Arduino Nano and ESP32 must exchange sensor readings through a suitable serial or other communication interface.

**Important:** The Arduino Nano typically uses 5V logic, while the ESP32 uses 3.3V logic. Protect ESP32 inputs from 5V signals by using an appropriate logic-level shifter or voltage divider.

## 💻 Software and Technologies

* Arduino IDE
* Arduino C/C++
* Ultrasonic sensing
* ESP32 Wi-Fi
* IoT communication
* ThingSpeak IoT platform
* Embedded systems programming

## ☁️ IoT Dashboard

The project can use ThingSpeak to store and visualize sensor data.

Suggested dashboard fields:

| Field   | Data                         |
| ------- | ---------------------------- |
| Field 1 | Distance in centimetres      |
| Field 2 | Alert status (SAFE or ALERT) |

The ESP32 can upload readings to ThingSpeak through its Write API Key. A private channel may require a Read API Key to retrieve its data.

**API key security:** Never publish your actual API keys in a public GitHub repository. Store them in a separate configuration file or enter them locally in your development environment.

## 📊 Expected Results

* The ultrasonic sensor measures the distance to an object.
* The buzzer activates when the distance is 30 cm or less.
* The buzzer turns off when the object moves beyond the threshold.
* The ESP32 can send sensor readings to an online dashboard after wireless communication is configured.
* Users can monitor the recorded distance and alert status remotely.

## 🌍 Applications

* Obstacle detection systems
* Parking assistance prototypes
* Smart home safety systems
* Proximity warning devices
* Object detection demonstrations
* Educational IoT projects

## 🚀 Future Improvements

* Add a live dashboard with real-time distance charts.
* Send notifications when an alert is triggered.
* Add an LED indicator for visual alerts.
* Store historical sensor readings for analysis.
* Develop a mobile-friendly monitoring interface.
* Add adjustable distance thresholds through the dashboard.

## 📚 Learning Outcomes

This project provides practical experience with:

* Ultrasonic sensor interfacing
* Arduino Nano programming
* ESP32 Wi-Fi connectivity
* Digital input and output
* Serial communication between microcontrollers
* IoT data transmission
* Cloud-based sensor monitoring
* Hardware troubleshooting

## 👨‍💻 Project Status

**Hardware prototype:** Distance measurement and buzzer alert functionality can be tested independently.

**IoT dashboard:** Requires the ESP32 Wi-Fi upload code, communication between the Arduino Nano and ESP32, and ThingSpeak channel configuration.

## 📄 License

This project can be distributed under the MIT License. Add a `LICENSE` file to the repository if you choose to use that license.
