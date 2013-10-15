# Created by: johnpupu <johnpupu@gmail.com>
# $FreeBSD: www/pecl-yaf/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	yaf
PORTVERSION=	2.2.9
CATEGORIES=	www
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	johnpupu@gmail.com
COMMENT=	MVC framework written as a C PHP extension

LICENSE=	PHP301

LIB_DEPENDS=	pcre:${PORTSDIR}/devel/pcre

CFLAGS+=	-I${LOCALBASE}/include
CONFIGURE_ARGS=	--with-php-config=${PREFIX}/bin/php-config

USE_PHP=	yes
USE_PHPEXT=	yes
USE_PHPIZE=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
