# New ports collection makefile for:	pecl-syck
# Date created:			7 Aug 2007
# Whom:				Ditesh Shashikant Gathani <ditesh@gathani.org>
#
# $FreeBSD: ports/textproc/pecl-syck/Makefile,v 1.6 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	syck
PORTVERSION=	0.9.3
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension which facilitates YAML parsing

BUILD_DEPENDS=	${LOCALBASE}/lib/libsyck.a:${PORTSDIR}/textproc/syck

USE_PHP=	spl hash
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

CONFIGURE_ARGS=	--enable-syck

.include <bsd.port.mk>
