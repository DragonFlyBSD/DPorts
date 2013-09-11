# Created by: Alexander Botero-Lowry <alex@foxybanana.com>
# $FreeBSD: audio/gxmms2/Makefile 326324 2013-09-04 21:08:13Z madpilot $

PORTNAME=	gxmms2
PORTVERSION=	0.7.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	DEBIAN
DISTNAME=	${PORTNAME}_${PORTVERSION}.orig

MAINTAINER=	madpilot@FreeBSD.org
COMMENT=	A GTK2 based XMMS2 client, written in C

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

LIB_DEPENDS=	libxmmsclient.so:${PORTSDIR}/audio/xmms2

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

USE_GNOME=	gtk20
USES=		gmake pkgconfig
ALL_TARGET=	${PORTNAME}

PLIST_FILES=	bin/gxmms2 \
		%%DATADIR%%/gxmms2_mini.xpm
PLIST_DIRS=	%%DATADIR%%

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${MKDIR} ${DATADIR}
	${INSTALL_DATA} ${WRKSRC}/gxmms2src/gxmms2_mini.xpm ${DATADIR}

.include <bsd.port.mk>
