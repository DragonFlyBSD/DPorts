#
# $FreeBSD: ports/games/qccx/files/Makefile,v 1.2 2012/11/17 05:57:50 svnexp Exp $

OBJS =	cmdlib.o hash.o pr_comp.o pr_lex.o qcc.o

.cpp.o:
	${CXX} ${CXXFLAGS} -c $< -o $*.o

all:	${OBJS}
	${CXX} ${LDFLAGS} -o qccx ${OBJS}
