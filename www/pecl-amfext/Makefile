# Created by: Piotr Rybicki <meritus@innervision.pl>
# $FreeBSD: www/pecl-amfext/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	amfext
PORTVERSION=	0.9.2
CATEGORIES=	www
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	meritus@innervision.pl
COMMENT=	Implements encoding and decoding of AMF and AMF3 messages

USE_PHP=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	amf
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

CONFIGURE_ARGS=	--enable-amf
CPPFLAGS+=	-I${LOCALBASE}/include/php/ext/standard

NO_STAGE=	yes
.include <bsd.port.mk>
