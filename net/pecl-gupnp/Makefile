# Created by: Sunpoet Po-Chuan Hsieh <sunpoet@FreeBSD.org>
# $FreeBSD: net/pecl-gupnp/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	gupnp
PORTVERSION=	1.0.0
CATEGORIES=	net pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	GUPnP wrapper extension

LIB_DEPENDS=	libgupnp-1.0.so:${PORTSDIR}/net/gupnp

USE_PHP=	yes
USE_PHPEXT=	yes
USES=		pkgconfig

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's| -ldl||g' ${WRKSRC}/config.m4

.include <bsd.port.mk>
