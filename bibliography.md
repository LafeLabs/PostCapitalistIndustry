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


