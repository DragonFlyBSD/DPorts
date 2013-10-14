# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: devel/pecl-intl/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	intl
PORTVERSION=	3.0.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to support Internationalization(ICU)

LICENSE=	PHP301

LIB_DEPENDS=	icui18n:${PORTSDIR}/devel/icu

USE_PHP=	yes
USE_PHPEXT=	yes
#IGNORE_WITH_PHP=52

NO_STAGE=	yes
.include <bsd.port.mk>
