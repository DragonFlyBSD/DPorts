# Created by: Marcus Alves Grando <mnag@FreeBSD.org>
# $FreeBSD: misc/pecl-timezonedb/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	timezonedb
DISTVERSION=	2013.4
CATEGORIES=	misc
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Timezone Database to be used with PHP date and time functions

LICENSE=	PHP30

CONFIGURE_ARGS=	--enable-timezonedb
USE_PHP=	yes
USE_PHPEXT=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
