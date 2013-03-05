# $FreeBSD: ports/x11-fonts/urwfonts/Makefile,v 1.15 2013/01/26 15:07:30 svnexp Exp $

PORTNAME=	urwfonts
PORTVERSION=	1.0
PORTREVISION=	3
CATEGORIES=	x11-fonts
MASTER_SITES=	ftp://ftp.gimp.org/pub/gimp/fonts/
DISTNAME=	urw-fonts

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Another font package for X

RUN_DEPENDS=	fc-cache:${PORTSDIR}/x11-fonts/fontconfig

NO_WRKSUBDIR=	yes
NO_BUILD=	yes

post-extract:
	@${CHMOD} ${SHAREMODE} ${WRKDIR}/URW/*

post-install:
	@command fc-cache -v ${PREFIX}/lib/X11/fonts/URW || true
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
