# Created by: wen
# $FreeBSD: databases/pecl-mongo/Makefile 327717 2013-09-20 16:13:47Z bapt $

PORTNAME=	mongo
PORTVERSION=	1.4.1
CATEGORIES=	databases pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL classes for Mongo Database Driver

LICENSE=	AL2

USE_PHP=	yes
USE_PHP_BUILD=	spl
USE_PHPIZE=	yes
USE_PHPEXT=	yes
CONFIGURE_ARGS=	--enable-mongo=${LOCALBASE}
SUB_FILES=	pkg-message

NO_STAGE=	yes
post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
