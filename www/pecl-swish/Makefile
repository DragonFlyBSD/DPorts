# Created by: chinsan
# $FreeBSD: www/pecl-swish/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	swish
PORTVERSION=	0.5.0
CATEGORIES=	www pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Swish-e bindings for PHP

BUILD_DEPENDS=	swish-config:${PORTSDIR}/www/swish-e
RUN_DEPENDS:=	swish-config:${PORTSDIR}/www/swish-e

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-swish --with-swish=${LOCALBASE}/bin

NO_STAGE=	yes
.include <bsd.port.mk>
