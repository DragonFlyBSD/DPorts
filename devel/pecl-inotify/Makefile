# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: ports/devel/pecl-inotify/Makefile,v 1.1 2012/11/22 18:54:02 svnexp Exp $

PORTNAME=	inotify
PORTVERSION=	0.1.6
CATEGORIES=	devel
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	This extension allows to use inotify functions in a PHP scripts

LICENSE=	PHP301

LIB_DEPENDS=	inotify:${PORTSDIR}/devel/libinotify

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPIZE=	yes
USE_PHPEXT=	yes
IGNORE_WITH_PHP=4

.include <bsd.port.mk>
