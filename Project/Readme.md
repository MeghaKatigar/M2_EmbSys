# LPG Gas Leakage Monitoring System
# Table of Contents 
- Abstract 
- Description 
- Objectives 
- Requirements 
  - High Level Requirements 
  - Low Level Requirements 
- Block Diagram
- Flow Chart
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
![Block_Diagram_lpg](https://user-images.githubusercontent.com/98883965/155764508-f4e7112c-62b1-4324-a460-7ace4ad374f9.JPG)

## Component required 
### Sensors
1) Temperature Sensor 

The LM35 series are precision integrated-circuit temperature sensors, whose output voltage islinearly proportional to the Celsius (Centigrade) temperature. The LM35 thus has an advantage overlinear temperature sensors calibrated in° Kelvin, as the user is not required to subtract a large constantvoltage from its output to obtain convenient Centigrade scaling.

2) Smoke Sensor

The MQ-2 smoke sensor reports smoke by the voltage level that it outputs. The more smokethere is, the greater the voltage that it outputs. Conversely, the less smoke that it is exposed to, the lessvoltage it outputs. The MQ-2 also has a built-in potentiometer to adjust the sensitivity to smoke. Byadjusting the potentiometer, you can change how sensitive it is to smoke, so it's a form of calibrating itto adjust how much voltage it will put out in relation to the smoke it is exposed to.

### Actuators

1) DC Motor

A DC motor is a mechanically commutated electric motor powered from direct current (DC).The stator is stationary in space by definition and therefore the current in the rotor is switched by thecommentator to also be stationary in space. This is how the relative angle between the stator and rotormagnetic flux is maintained near 90 degrees, which generates the maximum torque.

2) Servo motor

Inside a servo motor, there are a small DC motor, potentiometer, and a control circuit. Themotor is attached by gears to the control wheel. The motor rotates, the potentiometer's resistancechanges, so the control circuit can precisely regulate how much movement there is and in whichdirection. The servo motor in this project operates on 6V.

### Communication modules
1) GPS Module

GPS or Global Positioning System is a satellite navigation system that furnishes location and timeinformation in all climate conditions to the user. GPS is used for navigation in planes, ships, cars andtrucks also. The system gives critical abilities to military and civilian users around the globe.


# Flowchart
![FLOWCHART_LPG](https://user-images.githubusercontent.com/98883965/155768690-9c9f92e6-e4d6-422a-a672-01d897f77295.JPG)

