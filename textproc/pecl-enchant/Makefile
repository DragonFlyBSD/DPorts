# Ports collection makefile for:  pear-enchant
# Date created:			  17 April 2008
# Whom:				  Wen heping <wenheping@gmail.com>
#
# $FreeBSD: ports/textproc/pecl-enchant/Makefile,v 1.7 2012/11/17 06:02:15 svnexp Exp $
#

PORTNAME=	enchant
DISTVERSION=	1.1.0
CATEGORIES=	textproc devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Libenchant Binder that Support Near All Spelling Tools

LIB_DEPENDS=	enchant.1:${PORTSDIR}/textproc/enchant

CONFIGURE_ARGS+=--with-enchant=${LOCALBASE}

USE_PHP=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	${PORTNAME}
DEFAULT_PHP_VER=53
IGNORE_WITH_PHP=5

.include <bsd.port.mk>
