## **Smart Monitoring System**

### **Project Overview**
The **Smart Monitoring System** is an IoT-based solution designed to monitor environmental parameters such as temperature, humidity, and light intensity in real-time. The system is built using an **ESP8266 microcontroller**, which collects sensor data and transmits it to a web-based IoT dashboard for visualization.

---

## **Project Workflow**
1. **Data Collection:** The ESP8266 microcontroller gathers data from sensors measuring temperature, humidity, and light intensity.
2. **Data Transmission:** The collected data is sent over Wi-Fi to an IoT dashboard.
3. **Data Visualization:** Users can monitor environmental conditions in real-time through a web-based dashboard.

---

## **Project Structure**
```
Smart-Monitoring-System/
│── ESP 8266 INTERFACING CODE.ino   # Arduino code for ESP8266
│── index.html                      # Web-based IoT dashboard
│── index.js                        # JavaScript for dashboard functionality
│── login.html                       # Login page for authentication
│── login.css                        # CSS for login page styling
│── styles.css                       # Stylesheet for the main dashboard
│── IOT DASHBOARD OUTPUT.png         # Image showing dashboard output
│── smart monitoring System.pptx     # Project documentation (presentation)
│── README.md                        # Project documentation (this file)
```

---

## **Installation and Setup**

### **1. Hardware Requirements**
- **ESP8266 Wi-Fi Module**
- **DHT11/DHT22 Sensor (Temperature & Humidity)**
- **LDR Sensor (Light Intensity Measurement)**
- **Jumper Wires & Breadboard**

### **2. Software Requirements**
- **Arduino IDE** (for programming ESP8266)
- **Google Chrome/Mozilla Firefox** (for IoT Dashboard)

### **3. Setting Up the ESP8266**
1. Connect the ESP8266 module to your computer via a USB-to-Serial adapter.
2. Install the required **ESP8266 board package** in Arduino IDE.
3. Upload the `ESP 8266 INTERFACING CODE.ino` file to the ESP8266.

### **4. Running the Web Dashboard**
1. Open `index.html` in a web browser.
2. Ensure the ESP8266 is connected to Wi-Fi and sending data.
3. The real-time sensor readings should appear on the dashboard.

---

## **How to Use**
1. **Power on** the ESP8266 module.
2. The system will automatically **collect sensor data**.
3. Open the **IoT dashboard** in a browser to view real-time readings.
4. Use the dashboard to monitor environmental conditions remotely.

---

## **Troubleshooting & Notes**
- Ensure **ESP8266 is connected to Wi-Fi** for real-time updates.
- If you face issues with sensor readings, check the **wiring connections**.
- You can modify `index.js` to improve the dashboard functionality.

---

## **Future Enhancements**
- **Add more sensors** (e.g., air quality, motion detection).
- **Store sensor data** in a cloud database for historical analysis.
- **Integrate mobile notifications** for real-time alerts.

---
🚀 **Developed by SanjayCarmel23**  
Feel free to contribute or report issues in the **Issues** tab! 🎯
