# Created by: Boris Samorodov <bsam@FreeBSD.org>
# $FreeBSD: net/unison-nox11/Makefile 319004 2013-05-24 18:21:00Z bsam $

PORTREVISION=	0
PKGNAMESUFFIX=	-nox11

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	User-level file synchronization tool (without x11 stuff)

CONFLICTS=	unison-[0-9]* unison-devel-[0-9]*

OPTIONS_EXCLUDE=	X11
OPTIONS_DEFAULT=	DOCS
MASTERDIR=	${.CURDIR}/../unison

.include "${MASTERDIR}/Makefile"
