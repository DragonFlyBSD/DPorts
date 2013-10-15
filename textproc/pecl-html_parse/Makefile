# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: textproc/pecl-html_parse/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	html_parse
PORTVERSION=	1.0.0
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension for the ekhtml library

BUILD_DEPENDS=	${LOCALBASE}/lib/libekhtml.a:${PORTSDIR}/textproc/ekhtml
RUN_DEPENDS=	${LOCALBASE}/lib/libekhtml.a:${PORTSDIR}/textproc/ekhtml

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

CONFIGURE_ARGS=	--enable-html_parse

NO_STAGE=	yes
.include <bsd.port.mk>
