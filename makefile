#makefile for Final
#Author: Jose L Sanchez


CC=g++ -std=c++11
CFLAGS=-Wall

all:output

output: actor.cpp apartment.cpp container.cpp detective.cpp fbiagent.cpp interrogate.cpp items.cpp jail.cpp junkyard.cpp mindhunter.cpp policestation.cpp space.cpp utility.cpp
	$(CC)  actor.cpp apartment.cpp container.cpp detective.cpp fbiagent.cpp interrogate.cpp items.cpp jail.cpp junkyard.cpp mindhunter.cpp policestation.cpp space.cpp utility.cpp -o output
	

actor.o: actor.ccp
	$(CC) $(CFLAGS) actor.cpp

apartment.o: apartment.ccp
	$(CC) $(CFLAGS) apartment.cpp

container.o: container.ccp
	$(CC) $(CFLAGS) container.cpp

detective.o: detective.ccp
	$(CC) $(CFLAGS) detective.cpp

fbiagent.o: fbiagent.ccp
	$(CC) $(CFLAGS) fbiagent.cpp

interrogate.o: interrogate.ccp
	$(CC) $(CFLAGS) interrogate.cpp

items.o: items.ccp
	$(CC) $(CFLAGS) items.cpp

jail.o: jail.ccp
	$(CC) $(CFLAGS) jail.cpp

junkyard.o: junkyard.ccp
	$(CC) $(CFLAGS) junkyard.cpp

mindhunter.o: mindhunter.ccp
	$(CC) $(CFLAGS) mindhunter.cpp

policestation.o: policestation.ccp
	$(CC) $(CFLAGS) policestation.cpp

space.o: space.ccp
	$(CC) $(CFLAGS) space.cpp

utility.o: utility.cpp
	$(CC) $(CFLAGS) utility.cpp

clean:
	rm *o output
