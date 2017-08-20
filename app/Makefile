classes = classes/Speak.cpp
libs = -lportaudio -lespeak
CFLAGS = -O2 -Wall

espeak:
	cd libs/espeak/src && $(MAKE) install
	
podofo:
	# TODO

all: espeak
	g++ $(classes) $(libs) $(CFLAGS)
