# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: devel/pecl-params/Makefile 340830 2014-01-23 15:12:50Z miwi $

PORTNAME=	params
PORTVERSION=	1.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension for a userspace equivalent of zend_parse_parameters()

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-params

.include <bsd.port.mk>
