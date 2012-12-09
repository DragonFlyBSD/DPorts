# New ports collection makefile for:	urwfonts-ttf
# Date created:				18 February 2003
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/x11-fonts/urwfonts-ttf/Makefile,v 1.10 2012/11/17 06:03:29 svnexp Exp $
#

PORTNAME=	urwfonts-ttf
PORTVERSION=	1.0.7b18
PORTREVISION=	2
CATEGORIES=	x11-fonts
MASTER_SITES=	ftp://ftp.izmiran.rssi.ru/pub/fonts/urw/
DISTNAME=	urw-fonts-${PORTVERSION:S/b/pre/}-ttf

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Unicode TrueType fonts from URW extended by Valek Filippov

DISABLE_SIZE=	yes
NO_WRKSUBDIR=	yes

USE_BZIP2=	yes
NO_BUILD=	yes

do-install:
	${MKDIR} ${PREFIX}/lib/X11/fonts/urwfonts-ttf
	${INSTALL_DATA} ${WRKSRC}/*.ttf ${WRKSRC}/fonts.* ${PREFIX}/lib/X11/fonts/urwfonts-ttf
	${INSTALL_DATA} ${WRKSRC}/COPYING ${WRKSRC}/README ${PREFIX}/lib/X11/fonts/urwfonts-ttf

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
