# Created by: Sébastien Santoro <dereckson@gmail.com>
# $FreeBSD: devel/pecl-parsekit/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	parsekit
PORTVERSION=	1.3.0
CATEGORIES=	devel
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	dereckson@gmail.com
COMMENT=	Extension for opcodes runtime analysis 

LICENSE=	PHP301

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-parsekit
CFLAGS+=	-I${LOCALBASE}/include

NO_STAGE=	yes
.include <bsd.port.mk>
