# Air Quality Monitoring System with ESP32 and MQ135 Sensor

This project implements an air quality monitoring system using an ESP32 development board and an MQ135 sensor. The system measures air quality in real-time and sends notifications via WhatsApp if the air quality falls below acceptable levels.

## Features

- Real-time air quality monitoring with an MQ135 sensor.
- ESP32 development board for data processing and communication.
- WhatsApp notifications for timely alerts.

## Installation

1. Clone this repository:

2. Upload the code to your ESP32 board using Arduino IDE or PlatformIO.

3. Connect the MQ135 sensor to the ESP32 board following the provided pinout.

## Usage

1. Power on the ESP32 board and ensure it's connected to the internet.

2. Wait for the system to initialize and start monitoring the air quality.

3. If the air quality falls below acceptable levels, you'll receive a notification on your WhatsApp account.

## Acknowledgements

- [ESP32](https://www.espressif.com/en/products/socs/esp32)
- [MQ135 Sensor](https://www.sparkfun.com/products/9404)
- [WhatsApp API](https://developers.facebook.com/docs/whatsapp/)

## Disclaimer

This project is for educational purposes only. The accuracy of air quality measurements may vary based on environmental factors and sensor calibration. Always refer to official air quality monitoring stations for accurate readings.

