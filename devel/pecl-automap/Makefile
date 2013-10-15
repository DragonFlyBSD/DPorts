# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: devel/pecl-automap/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	automap
PORTVERSION=	2.1.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension offering a fast map-based autoloader

LICENSE=	PHP301

USE_PHP=	spl
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	automap

CONFIGURE_ARGS=	--enable-automap

NO_STAGE=	yes
.include <bsd.port.mk>
