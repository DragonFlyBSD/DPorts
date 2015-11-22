
EDIDS=	800x600.bin 1024x768.bin 1280x1024.bin 1600x1200.bin	\
	1680x1050.bin 1920x1080.bin

.SUFFIXES: .bin
.o.bin:
	objcopy -Obinary ${.IMPSRC} ${.TARGET}

all:	$(EDIDS)

clean:
	rm -f ./*.o ./*.bin
