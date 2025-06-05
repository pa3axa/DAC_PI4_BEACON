 /*

 Simple Program to find the right DAC values to obtain
 the wanted frequency spacing For CW-FSK and PI4

 I used this program with an Arduino Nano directly
 connected to the DAC board I2C bus on JP2.
 
 Wire.h defines I2C as follows
 
 SDA = A4 = PIN 4 EXT I2C connector 
 SCL = A5 = PIN 2 EXT I2C connector

  Calculated Frequencies PI7ALK 9cm beacon
 
  PI4 Tone | Caculated Frequency    | DAC Value   
----------------------------------------------------------------
 CW-Mark   : 3.400.925.000,0000 Hz ;  0x7594
 CW-Space  : 3.400.924.600,0000 Hz ;  0x6E28
 
 PI4 tone0 : 3.400.924.882,8125 Hz ;  0x736E
 PI4 tone1 : 3.400.925.117,1875 Hz ;  0x77B0  
 PI4 tone2 : 3.400.925.351,5625 Hz ;  0x7BF2
 PI4 tone3 : 3.400.925.585,9375 Hz ;  0x802A


Calculated Frequencies PI7ALK 23cm beacon
----------------------------------------------
 CW-Mark   : 1.296.918.000,0000 Hz ; 0x7F8F
 CW-Space  : 1.296.917.600,0000 Hz ; 0x6B12
    
 PI4 ton 0 : 1.296.917.882,8125 Hz ; 0x7990
 PI4 tone1 : 1.296.918.117,1875 Hz ; 0x8584
 PI4 tone2 : 1.296.918.351,5625 Hz ; 0x9178
 PI4 tone3 : 1.296.918.585,9375 Hz ; 0x9DB7


 Calculated Frequencies PI7ALK 13cm beacon
----------------------------------------------
 CW-Mark   : 2.320.918.000,0000 Hz ;  0x637E
 CW-Space  : 2.320.917.600,0000 Hz ;  0x56DE
    
 PI4 ton 0 : 2.320.917.882,8125 Hz ;  0x5FCB
 PI4 tone1 : 2.320.918.117,1875 Hz ;  0x6718
 PI4 tone2 : 2.320.918.351,5625 Hz ;  0x6E68
 PI4 tone3 : 2.320.918.585,9375 Hz ;  0x75C6


  Calculated Frequencies PI7ALK 9cm beacon
 
  PI4 Tone | Caculated Frequency    | DAC Value   
----------------------------------------------------------------
 CW-Mark   : 3.400.925.000,0000 Hz ;  0x7E22
 CW-Space  : 3.400.924.600,0000 Hz ;  0x75D0
 
 PI4 tone0 : 3.400.924.882,8125 Hz ;  0x7BB2 
 PI4 tone1 : 3.400.925.117,1875 Hz ;  0x8092  
 PI4 tone2 : 3.400.925.351,5625 Hz ;  0x8593  
 PI4 tone3 : 3.400.925.585,9375 Hz ;  0x8A92 
 

 Calculated Frequencies PI7ALK 6cm beacon
----------------------------------------------
 CW-Mark   : 5.760.935.000,0000 Hz ;
 CW-Space  : 5.760.934.600,0000 Hz ;
    
 PI4 ton 0 : 5.760.934.882,8125 Hz ;
 PI4 tone1 : 5.760.935.117,1875 Hz ;
 PI4 tone2 : 5.760.935.351,5625 Hz ;
 PI4 tone3 : 5.760.935.585,9375 Hz ;


 Calculated /2 Frequencies PI7ALK 6cm beacon
----------------------------------------------
 CW-Mark   : 2.880.467.500,00000 Hz : 0x838B
 CW-Space  : 2.880.467.300,00000 Hz : 0x7E86
 
 PI4 tone0 : 2.880.467.441,40625 Hz : 0x820A
 PI4 tone1 : 2.880.467.558,59375 Hz : 0x84F3
 PI4 tone2 : 2.880.467.675,78125 Hz : 0x87DC
 PI4 tone3 : 2.880.467.792,96875 Hz : 0x8ACF
 
 Calculated Frequencies PI7ALK 3cm beacon
----------------------------------------------
 CW-Mark   : 10.368.920.000,0000 Hz : 0x6D51 
 CW-Space  : 10.368.919.600,0000 Hz : 0x6AA1
 
 PI4 tone0 : 10.368.919.882,8125 Hz : 0x6C84
 PI4 tone1 : 10.368.920.117,1875 Hz : 0x6E0F
 PI4 tone2 : 10.368.920.351,5625 Hz : 0x6F9F
 PI4 tone3 : 10.368.920.585,9375 Hz : 0x712A


 Calculated Frequencies PI7ATV 24Ghz beacon
----------------------------------------------
 CW-Mark   : 24.048.900.000,0000 Hz
 CW-Space  : 24.048.899.600,0000 Hz
    
 PI4 ton 0 :  24.048.899.882,8125 Hz
 PI4 tone1 :  24.048.900.117,1875 Hz
 PI4 tone2 :  24.048.900.351,5625 Hz
 PI4 tone3 :  24.048.900.585,9375 Hz

 Calculated /18 Frequencies PI7ATV 24GHz beacon
----------------------------------------------
 CW-Mark   : 1.336.050,000,00000 Hz : 0x7D78
 CW-Space  : 1.336.049.977,77777 Hz : 0x7C42
 
 PI4 tone0 : 1.336.049.993,4896 Hz : 0x7D1E
 PI4 tone1 : 1.336.050.006,5104 Hz : 0x7DBE
 PI4 tone2 : 1.336.050.019,5313 Hz : 0x7E68
 PI4 tone3 : 1.336.050.032,5521 Hz : 0x7F26


  I2C DAC values for PI4 @ 10368,200 Mhz 29/02/2024
----------------------------------------------------------------
  PI4 Tone | Caculated Frequency    | DAC Value | H or V mounted   
----------------------------------------------------------------
 CW-Mark   : 10.368.200.000,0000 Hz : 0x63E2
 CW-Space  : 10.368.199.600,0000 Hz : 0x5FC2
 
 PI4 tone0 : 10.368.199.882,8125 Hz : 0x612E
 PI4 tone1 : 10.368.200.117,1875 Hz : 0x625F
 PI4 tone2 : 10.368.200.351,5625 Hz : 0x6390
 PI4 tone3 : 10.368.200.585,9375 Hz : 0x648F


73's Rens PA3AXA

 */

