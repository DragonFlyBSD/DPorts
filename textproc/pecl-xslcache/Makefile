# Created by: chinsan
# $FreeBSD: textproc/pecl-xslcache/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	xslcache
PORTVERSION=	0.7.1
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
DIST_SUBDIR=	PECL
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Caches the parsed XSL stylesheet between sessions

USE_PHP=	dom xml xsl
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

NO_STAGE=	yes
.include <bsd.port.mk>
