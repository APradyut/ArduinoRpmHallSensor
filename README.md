# Sensing RPM using Hall Effect Sensor from Arduino
The repository contains the arduino code which can sense speed and convert it from RPS to Kmph.
The hall effect sensor is placed near a rotating magnet on the axle of the car. More the number of magnets, more is the accuracy.
# Working:
  The hall effect sensor counts the number of times the magnets crosses the stationary sensor. This number is then divided by 2 times the number of magnets installed (In the test case the number of magnets were 4). This is then converted to the Kmph by multiplying it with the tire radius and the resultant speed is given on the display used.
For any queries feel free to send a mail on adarsh.pradyut@gmail.com
