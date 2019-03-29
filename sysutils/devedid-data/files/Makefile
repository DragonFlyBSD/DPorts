
EDIDS=	800x600.bin 1024x768.bin 1280x1024.bin 1600x1200.bin	\
	1680x1050.bin 1920x1080.bin

.SUFFIXES: .bin

all:	$(EDIDS)

clean:
	rm -f ./*.o ./*.bin ./*.crc ./*.nocrc ./*.tmp

.S.o:
	cc -c ${.IMPSRC} -o ${.TARGET}

.o.bin:
	objcopy -Obinary ${.IMPSRC} ${.PREFIX}.nocrc
	list=$$(for i in `seq 1 127`; do head -c$$i ${.PREFIX}.nocrc | \
		tail -c1 | hexdump -v -e '/1 "%02X+"'; done); \
		echo "ibase=16;100-($${list%?})%100" | bc > ${.PREFIX}.crc
	cc -c -DCRC="$$(cat ${.PREFIX}.crc)" -o ${.PREFIX}.tmp ${.PREFIX}.S
	objcopy -Obinary ${.PREFIX}.tmp ${.TARGET}
