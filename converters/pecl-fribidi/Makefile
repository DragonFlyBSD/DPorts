# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: converters/pecl-fribidi/Makefile 319219 2013-05-27 12:16:19Z ale $

PORTNAME=	fribidi
PORTVERSION=	1.2
CATEGORIES=	converters pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	ale@FreeBSD.org
COMMENT=	A PECL extension for the Unicode Bidi algorithm

LIB_DEPENDS=	fribidi.3:${PORTSDIR}/converters/fribidi

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--with-fribidi=${LOCALBASE}

.include <bsd.port.mk>
