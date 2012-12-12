#
# $FreeBSD: ports/games/frikqcc/files/Makefile,v 1.3 2012/11/17 05:57:39 svnexp Exp $

CFLAGS+=	-DINLINE

COBJS=	compiler/cmdlib.o \
	compiler/hash.o \
	compiler/main.o \
	compiler/pr_comp.o \
	compiler/pr_lex.o \
	compiler/qcc.o

DECOBJS= decompiler/cmdlib.o \
	decompiler/decomp.o \
	decompiler/main.o

.c.o:
	${CC} ${CFLAGS} -o $@ -c $<

all:	c dec

c:	${COBJS}
	${CC} ${LDFLAGS} -o frikqcc $>

dec:	${DECOBJS}
	${CC} ${LDFLAGS} -o frikqcdec $>
