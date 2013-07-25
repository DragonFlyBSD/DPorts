# $FreeBSD: archivers/pear-Horde_Compress/Makefile 323135 2013-07-16 23:00:57Z mm $

PORTNAME=	Horde_Compress
PORTVERSION=	2.0.4
CATEGORIES=	archivers www pear
PKGNAMEPREFIX=	pear-

MAINTAINER=	horde@FreeBSD.org
COMMENT=	Horde Compression API

OPTIONS_DEFAULT=	ZLIB
OPTIONS_DEFINE=		ZLIB
ZLIB_DESC=	Depend on PHP zlib extension

USE_HORDE_RUN=	Horde_Exception \
		Horde_Translation \
		Horde_Util \
		Horde_Stream_Filter

.include <bsd.port.pre.mk>

.if ${PORT_OPTIONS:MZLIB}
USE_PHP+=	zlib
.endif

.include "${PORTSDIR}/devel/pear-channel-horde/bsd.horde.mk"
.include <bsd.port.post.mk>
