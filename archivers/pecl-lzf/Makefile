# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: archivers/pecl-lzf/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	lzf
PORTVERSION=	1.6.2
CATEGORIES=	archivers pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Handles LZF de/compression

NO_STAGE=	yes
USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-lzf
WRKSRC=		${WRKDIR}/${DISTNAME:tu}

OPTIONS_DEFINE=		BETTER_COMPRESSION
BETTER_COMPRESSION_DESC=	Better compression ratio

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MBETTER_COMPRESSION}
CONFIGURE_ARGS+=	--enable-lzf-better-compression
.endif

.include <bsd.port.mk>
