### Arduino Programs for basic trash magic:

* push a button, activate a pin, selected in the code or over serial
* read from analog 4 or 5, selected in code or over serial
* push a button, activate a pin, other button sets which pin is activated
* read from a pin only when a button is pressed, button selects which pin to take data from
* when you push a button it makes a coil go, and that coil is the next coil after the previous time a button was pressed or the one "before" it, depending on which button.  This is the one press one step 4 pole stepper motor, button pins can be replaced by external pins over the 6 pin port
* simple feedback from one sense coil to one drive coil
* simple feedback one sense coil and two drive coils
* rotational feedback drive when button is pressed, button determines the direction, goes as fast as feedback says to go
* Basic slimeZistor transport program with a GUI
* knob sets rate of rotation dumb rotation with buttons setting direction