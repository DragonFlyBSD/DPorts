# New ports collection makefile for:	pecl-id3
# Date created:			2006/09/07
# Whom:				chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/audio/pecl-id3/Makefile,v 1.6 2012/11/17 05:54:41 svnexp Exp $
#

PORTNAME=	id3
PORTVERSION=	0.2
CATEGORIES=	audio pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Extension to read and write ID3 tags in MP3 files

USE_PHP=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

CONFIGURE_ARGS=	--enable-id3

.include <bsd.port.mk>