#include <Wire.h>

// Put the DAC I2C address here
const int DAC80501 = 0x48;

// Variable
// 16bit DAC value

uint16_t value_16bit = 0x61C4; // 25028 = 1906 mV, 10.000.000.001 Mhz Calibrated
uint16_t i = 0;

void setup() {

  

  Serial.begin(9600);
  Serial.setTimeout(1000);

  Serial.println(" ");
  Serial.println( " -- DAC 50801 I2C Frequency Setup Tool -- " );
  Serial.println(" ");

  Wire.begin();
  Wire.beginTransmission(DAC80501);     // 1 Adress the DAC chip
  delayMicroseconds(10);
  Wire.write(0b00000011);               // 2 Select CONFIG register
  delayMicroseconds(10);
  Wire.write(0x00);                     // 3 Default config setting MSB
  delayMicroseconds(10);
  Wire.write(0x00);                     // 4 Default config setting LSB
  Wire.endTransmission();

/*
 In default setting, output range is 0 to 3.1 V
 
  - When GAIN LSB is set to 0x01 the output in multiplied by 2  
  - When GAIN MSB is set to 0x01 the internal REF is divided by 2
    and this reduce the output by 2  

*/

  Wire.beginTransmission(DAC80501);     // 1 Adress the DAC chip
  delayMicroseconds(10);
  Wire.write(0b00000100);               // 2 Select GAIN register
  delayMicroseconds(10);
  Wire.write(0x00);                     // 3 Default GAIN setting MSB
  delayMicroseconds(10);
  Wire.write(0x01);                     // 4 Default GAIN setting LSB
  Wire.endTransmission();

 dacvolt();

}


void dacvolt(){

  byte dac_low = byte(value_16bit & 0x00FF);
  byte dac_high = byte((value_16bit & 0xFF00) >> 8);

  Wire.beginTransmission(DAC80501);     // 1 Adress the chip
  delayMicroseconds(10);
  Wire.write(0x08);                     // 2 Select DAC DATA register
  delayMicroseconds(10);
  Wire.write(dac_high);                 // 3 send DAC data MSB
  delayMicroseconds(10);
  Wire.write(dac_low);                  // 4 send DAC data LSB
  delayMicroseconds(10);
  Wire.endTransmission();
  
}  
  
 
void loop() {

  
  while (Serial.available() > 0){
   i = Serial.parseInt();
    if ( i != 0 ) {
    Serial.print ("Value Decimal = ");
    Serial.println(i);
    value_16bit = i;
    Serial.print("value HEX = ");
    Serial.println(value_16bit, HEX);
    dacvolt();
    }
 
  }

  delay(1000);
}
