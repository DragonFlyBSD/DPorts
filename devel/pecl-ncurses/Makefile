# New ports collection makefile for:	pecl-ncurses
# Date created:			29 Apr 2010
# Whom:				Jille Timmermans <jille@quis.cx>
#
# $FreeBSD: ports/devel/pecl-ncurses/Makefile,v 1.6 2012/12/09 06:44:08 svnexp Exp $
#

PORTNAME=	ncurses
PORTVERSION=	1.0.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	tj@FreeBSD.org
COMMENT=	A PECL extension for ncurses

LICENSE=	PHP301

USE_PHP=	yes
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
WANT_PHP_CLI=	yes
IGNORE_WITH_PHP=4 52

.include <bsd.port.mk>
