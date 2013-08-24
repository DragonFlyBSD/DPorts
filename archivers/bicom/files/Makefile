#
# $FreeBSD: archivers/bicom/files/Makefile 300895 2012-07-14 12:56:14Z beat $
#

CXX ?=	c++

IDIR =	-I./bialib

OBJS =	bialib/mtstream.o \
	bialib/simplemodel.o \
	bialib/arithmetic.o \
	bialib/trivial.o \
	bialib/sufftree.o \
	bialib/exclude.o \
	bialib/rijndael.o \
	bicom/bicom.o

.cpp.o:
	${CXX} ${CXXFLAGS} ${IDIR} -o $@ -c $<

all:	${OBJS}
	${CXX} ${CXXFLAGS} -o bicom/bicom $>

clean:
	rm -f bicom/bicom bicom/*.o bialib/*.o core
