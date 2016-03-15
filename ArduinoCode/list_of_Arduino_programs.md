### Arduino Programs for basic trash magic:

* push a button, activate a pin, selected in the code or over serial
* read from analog 4 or 5, selected in code or over serial
* read from a pin only when a button is pressed, button selects which pin to take data from
* when you push a button it makes a coil go, and that coil is the next coil after the previous time a button was pressed or the one "before" it, depending on which button.  This is the one press one step 4 pole stepper motor, button pins can be replaced by external pins over the 6 pin port
* simple feedback from one sense coil to one drive coil
* simple feedback one sense coil and two drive coils
* rotational feedback drive when button is pressed, button determines the direction, goes as fast as feedback says to go
* Basic slimeZistor transport program with a GUI
* knob sets rate of rotation dumb rotation with buttons setting direction
* go CW or CCW some number of steps remotely determined or remotely triggered
* angle set below 90 degrees: PWM combination of any two drive coils to get arbitrary angle precision.  This could increase the total achievable precision on a XYZ manipulator by two orders of magnitude, I think!  Since we're dealing with angular measurements which are directly proportionate to the circumference which is linear in any one cable length.  


So for a 10 cm shaft, a full turn is about 3 cm, so a quarter turn is 0.75 cm, or 7.5 mm.  If we get 1 degree precision, this roughly divides by 100 to get 75 microns, or 3 thousandths of an inch!!! 

The code for this has to be connected to some kind of feedback loop, with or without a human user, which goes through optical sensors on the manipulator.  Again, POV manipulator is the robot here.  It is CRITICAL there there is a zoom of the POV camera which also zooms the scale of control.  E.g. the same motion which moves 1 cm in a 10 cm wide field of view will move 100 microns in a 1 mm field of view.  This concept of scaling can be integrated into the code for computerized assembly using the thermal manipulators of plastic parts.  

standard UI will have a zoom and move both integrated for very smooth continuous combination of both.  





##### rotation algorithm:

read both buttons

if neither button, do nothing, set active coil to off

if CW button set delta to 1, else -1

read both sense coils

compare values to old values

go to "next" position(right after setting current pin to zero) if there is ANY sign change 
in either of the two sense coils which are orthogonal to each other.,   

put out 255 to current pin

wait a sec

save current coil values 

loop back to beginning 


