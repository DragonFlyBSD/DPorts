#
# $FreeBSD: games/qccx/files/Makefile 340722 2014-01-22 17:00:46Z mat $

OBJS =	cmdlib.o hash.o pr_comp.o pr_lex.o qcc.o

.cpp.o:
	${CXX} ${CXXFLAGS} -c $< -o $*.o

all:	${OBJS}
	${CXX} ${LDFLAGS} -o qccx ${OBJS}
