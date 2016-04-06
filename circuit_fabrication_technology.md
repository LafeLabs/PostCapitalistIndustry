## Circuit Fabrication Technology

3d circuit fabrication:

1. Sources of electronics technology, how to get it for free, how to identify and sort and use it, database management issues to make sure salvage works
2. 3d manipulator, how it works, plans to build it, simple demonstrations
3. how virtual and augmented reality work to help 3d circuit 
4. 3d circuit fabrication, how my circuit cartoon type schematics works, how the software works to do crowd sourced design off the internet with that
5. spime concept for circuits, how the documentation works, how to expand on it


Also add microwave network analyzer technology from Trash Wizard Stick, where Stick is based on a SoC like the https://www.openhacks.com/uploadsproductos/ar9331_datasheet.pdf chip from the Yun.  Rather than a swept sine wave, a series of pulses from the DC drive can create many frequencies, including ones faster than the clock speed, and there are built in RF LNA's on those systems which can go to a fast digitizer(is that built in? should be in some at least)

I propose using digital fast pulses as both RF and LO into a mixer which goes to a SLOW ADC input, possibly in one of the Arduino boards. As with my other technology, it's about transients and solving the right equations.  So this way there is no fast analog at all, just fast digital mixing with fast digital, and slow analog readout, which makes way more sense than modern NWAs.  If we can get fast digital drives and mixers from trash, and can read analog slowly with micro controllers also from trash we should be able to get broad band network analysis to work from trash up to quite a few GHz.  

This product alone blows capitalist technology out of the water.  Maybe the same rig can be used for some RF based medical imaging?  Use pulses of RF and DC magnets with steep gradients using rare earth permanent magnets.  

### Piezos from trash

Piezoelectricity, contrary to what capitalists might want you to believe, is extremely common.  layers a few hundred microns thick of common materials at 100 V can be useful with micron scale manipulation.  This is how the nano end of the 3d manipulator tool works, and it should be compatible with plasma processing, for fully controlled nano synthesis.  

### Other 3d fab considerations

It may make sense to have the heated tool be stationary and the piece being worked be moved.  For the printer of braille this can be done fastest and easiest: milk bottles cut and grabbed with a weight rock and three fishing lines as a xyz bang boom, with a small rock with a I2R heater as the tool.  This is easy to do with parts I have now, except for the thermometry.  And the power generation.  

This same technology might work to shape the rocks themselves, where the rock is pulled around in xyz space, and there is a vibrating chipping tool with feedback developed for the massagers, but used with a steel or diamond head  of some kind which chips the rock.  Again, this can be moved around, with various arms carving from different sides, to shape an arbitrary stone into an arbitrary shape and join it with other technology.  Probably the right way to do this with rocks is underwater, with some plastic floats for some added buoyancy.  

### wet 3d STM with fabrication

Run a xyz 3d manipulator in an electrolyte solution, like sea water, with a pointy tip or set of tips, of various metals.

Note: aluminum electrolytic capacitors are highly nonlinear and can be very useful for this work, can be changed in situ and used for both imaging and fabrication of generic 3d metal objects.  Working in fluids can blur the line between tunneling and not, since the leakage current will pretty much always involve tunneling, and there will be current even if the tip is out in the middle of the solution. Also, flow of the fluid will matter.  



### The TRIPOD!!!

Let it be known that April 6, 2016 is Tripod Day, the day I created the Tripod.

The basis for all Trash Magic fabrication will be the tripod.  a tripod is exactly what it sounds like: three sticks, joined at the top with wire or tape or rope, as well as with guy wires at the bottom if needed, with the bases of the three sticks planted in the ground for stability.  A rock hangs from the center to keep it steady.  

Each of the three sticks shall be of Skeletron.  Each shall be the size of the Standard Trash Magic Staff.  A practitioner of Trash Magic shall have the power to deploy this at any time, at any scale and with any tool.   Full xyz motion is possible with wires that are fed through holes or wheels on the sticks, and can go to stepper motors for drive and/or wheels on potentiometers.  Each wire connects to an arduino that runs a three terminal pulsed transport measuring protocol.  The ADC signals are amplified and converted with some math to an audio signal, visual display, and or vibrotactile interface.
This probe can be heated with the wires, can do local electrochemical work and measurement, measure nonlinearities of all kinds, and can thus weld, plate, edit, implant ions, plastic weld and plastic re-shape, signals also displayed in a GUI in a smart phone if needed but can also not be, can have no "smart" computer at all, just dumb computers.  Sensing can be capacitive, inductive, resistive, frequency dependent or not, nonlinear or not, gated or not.  Many different sizes and weights can be used, gear ratios can be changed on the fly with various interchangeable wheels.  Everything is modular.  

