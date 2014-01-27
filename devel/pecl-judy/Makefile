# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: devel/pecl-judy/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	judy
PORTVERSION=	1.0.2
CATEGORIES=	devel
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
DISTNAME=	Judy-${PORTVERSION}
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	PHP Judy implements sparse dynamic arrays

LICENSE=	PHP301

RUN_DEPENDS=	Judy>=0:${PORTSDIR}/devel/judy
BUILD_DEPENDS=	Judy>=0:${PORTSDIR}/devel/judy

CONFIGURE_ARGS=	--with-judy=${LOCALBASE}
USE_PHP=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
