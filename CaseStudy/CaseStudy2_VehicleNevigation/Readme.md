# Vehicle Nevigation

Vehicle Nevigation indicates the present location and running direction of the vehicle on the display. The system is composed of a GPS receiver which determines
the preset location of the vehicle by means of radio waves from a satellite 🛰 and GPS ECU. Alternatively, GSM mobile network is used for this purpose. Absolute 
position is determined using GSM ECU. Compass Sensor is used for obtaining absolute direction. Wheel Sensor is used for obtaining relative direction & distane. 
Web mapping services, such as Google Maps, street maps etc. The main block of the system is Micro Controller ( i.e ARM LPC2148), which controlls every small parts
of the system. As the vehicle moves, maps are sent on the display one after the another Continuously.

# Block Diagram

![Vehical_Nevigation](https://user-images.githubusercontent.com/98883965/155134145-1b0440c2-ac4c-486b-a433-30ee86d441de.JPG)


## Peripheral used in Block Diagram:
- Micro Controller
- GPS ECU
- GSM ECU
- Compass and Wheel Sensor
- Web Mapping Service
- Display
