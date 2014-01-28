# Created by: john@jnielsen.net
# $FreeBSD: deskutils/autocutsel/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	autocutsel
PORTVERSION=	0.9.0
PORTREVISION=	2
CATEGORIES=	deskutils
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	autocutsel

MAINTAINER=	john@jnielsen.net
COMMENT=	Synchronizes the two copy/paste buffers used by X applications

USE_XORG=	x11 xaw xext
GNU_CONFIGURE=	yes
USE_GMAKE=	yes

PLIST_FILES=	bin/autocutsel \
		bin/cutsel

NO_STAGE=	yes
.include <bsd.port.mk>
