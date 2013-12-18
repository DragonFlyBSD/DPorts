# Created by: Chin-San Huang <chinsan.tw@gmail.com>
# $FreeBSD: archivers/pecl-rar/Makefile 335816 2013-12-07 09:01:11Z antoine $

PORTNAME=	rar
PORTVERSION=	3.0.2
CATEGORIES=	archivers pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL extension to create and read RAR files

LICENSE=	PHP301

USE_PHP=	spl
USE_PHPEXT=	yes
USE_PHP_BUILD=	yes

CONFIGURE_ARGS=	--enable-rar

.include <bsd.port.mk>
