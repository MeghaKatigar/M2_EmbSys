# Test Plan
## High Level Test Plan Description


| Test ID | Title | Input Value | Expected O/P | Actual O/P| Status (:heavy_check_mark: PASS/ :x: FAIL) |
| ---|     ---      | --- | --- | --- | ---|
| 01 | Gas Sensing   | Detection of smoke | Shall turn ON the buzzer | Shall turn ON the buzzer |:heavy_check_mark: |
|02 | Temperature measurement | 50* C  | Shall turn on the Servo & DC motor| Shall turn ON the Servo & Dc motor | :heavy_check_mark: |
|03| Main Switch | OFF(0) | Shall display "NO FIRE ALL SAFE" on LCD| Shall display "NO FIRE ALL SAFE" on LCD| :heavy_check_mark:  |
|04| Main Switch | ON(1) | Shall display "Sending MSG" on LCD | Shall display "NO FIRE ALL SAFE" on LCD| :heavy_check_mark:  |



## Low Level Test plan Description 

| Test ID | Title| Input Value | Expected O/P | Actual O/P| Status(:heavy_check_mark: PASS/ :x: FAIL) |
|---|---|---|---|---|---|
| 01   |  Displaying the message on LCD| NO FIRE ALL SAFE| NO FIRE ALL SAFE| NO FIRE ALL SAFE| :heavy_check_mark: |
|02| Servo Motor| 0V | Motor is OFF | Motor is OFF | :heavy_check_mark:|
|03| Servo Motor| 5V | Motor is ON | Motor is ON | :heavy_check_mark:|
|04| DC Motor | 5v | Anticlockwise rotation | Anticlockwise Rotation  | :heavy_check_mark:|

# Output
## When No smoke is detected 
