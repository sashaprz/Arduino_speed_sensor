# Arduino_speed_sensor
Made a speed sensor for my bike :)

If you bike indoors, the classic GPS tracker doesn't work to tell you distance. So you can buy something called a speed sensor that will tell you how far you've gone based on, in the simplest form, the # of rotations your wheel makes. 

Figured this would be super simple to build so I used my Arduino to build it out. 

Basically: Hall sensor attached to the bike frame right beside the back wheel, and a magnet attatched to the wheel itself. When the magnet passes by the Hall Sensor, a voltage is generated. Count how many times the voltage is generated, and I've got # of rotations. Multiply that by circumference, and I have total distance. At this point there are all sorts of things you can calculate :) 
