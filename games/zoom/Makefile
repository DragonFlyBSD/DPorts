# Created by: Jan Stocker <Jan.Stocker@t-online.de>
# $FreeBSD: games/zoom/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	zoom
PORTVERSION=	1.1.5
PORTREVISION=	1
CATEGORIES=	games
MASTER_SITES=	http://www.logicalshift.co.uk/unix/zoom/

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Z-Interpreter for X with full V6 support

LIB_DEPENDS=	libt1.so:${PORTSDIR}/devel/t1lib \
		libpng15.so:${PORTSDIR}/graphics/png

USES=		gmake perl5
GNU_CONFIGURE=	yes
USE_CSTD=	gnu89
USE_XORG=	xft

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

PLIST_FILES=	bin/zoom %%DATADIR%%/zoomrc
PLIST_DIRS=	%%DATADIR%%

NO_STAGE=	yes
.include <bsd.port.mk>
