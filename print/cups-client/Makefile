# $FreeBSD: print/cups-client/Makefile 313559 2013-03-07 03:25:10Z bdrewery $

CATEGORIES=	print

MAINTAINER=	c.petrik.sosa@gmail.com

MASTERDIR?=	${.CURDIR}/../cups-base
 
CUPS_CLIENT=	yes

.if exists(${.CURDIR}/Makefile.local)
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
