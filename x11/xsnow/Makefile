# Created by: jmz
# $FreeBSD: x11/xsnow/Makefile 322008 2013-06-28 22:51:40Z bapt $

PORTNAME=	xsnow
PORTVERSION=	1.42
PORTREVISION=	1
CATEGORIES=	x11
MASTER_SITES=	http://dropmix.xs4all.nl/rick/Xsnow/

MAINTAINER=	johans@FreeBSD.org
COMMENT=	Create a snowy and Santa-y desktop

USES=		imake
USE_XORG=	xpm
MAN6=		xsnow.6
PLIST_FILES=	bin/xsnow

post-configure:
	@${REINPLACE_CMD} \
		-e 's: BINDIR .*:BINDIR=${PREFIX}/bin:' \
		-e 's: MANDIR .*:MANDIR=${PREFIX}/man/man6:' \
		-e 's: MANSUFFIX .*:MANSUFFIX=6:' \
		-e 's/^Makefile::/^Makefile:/' \
			${WRKSRC}/Makefile

.include <bsd.port.mk>
