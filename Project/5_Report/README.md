# SMART WATCH 

## Table of content

| S.No | Table of content |
|------|------------------|
| 1. | About |
| 2. | Requirements |
| 3. | Block Diagram and Components Description |
| 4. | Architecture |
| 5. | Test Plan And Output |
| 6. | Output |
| 7. | Application |


## 1. ABOUT 

### 1.1 Abstract

Smartwatches are trending devices that give its users the ability to be connected, send/receive emails and messages, keep track of health and fitness, and even make calls on the go. Despite these benefits, the disadvantages of smartwatches can be equally terrifying. Smartwatches contain sensitive data and useful information that could be misused if a smartwatch gets lost or stolen. This paper develops a framework to do forensics for smartwatches according to three analysis stages: physical, backup, and wireless communication. We followed the proposed framework using Apple Watch. We found that the watch stores a lot of personal information such as contacts details, text messages, calendar details, Emails, pictures, and wallet data including: stored payment cards, gate passes, and event tickets, if any. In addition, the logical acquisition of the backup files revealed to us that more sensitive information such as the user's secure ID, Wi-Fi, Bluetooth, and MAC addresses can be extracted directly from the backup. Therefore, users must encrypt their backup files to keep their personal data secured. Based on our experiment, we believe that a smartwatch can be used as a valuable evidence for forensic investigators and a more advanced framework must be further developed in this emerging field.

### 1.2 Features

1. Fitness and Health.
2. Play Music
3. Navigation
4. Make and Receive Calls
5. Access Notifications
6. Emergency Call and Fall Detection

### 1.3 5W's & 1H

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/5W's%20%26%201H.jpg)

### 1.4 Swot Analysis

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/SWOT%20D.jpg)


## 2. REQUIREMENTS 

### 2.1 High Level Requirements

| ID | Description |
|----|-------------|
|HLR1 | User shall be able to monitor the temperature |
|HLR2 | User shall be able to monitor the step count |
|HLR3 | User shall be able to edit the number |
|HLR4 | User shall be able to monitor the increase and decrease of temperature |


### 2.2 Low Level Requirements 

| HLR | LLR | Description |
|-----|-----|-------------|
|HLR1 | LLR1 | Usage of temperature Sensor |
|HLR2 | LLR2 | Usage of Pedometer Sensor |
|HLR3 | LLR3 | Usage of Keypad |
|HLR4 | LLR4 | Usage of LED |


## 3. BLOCK DIAGRAM AND COMPONENTS DESCRIPTION 

### 3.1 Block Diagram

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/CD.jpg)

### 3.2 Components Description


Temperature Sensor: It is used to monitor the persons temperature.

Step Sensor: It shows the number of steps

LED: It glows when temperature is low or high than the normal value.

Keypad: It is used to change the digits.

LED Display: It is used to diplay the temperature level, step count and keypad.


## 4. ARCHITECTURE 

### 4.1 Behavior Diagram

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Behavior%20Diagram.jpg)

### 4.2 Structuarl Diagram

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Structural%20Diagram.jpg)


## 5. TEST PLAN AND OUTPUT 

# High Level Test Plan

| Test ID | Description | Excpeted Output | Actual Output | Pass/Fail |
|---------|-------------|-----------------|---------------|-----------|
| HLTP1 | Temperature | Will display the value | Will display the value | ✅ |
| HLTP2 | Step count | Will display the number of steps |  Will display the number of steps | ✅ |
| HLTP3 | LED | It should glow | It should glow | ✅ |
| HLTP4 | LCD Display | Should display all values |  Should display all values | ✅ |


# Low Level Test Plan

| HLTP | LLTP | Description | Input | Excpeted Output | Actual Output | Pass/Fail |
|------|------|-------------|-------|---------|---------------|-----------|
| HLTP1 | LLTP1 | Temperature | <26°C | LED should glow | LED should glow | ✅ |
| HLTP1 | LLTP1 | Temperature | 36°C - 42°C | Normal Temperature | Normal Temperature | ✅ |
| HLTP1 | LLTP1 | Temperature | >45°C | LED should glow | LED should glow | ✅ |
| HLTP2 | LLTP2 | Step count | Button | Should display the step count | Should display the step count | ✅ |
| HLTP3 | LLTP3 | LED | (<26°C) or ( >45°C) | It should glow | It should glow | ✅ |


## 6. OUTPUT


### 1. Initial start

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Initial%20start.jpeg)

### 2. Initial monitoring 

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Initial%20monitoring.jpeg)

### 3. Step count

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Step%20count.jpeg)

### 4. When temperature is low 

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Temp%20low.jpeg)

### 5. When temperature is high

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Temp%20high.jpeg)

### 6. When temperature is normal

![](https://github.com/dhaya007/M2-EmbSys/blob/main/Project/6_ImagesAndVideos/Temp%20normal.jpeg)


## 7. APPLICATION

Fitness centres.

Health monitoring places.

Can be used in hospitals.

And to those patients who take treatment at home.


