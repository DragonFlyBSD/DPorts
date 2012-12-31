# Created by: bf <bf@FreeBSD.org>
# $FreeBSD: ports/math/libR/Makefile,v 1.3 2012/12/18 23:19:34 svnexp Exp $

PORTNAME=	libR

COMMENT=	The static libR library from R

DESCR=	${.CURDIR}/pkg-descr
LIBR_SLAVEPORT=	yes
MASTERDIR=	${.CURDIR}/../R
PLIST=	${.CURDIR}/pkg-plist
PLIST_FILES=	lib/R/lib/libR.a
PLIST_DIRSTRY=	lib/R/lib lib/R

.include "${MASTERDIR}/Makefile"
