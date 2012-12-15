# Created by: jmz
# $FreeBSD: ports/games/golddig/Makefile,v 1.20 2012/11/17 05:57:40 svnexp Exp $

PORTNAME=	golddig
PORTVERSION=	2.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	ftp://qiclab.scn.rain.com/pub/games/
DISTNAME=	golddig2
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Getting the Gold and Avoiding Death

MAN6=		golddig.6
USE_XORG=	x11

pre-patch:
	@(cd ${WRKSRC}; for i in 245 244 246 247; do \
	    ${AWK} '{if (/^#!/) x++} {if(x) print $$0'} $$i| /bin/sh; \
	  done; ${MV} golddig2/* .)

pre-install:
	@${MKDIR} ${PREFIX}/lib/golddig

.include <bsd.port.mk>
