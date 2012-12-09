# New ports collection makefile for:	gpc
# Date created:		22 October 2005
# Whom:			Mikhail Teterin
#
# $FreeBSD: ports/devel/libgpc/Makefile,v 1.5 2012/11/17 05:55:54 svnexp Exp $
#

PORTNAME=	libgpc
PORTVERSION=	2.32
CATEGORIES=	devel math graphics
MASTER_SITES=	ftp://ftp.cs.man.ac.uk/pub/toby/gpc/
DISTNAME=	gpc${PORTVERSION:S/.//}

MAINTAINER=	mi@aldan.algebra.com
COMMENT=	Generic Polygon Clipper

USE_ZIP=	yes
PLIST_FILES=	lib/libgpc.so.2	\
		lib/libgpc.so	lib/libgpc.a	\
		include/gpc.h
USE_LDCONFIG=	yes
NO_CDROM=	Can't be used for profit without permission

MAKEFILE=	${FILESDIR}/BSDmakefile

EXTRACT_BEFORE_ARGS=-qoa

.include <bsd.port.mk>
