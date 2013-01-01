# New ports collection makefile for:	burgerspace
# Date created:			Apr 13, 2001
# Whom:				Mark Pulford <mark@kyne.com.au>
#
# $FreeBSD: ports/games/burgerspace/Makefile,v 1.33 2012/11/17 05:57:34 svnexp Exp $
#

PORTNAME=	burgerspace
PORTVERSION=	1.9.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	http://perso.b2b2c.ca/sarrazip/dev/ \
		LOCAL/martymac

MAINTAINER=	martymac@FreeBSD.org
COMMENT=	A BurgerTime clone

LICENSE=	GPLv2

LIB_DEPENDS=	flatzebra:${PORTSDIR}/devel/flatzebra

USE_SDL=	mixer sdl
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN6=		burgerspace.6 burgerspace-server.6
PORTDOCS=	AUTHORS COPYING INSTALL NEWS README THANKS TODO

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|^pkgsounddir =.*|pkgsounddir = ${DATADIR}/sounds|' \
		${WRKSRC}/src/Makefile.in
	@${REINPLACE_CMD} -e 's|docdir = .*|docdir = ${DOCSDIR}|' \
		${WRKSRC}/Makefile.in
.if empty(PORT_OPTIONS:MDOCS)
	@${REINPLACE_CMD} -e '/^install-data-am/s|install-docDATA||' \
		${WRKSRC}/Makefile.in
.endif

.include <bsd.port.mk>
