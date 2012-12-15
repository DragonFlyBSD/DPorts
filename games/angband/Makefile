# New ports collection makefile for:   angband
# Date created:        21 Feb 1997
# Whom:                Matthew Hunt <mph@pobox.com>
#
# $FreeBSD: ports/games/angband/Makefile,v 1.45 2012/11/17 05:57:31 svnexp Exp $
#

PORTNAME=	angband
PORTVERSION=	3.3.2
CATEGORIES=	games
MASTER_SITES=	http://rephial.org/downloads/3.3/
DISTNAME=	${PORTNAME}-v${PORTVERSION}

MAINTAINER=	pav@FreeBSD.org
COMMENT=	Rogue-like game with color, X11 support

USE_GMAKE=	yes
ALL_TARGET=	#
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-setgid=games --disable-sdl --disable-sdl-mixer --with-varpath=/var/games/angband
.if !defined(WITHOUT_X11)
USE_XORG=	sm x11
CONFIGURE_ARGS+=	--with-x
.else
CONFIGURE_ARGS+=	--with-x=no
.endif
CONFIGURE_ENV=	ac_cv_path_mkdir=mkdir
CPP=		cc -E

pre-fetch:
.if !defined(WITHOUT_X11)
	@${ECHO_MSG} "You could define WITHOUT_X11, if you don't want X support"
.else
	@${ECHO_MSG} "Building without X support"
.endif

post-patch:
	@${REINPLACE_CMD} -e 's|-Wno-missing-field-initializers ||; s|/games$$|/bin|' ${WRKSRC}/configure

.include <bsd.port.mk>
