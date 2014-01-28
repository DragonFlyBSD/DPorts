# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: audio/xmms-tfmx/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	xmms-tfmx
PORTVERSION=	0.5
PORTREVISION=	4
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}.tar.gz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	XMMS Input plugin for playing TFMX tunes

LIB_DEPENDS=	libxmms.so:${PORTSDIR}/multimedia/xmms

USE_GNOME=	gtk12 lthack
USES=		gmake
USE_AUTOTOOLS=	libtool

PLIST_FILES=	lib/xmms/Input/libtfmx.so

do-install:
	@${MKDIR} ${STAGEDIR}${PREFIX}/lib/xmms/Input
	${INSTALL_DATA} ${WRKSRC}/src/.libs/libtfmx.so ${STAGEDIR}${PREFIX}/lib/xmms/Input

.include <bsd.port.mk>
