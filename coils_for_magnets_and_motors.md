# Coils for magnets and motors

## 1. Wire type

What kind of wire do you have?  Does it have a thick, opaque rubbery insulation or something closer to a varnish that allows you to see the copper color through it?  You want the latter.  Anything with thick insulation will cut down on your number of turns you can have for a given size coil, which is a serious drawback for magnet coils. 

So what gauge is your wire?  First, measure the diameter.  You can do this no matter how thing your wire is with an ordinary ruler by wrapping the wire around the ruler and pushing the wraps together.  Wrap until you have a full division of some unit filled.  It might be a quarter inch, and inch, a centimeter or a few mm depending on the size of the wire.  Just make sure you get a good number of turns.  To get the diameter you divide the distance by the number of turns and there you go!  If the wire is super thin, you will need many turns, but you'll still get a decently accurate measure of the thickness.  The units I recommend using are either thousanths of an inch, colloquially known as "mils" in the US, or millimeters.  Please do not ever call millimeters "mils".  That is used as thoustanths of an inch by too many people for it to work as a metric unit.  Just don't do it.  

Once you know the diameter, there are a couple things you want to do with that information.  It's not a bad idea to look up what gauge you wire is, just so you know and can compare to other people's designs or spec your artifact for other people to build.  In the US this means the American Wire Gauge, or AWG.  You want to know this if you want to be able to go buy more wire like whatever you're using on eBay later.  The table to look up the gauge is here:

[https://en.wikipedia.org/wiki/American_wire_gauge](https://en.wikipedia.org/wiki/American_wire_gauge)

There is one other key thing we want to know: the resistance per unit length.  This is temperature dependent but for now let's call it room temperature.  

AWG             |  Diameter [mm]  |  Diameter [mils]  |  Area [mm^2]  |  R [mOhms/m]  |  R [mOhms/ft]
-----------  |  -----------  |  -----------  |  -----------  |  -----------
0           |  8.25       |  324.9       |  53.456 | 0.3 | 0.1
1           |  7.35       |  289.3       |  42.429 | 0.4 | 0.1
2           |  6.54       |  257.6       |  33.593 | 0.5 | 0.2
3           |  5.83       |  229.4       |  26.695 | 0.6 | 0.2
4           |  5.19       |  204.3       |  21.156 | 0.8 | 0.2
5           |  4.62       |  181.9       |  16.764 | 1.0 | 0.3
6           |  4.12       |  162.0       |  13.332 | 1.3 | 0.4
7           |  3.66       |  144.3       |  10.521 | 1.6 | 0.5
8           |  3.26       |  128.5       |  8.347 | 2.1 | 0.6
9           |  2.91       |  114.4       |  6.651 | 2.6 | 0.8
10           |  2.59       |  101.9       |  5.269 | 3.3 | 1.0
11           |  2.3       |  90.7       |  4.155 | 4.1 | 1.2
12           |  2.05       |  80.8       |  3.301 | 5.2 | 1.6
13           |  1.83       |  72.0       |  2.63 | 6.5 | 2.0
14           |  1.63       |  64.1       |  2.087 | 8.2 | 2.5
15           |  1.45       |  57.1       |  1.651 | 10.4 | 3.2
16           |  1.29       |  50.8       |  1.307 | 13.2 | 4.0
17           |  1.15       |  45.3       |  1.039 | 16.6 | 5.1
18           |  1.02       |  40.3       |  0.817 | 21.1 | 6.4
19           |  0.91       |  35.9       |  0.65 | 26.5 | 8.1
20           |  0.81       |  32.0       |  0.515 | 33.4 | 10.2
21           |  0.72       |  28.5       |  0.407 | 42.3 | 12.9
22           |  0.64       |  25.3       |  0.322 | 53.4 | 16.3
23           |  0.57       |  22.6       |  0.255 | 67.5 | 20.6
24           |  0.51       |  20.1       |  0.204 | 84.3 | 25.7
25           |  0.45       |  17.9       |  0.159 | 108.2 | 33.0
26           |  0.4       |  15.9       |  0.126 | 136.5 | 41.6
27           |  0.36       |  14.2       |  0.102 | 168.6 | 51.4
28           |  0.32       |  12.6       |  0.08 | 215.0 | 65.5
29           |  0.29       |  11.3       |  0.066 | 260.6 | 79.4
30           |  0.25       |  10.0       |  0.049 | 351.0 | 107.0
31           |  0.23       |  8.9       |  0.042 | 409.5 | 124.8
32           |  0.2       |  8.0       |  0.031 | 554.8 | 169.1
33           |  0.18       |  7.1       |  0.025 | 688.0 | 209.7
34           |  0.16       |  6.3       |  0.02 | 860.0 | 262.1
35           |  0.14       |  5.6       |  0.015 | 1146.7 | 349.5
36           |  0.13       |  5.0       |  0.013 | 1323.1 | 403.3

Now we can do some design with the wires we have!

Based on your diameter you can work out how many turns to use for your application from the resistance per unit length and on how many turns can get crammed into a given geometry of coil.  

My basic rule of thumb for drive coils is I want about 1 amp of current at about 5 V of voltage.  So that's about 1 ohm of total resistance.  So suppose I find that I have a wire of about 0.4 mm diameter(26 AWG).  This means that if I wrap it around a pen about 25 times I get 1 cm of length.  Looking at our table above this gives about 136 miliOhms per meter, or 0.136 Ohms per meter of resistance.  So to get 1 ohm we want about 7.4 m of length.  5 times that is about 37 meters.  

Now suppose each turn of the coil is on a circle of diameter about 3 cm.  The circumference is just pi times the diameter, so round that to about 10 cm or 1/10 of a meter.  So about a 370 turn coil is of that geometry and resistance.  Now how thick is that coil if it's a square stack of loops?  First take the square root of 370 to get about 19. Round to 20 and multiply by about half a mm and you get about 1 cm on a side for the square cross section.    

We can repeat this for several values to see what is optimal.  There are more design considerations for a drive coil.  The *force* is what we care about here.  And the force depends on essentially three things for a given permanent magnet: how well you get your wires into the highest field magnitude zone, how much current there is in the total coil, and how many turns.  I will assume we always design for about 1 amp of current in motor drive coils.  If we have a 1 Tesla magnet and are far enough away to get about 1/10th of that, that's 0.1 Tesla.  You can measure field using your smart phone and it will usually be in microtesla, so this is 100,000 microtesla.  Your phone probably does not go that high but you can extrapolate from field measurements outside and from the spec on the magnet to guess what the field is at a given spot.  If we multiply 1 amp by 0.1 Tesla and multiply that by the total length of 37 meters we get about 0.8 pounds of force, which is the ball park of what I want for motor stuff.  

So this is the ball park target for drive coils: about 200-400 turns, about 3 cm across with a 1 cm area, length a few dozen meters, resistance a few Ohms, permanent magnet fields a fraction of a Tesla, and forces a fraction of a pound(a few Newtons).







