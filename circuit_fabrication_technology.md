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