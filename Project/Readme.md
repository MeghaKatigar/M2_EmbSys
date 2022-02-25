# LPG Gas Leakage Monitoring System
# Table of Contents 
- Abstract 
- Description 
- Objectives 
- Requirements 
  - High Level Requirements 
  - Low Level Requirements 
- Block Diagram
- Specifications of Components 
  - Microcontroller 
  - Sensors 
  - Actuator
# Abstract 
The significance of a fire alarm system in maintaining and monitoring the safety of all types of surroundings and circumstances is critical. However, many existing fire alarm systems are well-known for their utility, yet they can be produced at a high cost. As a result, it is out of reach for low-income individuals. The major goal of this project is to create a low-cost fire control system. The detecting system, monitoring system, and appliance system are the three primary systems in the project. The detecting system functions as both a fire and a smoke detector.

 The GSM  is used for sending SMS services, buzzer for alarming, servos for automatic lockdown of doors in emergency exits, motor pump fire extinguishing foam to stop the fire, and GPS module to indicate the location where the fire occurred for the fire extinguishing vehicle are all components of the appliance system. The microcontroller is in responsible for the total system.
 
 The system can detect smoke, flame, heat, and other elements detected by the detector, followed by a monitoring system that displays smoke, light, flame, heat, and other elements at that level. Finally, the main Buzzer activates and sends SMS when the sensors from each level are independently triggered. The control panel LCD display then displays which areas are damaged and which are safe. Then it activates the emergency exit servo motor for escape and the water pump motor for fire suppression in the affected zone.
 
 # Description 
 This system functions as a self-contained embedded system. It's a completely self-contained unit. It accepts digital or analog inputs through its input ports, calibrates, transforms, and processes the data, and then sends the results to an attached output device, which either displays data or controls and drives the attached devices.
 For example, these devices may use the Global System for Mobile Communication (GSM) and short message service (SMS) to transmit data from the building to the owners' mobile phones. As a result, by employing GSM technology to send immediate alert notification messages to owners or the fire brigade, it is easier to control fire damage. Microcontrollers will control variables such as temperature and smoke level. Each of these parameters is monitored by a sensor that is calibrated to a specified range; if the sensor detects a change in that range, the system will take the necessary action, and the user will receive a daily report through SMS.

# Objectives
- To indicate the location where the fire is occurred.
- To prevent fire and smoke.
- To sound the alarm if fire occurs.
- To run the emergency EXIT servo motor and control the fire by supplying water to the remotearea by motor pump.

# Requirements 
## High Level Requirements 
| ID| Title |Description |Result |
|---|---|---|---|
|HLR_1.0|Gas Sensor |It shall sense the gas leakage| To be done |
|HLR_1.1|LCD| It shall display the message |To be done |
|HLR_1.2|Temperature Sensor |It shall measure the room temperature | To be done |
|HLR_1.3|Servo motor|It shall spray water on fire| To be done|
|HLR_1.4|GSM Module|It shall send a msg to fire extinguisher when the fire takes place |To be done|
|HLR_1.5|Buzzer|It shall notify the neighbors that the fire or gas leakage taken place|To be done|

## Low Level Requirements 
|ID| Title |Description | Result |
|---|---|---|---|
|LLR_1.0|Gas Leakage|Home appliances that generates heat or gas such as stove, water heater.| To be done|
|LLR_1.1|Fire Detetion| This can be caused by gas leakage in room. |To be done|



# Block Diagram 

