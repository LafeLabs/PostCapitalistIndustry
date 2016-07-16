
This book is about actually building things.  This chapter is intended to start that process.  Since this is the very beginning of a rapidly evolving system, this chapter will drastically change in future versions, and it will be the least accessible of the chapters.   If you do not already have a technical background a lot of this chapter may make not much sense.  I hope it gives you some picture of what this will look like at least in flavor even if not all the technical work makes sense yet.  

The idea is for all these technologies to reproduce and evolve and teach their ways to new users as they spread through the world.  So eventually they will come to you and you will be able to make them!  

If on the other hand you are a person who has worked with electronics quite a bit and likes building that sort of thing I hope there is enough detail here to actually copy this stuff. Do it! Make them, change them, give them away, and teach others to do the same!  

## Resonance Magic Stick

This machine is to make anything with a spring or spring like thing or pendulum vibrate.  Vibration is generally part of the physical phenomenon known as resonance, which I will discuss much more in the next volume.  For now suffice it to say anything you think of as a wave or vibration is probably an example of some kind of resonance.  

The way to drive pretty much any resonance is the same: push only when your push is in the same direction as the natural motion from the vibration.  We do this with magnets, which both serve to create something to drive against with the drive coils and also indicate motion direction to the circuit which does the driving.  

When electrical current goes through a wire in a magnetic field, there is a force on that wire.  The wire also creates a magnetic field, and we can think of this system as an electromagnet(which we turn on and off fast) and a permanent magnet(which is always on) either being pulled together or pushed apart(either will work).  

Detecting the motion of the magnet is done using induction: moving magnetic fields generate voltage in a coil of wire, which we detect with an amplifier.  That amplifier is designed to be all or nothing: if there is even a tiny voltage, it will go all the way to 5 volts(the power supply voltage used in elementary Trash Magic as well as USB), and at below that(including negative voltages) it's stuck at zero.  What this means is that it essentially detects the *direction* of motion of the magnet.  Linking the output of that amplifier to a power switch(this role is played by a type of transistor in the first version presented here) which controls current through the drive coil(the coil that actually drives the magnet) causes force to be applied to the magnet on only one side of the cycle of motion.  

