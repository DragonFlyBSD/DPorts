# $FreeBSD: print/cups-image/Makefile 327765 2013-09-20 22:43:59Z bapt $

CATEGORIES=	print

MAINTAINER=	c.petrik.sosa@gmail.com

MASTERDIR?=	${.CURDIR}/../cups-base
 
CUPS_IMAGE=	yes

.if exists(${.CURDIR}/Makefile.local)
NO_STAGE=	yes
.include "${.CURDIR}/Makefile.local"
.endif

.include "${MASTERDIR}/Makefile"
