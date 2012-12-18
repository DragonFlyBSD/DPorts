# New ports collection makefile for:	pecl-intl
# Date created:			June 28, 2008
# Whom:				Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/devel/pecl-intl/Makefile,v 1.15 2012/11/17 05:56:40 svnexp Exp $
#

PORTNAME=	intl
PORTVERSION=	2.0.0
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to support Internationalization(ICU)

LICENSE=	PHP301

LIB_DEPENDS=	icui18n.48:${PORTSDIR}/devel/icu

USE_PHP=	yes
USE_PHPEXT=	yes
IGNORE_WITH_PHP=52

.include <bsd.port.mk>
