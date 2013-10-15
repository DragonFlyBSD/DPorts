# Created by: Matthew Hunt <mph@FreeBSD.org>
# $FreeBSD: games/xzip/Makefile 327804 2013-09-21 11:06:03Z dinoex $

PORTNAME=	xzip
PORTVERSION=	1.8.2
PORTREVISION=	2
CATEGORIES=	games
MASTER_SITES=	ftp://ftp.ifarchive.org/if-archive/infocom/interpreters/zip/ \
		http://www.ifarchive.org/if-archive/infocom/interpreters/zip/ \
		http://www.eblong.com/zarf/ftp/
DISTNAME=	xzip182
EXTRACT_SUFX=	.tar.Z

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	An Infocom game interpreter that runs under X11

NO_STAGE=	yes

USE_XORG=	x11
WRKSRC=		${WRKDIR}/xzip
ALL_TARGET=

MAN1=		xzip.1
PLIST_FILES=	bin/xzip

.include <bsd.port.mk>
