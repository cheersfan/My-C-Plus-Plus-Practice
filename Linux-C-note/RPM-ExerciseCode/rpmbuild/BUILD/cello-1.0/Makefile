#the makefile for cello
cello:
	gcc -g -o cello cello.c
clean:
	rm cello
install:
	mkdir -p $(DESTDIR)/usr/bin
	install -m -0755 cello $(DESTDIR)/usr/bin/cello
