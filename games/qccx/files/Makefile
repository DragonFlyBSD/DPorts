#
# $FreeBSD: games/qccx/files/Makefile 300896 2012-07-14 13:54:48Z beat $

OBJS =	cmdlib.o hash.o pr_comp.o pr_lex.o qcc.o

.cpp.o:
	${CXX} ${CXXFLAGS} -c $< -o $*.o

all:	${OBJS}
	${CXX} ${LDFLAGS} -o qccx ${OBJS}
