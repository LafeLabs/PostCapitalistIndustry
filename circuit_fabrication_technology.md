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