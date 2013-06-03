# Created by: Chin-San Huang <chinsan.tw@gmail.com>
# $FreeBSD: archivers/pecl-rar/Makefile 319297 2013-05-28 08:40:58Z miwi $

PORTNAME=	rar
PORTVERSION=	3.0.1
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
