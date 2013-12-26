# Created by: Paolo Pisati <flag@libero.it>
# $FreeBSD: net/wmnet2/Makefile 336964 2013-12-19 21:48:22Z pawel $

PORTNAME=	wmnet2
PORTVERSION=	1.06
PORTREVISION=	5
CATEGORIES=	net
MASTER_SITES=	http://fossies.org/linux/misc/old/ \
		http://linux-bsd-unix.strefa.pl/
DISTNAME=	wmnet-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Nice network monitor for WindowMaker

USES=		imake
USE_XORG=	x11 xext

PLIST_FILES=	bin/wmnet2 man/man1/wmnet2.1.gz

post-extract:
	@${LN} -sf wmnet.man ${WRKSRC}/wmnet2.man

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/wmnet2

.include <bsd.port.mk>
