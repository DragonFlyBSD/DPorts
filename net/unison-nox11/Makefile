# Created by: Boris Samorodov <bsam@FreeBSD.org>
# $FreeBSD: ports/net/unison-nox11/Makefile,v 1.5 2012/11/17 22:30:21 svnexp Exp $

PORTREVISION=	0
PKGNAMESUFFIX=	-nox11

MAINTAINER=	bsam@FreeBSD.org
COMMENT=	A user-level file synchronization tool (without x11 stuff)

CONFLICTS=	unison-[0-9]* unison-devel-[0-9]*

OPTIONS_EXCLUDE=	X11
OPTIONS_DEFAULT=	DOCS
MASTERDIR=	${.CURDIR}/../unison

.include "${MASTERDIR}/Makefile"
