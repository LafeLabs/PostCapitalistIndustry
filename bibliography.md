



Multiple bibliographies should exist, each with its own code so you know which it's from.

Inspirational fiction FICTION-1-5(e.g. fiction, from chapter 1, reference 5)


inspirational non-fiction(NON-FICTION-POLITICS-13-1)

physics texts(NON-FICTION-PHYSICS-TEXT-12-12)

journalistic sources(periodicals)JOURNAL-4-21

academic literature(ACADEMIC-5-17 is from chapter 5, reference 17)

this is maybe not great, a bit unclear, I want TOTAL CLARITY. 

citations in the text should be numerical, with ONE number system for the whole work that goes to footnotes(0-1), and the footnotes should have a more verbose form that would be tolerable inline.  OR maybe two numbers, one for chapter and one for note should be used.  That will make the tracking way less frustrating.  Each is still unique, though, and I will never use a footnote number *without* including the chapter number.  

e.g. for chapter 0:

(0-1) Non Fiction, Diamond Age, Neal Stepheonson \<link\> 



everything should be self-documenting, so in the back for the bibliography if it's alpha by author or title it should say that, and there should be several versions which can be used by readers based on choice, all compiled to pdf. 


all references are in raw bibtex but with source code included to compile to several different formats, several data fields are added, including

* ISBN
* LC number
* DD number
* typical price
* availability, amazon, Powell's, local book sellers, etc., code that links to your local library
* copyright information, expiration date
* size and weight 
* why the cited work is relevant to my text
* summary of the work
* author's level of familiarity with the work(did I read the whole thing, once or many times,did I write it, did I just skim it, did I use this as a reference from another work?)
* hyper links to relevant pages, the actual work for all open access
* open access or not, copyright status
* links back into the text to all places cited, link to a list with some explanation of uses of the thing, list of footnote numbers
* notes with page numbers 

in the printed version I will suppress useless shit about the publisher because fuck the publisher, they don't need the free advertising.


@Book{hicks2001,
 author    = "von Hicks, III, Michael",
 title     = "Design of a Carbon Fiber Composite Grid Structure for the GLAST
              Spacecraft Using a Novel Manufacturing Technique",
 publisher = "Stanford Press",
 year      =  2001,
 address   = "Palo Alto",
 edition   = "1st",
}

<https://docs.python.org/2/tutorial/datastructures.html>

This:

<http://okfnlabs.org/bibjson/>

is the format I think I should use.

also relevant:

https://en.wikipedia.org/wiki/JSON_Streaming

especially for object spime data

    	NON-FICTION-PHYSICS-TEXT-ELECTRODYNAMICS-GRIFFITHS{
		author	David J. Griffiths
		title	Introduction to Electrodynamics
		publisher	Addison-Wesley
		year	2012
		address 
		ISBN	978-0321856562
		dimensions	(7.6,1.1,9.2)
		dimensionUnits	inches
		tale
		lore
		3dModel
		link
	    libraryOfCongress
    	DeweyDecimal
	

    } 


    {
        "title": "Open Bibliography for Science, Technology and Medicine",
        "author":[
            {"name": "Richard Jones"},
            {"name": "Mark MacGillivray"},
            {"name": "Peter Murray-Rust"},
            {"name": "Jim Pitman"},
            {"name": "Peter Sefton"},
            {"name": "Ben O'Steen"},
            {"name": "William Waites"}
        ],
        "type": "article",
        "year": "2011",
        "journal": {"name": "Journal of Cheminformatics"},
        "link": [{"url":"http://www.jcheminf.com/content/3/1/47"}],
        "identifier": [{"type":"doi","id":"10.1186/1758-2946-3-47"}]
        "tale":
        "lore":
        "data":
        
       
    }
    
    
    
<https://www.worldcat.org/title/elementary-treatise-on-hydromechanics-with-numerous-examples/oclc/657161854&referer=brief_results>


[The Machinery of Life](http://www.worldcat.org/oclc/25787303)
Amazing intro to molecular biology very clear, very mechanical


[Slayers, saviors, servants, and sex : an expose of kingdom fungi](http://www.worldcat.org/oclc/44683496)
Great intro to fungi very useful low level reference to get started

[De Re Metallica](http://www.worldcat.org/oclc/3117789)

[decorative knots](http://www.worldcat.org/oclc/41021593)
got various plans for decorative knots and coachwipping from the denver public library

[the Spark of Life](http://www.worldcat.org/oclc/783160332)
Electricity in the Human body, great ion channel stuff

[Homemade lightning : creative experiments in electricity](http://www.worldcat.org/oclc/47126824)

[Gene cloning : an introduction](http://www.worldcat.org/oclc/41214416)

[Iron: Nature's Universal Element](https://www.worldcat.org/title/iron-natures-universal-element-why-people-need-iron-animals-make-magnets/oclc/42761950&referer=brief_results)

[Bruce Sterling's 2000 manifesto](http://www.viridiandesign.org/manifesto.html)
Really good, relevant bits, e.g.:
"With business hopeless and government stymied, we are basically left with cultural activism. The tools at hand are art, design, engineering, and basic science: human artifice, cultural and technical innovation. Granted, these may not seem particularly likely sources of a serious and successful effort to save the world. This is largely because, during the twentieth century, government and industry swelled to such tremendous high-modernist proportions that these other enterprises exist mostly in shrunken subcultural niches.

However, this doesn't have to be the case. With government crippled and industry brain-dead to any conceivable moral appeal, the future of decentered, autonomous cultural networks looks very bright. There has never been an opportunity to spread new ideas and new techniques with the alacrity that they can spread now. Human energy must turn in some direction. People will run from frustration and toward any apparent source of daylight. As the planet's levees continue to break, people will run much faster and with considerably more conviction."

It's safe to say Sterling's work is a major source of influence in my work here.