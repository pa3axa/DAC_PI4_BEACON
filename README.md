# DAC based 10Mhz OCXO

This is a 10Mhz reference oscillator with PI4 and\
CW-FSK modulation for use in Microwave Beacons.\
It is selfcontained once programmed for the right\
frequency and Callsign in both PI4 and CW-FSK.

The board is designed around the CTI-OSC5A2B02\
10Mhz OCXO which is still available for reasonable\
prices on AliExpress.

For PI4 operation a 1 PPM signal is needed to sync   
the transmission of PI4 to the start top of the minute.   

My other project Easy-1PPM can be used to provide\
this 1 PPM pulse.

# Software

The software is preset with the values of PI7ATV\
but this easy to change and self explaining.

With the program PI4_Frequency__Setup_DAC80501.ino   
interactive frequency adjustment can be preformed.   
This program can run on any Arduino with I2C connected   
via the jumper J2. The found values for your OCXO need      
to be hardcode in PI7ALK_X_ADF43XX_DAC_V1.0.

The same is true for the callsign in both CW-FSK as PI4.

PA3AXA | 11/2024  | V1.0
 
