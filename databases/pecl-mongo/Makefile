# Created by: wen
# $FreeBSD: ports/databases/pecl-mongo/Makefile,v 1.19 2012/11/17 05:55:18 svnexp Exp $

PORTNAME=	mongo
PORTVERSION=	1.2.12
CATEGORIES=	databases pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL classes for Mongo Database Driver

LICENSE=	AL2

IGNORE_WITH_PHP=4

USE_PHP=	yes
USE_PHP_BUILD=	spl
USE_PHPIZE=	yes
USE_PHPEXT=	yes

SUB_FILES=	pkg-message

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
