# README.md update history:  
Readme Last Updated: 22 Oct. 2016  
By Gabriel Staples, http://www.ElectricRCAircraftGuy.com  
-My contact info is available by clicking the "Contact Me" tab at the top of my website.  

# Current Code Version & History:  
-see Arduino_TV_B_Gone.ino for full version history 

Semver (http://semver.org/) VERSION HISTORY (newest on top):  
(date format: yyyymmdd; ex: 20161022 is 22 Oct. 2016)
 - 20170408 - v1.1 - code initially forked from shirriff/Arduino-TV-B-Gone; much much credit is due there to Ken, Gabriel Staples www.ElectricRCAircraftGuy.com, and of course to Mitch Altman & Limor Fried  

# Description:  
This code implements a circuit very similar to the TV-B-Gone, using the Adafruit Trinket. I will be implementing and testing with a 3.3V Trinket (https://www.adafruit.com/products/1500), but it is available in 5 Volt as well (https://www.adafruit.com/products/1501)
Although the trinket uses a ATTINY85, just like the original TV-B-Gone, the bootloader on the chip that allows it to be programed directly means our program space is down to ~5kb from ~8kb. This means that we will have to sacrifice some of the codes that it knows.
For my particular purposes, I only care about ~3 codes. However, I do intend to implement a helper utility to let you select what codes are important for you.
The default library will include as many of the most common codes as I can fit.



# Background:
-see Arduino_TV_B_Gone.ino for latest version history & more details, see original project code at https://github.com/shirriff/Arduino-TV-B-Gone


# License:  
Distributed under Creative Commons Attribution & Share Alike 4.0 International

# CIRCUIT:  
-NB: SEE "main.h" TO VERIFY DEFINED PINS TO USE  
The hardware for this project uses an Arduino:  
 * Connect an IR LED to pin 3 (IRLED).  
 * Connect a visible LED to the pin 13 (or use the built-in LED in many Arduinos).  
 * Connect a push-button between pin 2 (TRIGGER) and ground.  
 * Pin 5 (REGIONSWITCH) must be left floating for North America, or wire it to ground to have it output European codes.  

# User Manual:  
## Background Settings:  
 * The TV-B-Gone for Arduino can use either the EU (European Union) or the NA (North America) database of POWER CODES  
 * EU is for Europe, Middle East, Australia, New Zealand, and some countries in Africa and South America  
 * NA is for North America, Asia, and the rest of the world not covered by EU  
 * Let pin 5 float for NA codes, or wire it to ground to have it send EU codes  
 * Serial debugging output can be activated by setting "DEBUG 0" to "DEBUG 1" in "main.h"  
 * For 8 MHz Arduinos, define DELAY_CNT as 11 in "main.h," or use 25 for 16 MHz Arduinos.
  * Fine-tune if necessary  
 * All IR codes are defined in "WORLD_IR_CODES.h"  
  * We'd love to have you add more! Just be careful NOT to duplicate codes please!  
  
## Use:  
 * When the device is first powered on, it will quick-flash (30ms on-time followed by 250ms off-time) 3 times if set to output NA (North America) codes, or 6 times for EU (European Union) codes. See the end of the "setup()" function.  
 * Once on, the device will enter sleep mode, where it will remain until a button press occurs on the TRIGGER pin, at which point it will wake up and send all of its power codes for the region set according to the state of the REGIONSWITCH pin.  
 * Once you press the TRIGGER button (on pin 2), all power codes will be sent sequentially, one after the other. Note that the trigger button debouncing is done in a very primitive fashion, so quick button presses and releases (<500ms) may work best. If you just hold down the button, the code sending sequence will be continually started, stopped, and started again, since a button press during code sending is used to stop the sending sequence.  
 * After each individual IR power code is sent, a quick flash will occur on the visible LED (30ms on-time) to indicate a code was just sent. Therefore, as the codes are sent, you will see the visible LED flash repeatedly.  
 * Once all codes have been sent (which takes around 60 sec or so), a ~1.3 sec pause followed by 8 quick flashes will occur to indicate that all power codes have been sent. Then, the device will go back into sleep mode until another TRIGGER button press occurs.  
 * Between individual power codes, the TRIGGER button is read one time. If it is read as pressed (LOW), the code sending sequence will be stopped early. This will be indicated by a ~705ms delay followed by 4 quick-flashes, followed by another ~1.3 sec delay to give you time to release the button.  
  * NB: since the TRIGGER button is only read between individual codes, rather than continuously, you may need to hold down the button for a half-second to second or so for it to be read properly as pressed. Once the delay and 4 quick-flashes begin, you can release the button, and the power codes will be stopped. The device will enter back into sleep mode. Press the button again to begin the code sequence again from the beginning.  
  * NB: If you keep holding the button, however, this will be read as a new button-press in the main loop and the sequence will be restarted. Therefore, continually holding the button will just keep starting and stopping and starting again the sending sequence, repeatedly.  



