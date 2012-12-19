# New ports collection makefile for:	pecl-xslcache
# Date created:			2007/10/28
# Whom:				chinsan
#
# $FreeBSD: ports/textproc/pecl-xslcache/Makefile,v 1.6 2012/11/17 06:02:16 svnexp Exp $
#

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

.include <bsd.port.mk>