Perhaps this is all confusing.  It's just an electrical way of doing what you do when you push someone else on a swing: you see when they are going forward and push then.  Thats' all we're doing!  But with a pair of electrical devices, one of which takes the place of your eyes watching the moving swing(that's the amplifier) and one playing the role of your hand pushing the swing(that's the transistor and drive circuit).  

The drive coil is a  coil of wire about 1-2 inches in diameter with 200-500 turns of wire.  This is 30 AWG(American Wire Gauge) copper wire, and it's a few dozen meters, which makes it a few ohms of resistance.  At 5 volts, this means it's generally 0.5 to 2 amps or so, that's the target.  The sense coil is 50 turns of the same wire, wrapped around the outside of the drive coil.  

![Circuit schematic for resonant driver](images/resonantStick1.png) 

The amplifier is a circuit using the MCP6241 operational amplifier, a very low cost(less than a dollar), easy-to-use and generic chip from Microchip, Inc.(also a very generic name!) The voltage gain is 10,000, so 1 millivolt input is enough to saturate the amplifier all the way to 5 volts.  


![Coil](images/coilzoom.png) 

![stick](images/bigoscillator.png) 

![transistor](images/transistorimage.png) 

![amp](images/ampimage.png) 

A core of ferromagnetic material such as steel ball bearings filled into JB weld steel epoxy can increase the inductance considerably, and also making it possible to drive steel or iron objects without permanent magnets.  


The strobe light is a high power small LED flashlight driven through another identical power transistor, controlled by the output of a 555 in monostable mode driven by the output of the amplifier.  The user can turn a knob that is a potentiometer that controls the time delay, generally some number of ms or 10's of ms or 100's of ms.  This strobe is thus perfectly timed with whatever the resonant frequency is, and varying the time delay varies what phase of that wave we can see.  

The combination of a wave drive and a strobe has many applications in both science and art.  A wave tank can be made which projects water waves in a shallow clear dish onto a large screen(2 m across), and waves can be generated using the vibrational drive and a small agitator of some kind(a wood stick or blunt wire will work).  This can be an interesting art piece that allows you to observe wave behavior with the strobe.  Is it art or science?  Both.  Also the strobe can be used in microscopy with vibrating water, and the _observed_ position of a floating object in the fluid can be controlled using the phase knob!  This can be extended into a whole world of optical microscopy, as well as other phase controlled measurements in a vibrating fluid.  

A phase controlled standing wave illumination can be used to make living art by growing tiny plants in large arrays in such light, and controlling the phase to control the relative illumination across the green surface, making waves in the living plants.  Many different art pieces could be made like this, including growing bansai trees with this illumination over a many year period to make trees with standing waves of vibrational motion and light.  

Art can also be constructed by making the strobe illuminate various interesting steel objects which vibrate.  This can also be used for pure light art with more LEDs on the steel.  

Vibrational drive can also be an alternative to rotational drive for tools to work stone and wood.  A coil with a iron core can be used to pull on an iron nail on a spring, which then vibrates along the long axis of the nail, making a sort of small steel jackhammer.  Used under water with patience and some automation, this could be a tool to slowly and safely chip away at stone to make arbitrary shapes with minimal energy or time or effort input.  The same technology can of course be used for wood.  

Vibrational oscillators can also have a variety of applications in massage and health, both for humans and other animals.  Vibration applied to various compost reactors and other types of chemical and biological reactors can make a simple method for mixing or increasing reaction rates.  What effect does vibration have on microorganisms in loose soil?  Is it ever good?  We must study this and find out.  

Another simple vibrational machine that our driver can drive is a pendulum with full swing.  This can be as simple as a stick with a hole in it and a metal rod as axle running through a plastic bottle stator, with magnets on the ends of the stick.  The driver will periodically drive the magnets with just the right frequency and phase using feedback as with the linear oscillator.  This leads to an accelerating rotational motor limited by the friction of the bearings, which has several applications. One of the most useful is the high voltage generator, where the rotation causes a rubbing between two materials that built up voltage, and then metal pickups transfer charge to a big metal ball and thousands of volts are built up which can be used for various things such as plasma physics.  These types of rotational pendulums are also a nice demonstration of Josephson Junction physics and can be useful for building models for that field of research.  

Vibrational machines can also be used for simple propulsion of robots and for pumps of both fluids and gasses.  It is also amusing to see how destructive resonance can be by putting magnets on glass things and smashing them with the driver, which should be done very carefully if at all!  

## Noise Magic Stick 

This stick allows us to both listen to and create noise magic.  Noise magic has many forms, and we will work with several.  First of all this will be designed to measure the noise in tiny magnetic fields, amplify it, and make audio noise for the human ear.  This means you can literally hear magnetic fields, and by brandishing your magic stick you can control very sensitively what fields you're listening to: changing direction with a tiny twist of the stick and location by waving it around your head.  Also this can be used to track AC lines with current for various reasons, and can be used to trace underground signals, which can be planted using thumper sticks. 

Two stages of high gain amplifier and one stage of buffer amplifier get from the detection coil to the speaker.  All amplifiers and the speaker are powered by a 5V source from any USB type supply and like the Resonant Stick the input will be a USB cable.  The top of the stick is the speaker and the bottom is the pickup coil, with many turns and a ferrous core.  Potentiometers are used to tune so that all signals are centered in the middle between 0V and 5V.  This then goes through a isolator to the last stage to let all AC through but not any DC into the speaker.  Large, obviously labelled, wires connect to the feedback resistors in the gain stages, making it easy to make summing or differentiating amps as well as oscillators.  Magnets can be used to couple vibration to electricity to sound, for direct vibrational amplification.  Knobs and switches can thus choose gain, keep DC at zero, and make musical effects for art.  

In the highest gain mode with a resistor at the input the stick can be used to measure thermal noise of the resistor.  This can be repeated for various fluids, making a Johnson noise detector of fluid impedance which should also be sensitive to drift currents from whatever is going on electrically in the fluid.  In addition to thermal noise there will be shot noise observable from quantum tunneling through various native oxide layers.  This can be accomplished with an old beer can found by the creek, immersed in a sports drink.  Direct interaction with the properties of the oxide using acoustic feedback should thus be possible using quantum tunneling noise.  

Properly wielded and modified, the Noise Magic Stick should be our ears into a vast world of electrical impedance, voltage, current, and ion magic in general.  This is a precursor tool to the generic electrochemical probe that will be made in Volume II of this work. Again, with practice, it should be possible to do physical measurements on arbitrary materials using the Stick, both electric and magnetic.  

Another extremely important mode of operation for the Noise Magic Stick is for optical pickup.  A very simple and cheap optical sensor can be connected to the input of the amplifier chain, converting an optical signal to an audio signal.  This can be used to demodulate voice signals sent using fire and smoke and vibration in a faraway location.  Optics can be built into the stick to focus on a specific point, which might be a transmission fire far away.  Another magician may thus transmit via one fire on a mountain top and be picked up and amplified as a loud acoustic signal by many other magicians miles away in different locations! This can also be done with fluids and at the microscopic scale with different optics to create an audio signal from a microscopic system, generally a biological one.  We can thus listen to the motion of the cilia on a moving protozoan for instance as an actual audio signal.  This is both art and science and also technology.  


Finally Noise Magic gives us another useful resource: truly random numbers.  Using physical noise like thermal or shot noise we can have a signal which is physically provably random which can generate numbers using a simple analog to digital converter and microprocessor, at least for now.  In the future, the better way to do this would be to have the random bits get directly encoded into something physical in multiple copies which can then be used for a physical one time pad with no interaction with any microprocessor ever.  We can thus have provably secure communication based on face to face contact, which can then be deployed over any distance using the trivial one time pad encryption.  The attacks against the one time pad key generation generally involve compromising the hardware in ways that involve access to the industrial process by which that hardware was made.  We make our own hardware as art built from trash and then distribute it face to face, so these problems to not apply.  I don't generally believe in the cypher punk world view, but near-theoretically-perfect encryption can be useful and it should be so easy with our system there is not reason not to do it.  


## Guerrilla Geometry

This will be the subject of future work, but I'm just going to give a brief taste here in this first version.  The three dimensional geometry briefly described here when I discussed the "tripod" and Skeletron can turn into a whole self reproducing art system which spreads globally and which technology can be built on.  Sticks, rocks and trash, who used with the right geometric ideas can be infinitely strong if they pull humanity into a new world of better life.  

And that is the plan! Build viral information structures which go out and change the world in such a way that humanity can live well in freedom from the clutches of capitalism.  
 	


  


