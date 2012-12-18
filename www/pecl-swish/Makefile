# New ports collection makefile for:	pecl-swish
# Date created:			2007/03/02
# Whom:				chinsan
#
# $FreeBSD: ports/www/pecl-swish/Makefile,v 1.8 2012/11/17 06:02:57 svnexp Exp $
#

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

.include <bsd.port.mk>
