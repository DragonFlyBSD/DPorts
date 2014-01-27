# Created by: bf <bf@FreeBSD.org>
# $FreeBSD: math/libR/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	libR

COMMENT=	The static libR library from R

DESCR=	${.CURDIR}/pkg-descr
LIBR_SLAVEPORT=	yes
MASTERDIR=	${.CURDIR}/../R
PLIST=	${.CURDIR}/pkg-plist
PLIST_FILES=	lib/R/lib/libR.a
PLIST_DIRSTRY=	lib/R/lib lib/R

NO_STAGE=	yes
.include "${MASTERDIR}/Makefile"