Thermal regulation of processes can be carried out by moving the position of a suspended cauldron in 3 dimensions relative to a fire at the bottom of the tripod, using a microprocessor and feedback on a thermometer to regulate the temperature to a fixed point.  

In a cluster of Trash Magic industrial production there can be many tripods, all in a network, connected by plastic plumbing, electrical and data connections, and zip lines that move materials from one to another, setting up ad hoc nodes in an assembly line that can be grown and shrunk on the fly.  

Tripods can also support roof and wall materials, making shelters that people can sleep and work in.  Tripods can be trees that already exist.  Tripods can also be completely submerged for doing intricate work on the bottom of a body of water.  In zero gravity another set of sticks are needed, and another cable and springs.  The materials for a pair of tripods should also be able to become the skeleton of a simple boat, which can then deploy mini tripods to the water below it.  
Tripods can be fractal, with a small tripod lowered from the tool head of a large tripod.  Smallest tripods should have Angstrom resolution and atomically sharp tips, biggest ones are hundreds of meters tall.  

Elements:

3 skeletron sticks

wire or rope for lashing

knife and drill and pliers to work the stuff together
trash magic philosophy engine style motor(one sided four pole stepper, water proof). all made from plastic bottles, HDPE milk bottles and HDPE caps from soda bottles, coils unwound and re wound from big old AC motors and transformers.  Transistors and SoC devices are salvaged and hacked from internet routers.  Micro controllers are salvaged from thermostats and the like.  Op amps are salvaged from audio electronics of various kinds.  motors designed to run as "dumb" steppers or DC brushless fast motors with feedback using pickup coil(s).
IOT device that has enough outputs to drive all the motors, e.g. the Pi zero or equivalent SoC

smart phone or tablet to control the IOT thing remotely--if there is VR or AR, it happens on this machine so that it's off the shelf and tracks whatever the tech assholes come up with as it develops.

sensor wheels that can pick up position of a passing structural wire as it goes past as the work moves, along with arduino to read them all out which connects to the IOT platform and out to the tablet, this allows full xyz input by the user or recording of position while a user works the machine by hand

LED illumination pointed at work space from the Trash Magic sticks, these have RGB capability so they can signal various types of data

speakers and amplifier that can play sound from the tablet, IOT device or direct amplification to get audio feedback on the signal

arduino that does the three terminal generic electrical measurement and drive with pulse width modulation and various ADC pickups, this connects to the raspberry pi, which then puts out light, sound, and vibration to feed back electrical data to the user

various heated tools and electrical heaters which can be driven by the suspending wires--need lots of thermometers for feedback, which can go to arduinos that connect to the pi over serial or bluetooth
hydro electric generators with tethers so that the whole tripod can be run by the tide or stream nearby, close but not necessarily under the tripod(although they could be!)

generic pumps for water and gas--two drive coils and a pickup coil, this is also the vibrational driver, see below, same tool, can be either on the moving piece or stationary while the work piece is moved.

vibrating tool which can vibrate a heavy rock-weighted tool that can, over many hours, under moving water, carve arbitrary shapes into stone, vibration also used for plastic welding with heat
soldering tool connected to Main Trash Magic Power

designs for many sizes and types of wheel so that torque can be transformed up or down, all fabricatable from bottles.  

LiPo batteries and bigger ad hoc electrochemical cells for storing more energy, possibly a water "tower" where water with stored potential energy can flow pressurized fluid through the system

high voltage generator for plasma work etc

### Elements of Trash Wizard Stick:


* Stick of typical Wizard Staff length, about 2 meters, about 1 inch diameter
* 1 fully assembled stepper motor, shaft protruding both ends, gets wrapped like a capstan for drive, with as many wraps as needed, with sewing thread, which is tied to the wires that do the transport measurement
* 1 dual coil drive with feedback coil(s)
* raspberry Pi connected over ssh(replace with pi zero ASAP, attempt to replace most of the arduinos with this GPIO and just use a single MEGA for analog input with some amplifiers)
* arduino for generic 3 terminal pulsed DC measurement, connected to audio and ADC to serial
* small speaker and amplifier
* neo pixel array of RGB LED's
* various thermometers and pressure sensors read out with a temp/pressure arduino
* LiPo battery which can store power to run everything, up to 2 amps
* LeatherMan type tool
* heater tool
* rotational position sensor wheel connected to potentiometer
* various holes for skeletron attachments as well as notches for attaching wires and lines and cleats to tie things off 
* windshield wiper motor charger with simple water wheel.  Generate 100 W, charge batteries fully with it
* small tablet to talk to Pi(Surface?) running i python notebooks


Note that these tools leave a huge range of what can be done, including electrolysis to get plenty of H2 and O2.  Also this can be scaled up for high intensity agriculture.  Motors can be added as well as tools.  Medical operations can be carried out remotely with these tools as well as all industrial fabrication, game playing ,art, tele presence etc.  

