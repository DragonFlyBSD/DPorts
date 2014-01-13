# Created by: Gasol Wu <gasol.wu@gmail.com>
# $FreeBSD: security/pecl-crypto/Makefile 338894 2014-01-06 15:11:54Z sunpoet $

PORTNAME=	crypto
PORTVERSION=	0.1.1
CATEGORIES=	security
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	gasol.wu@gmail.com
COMMENT=	Objective wrapper for OpenSSL Crypto Library

LICENSE=	PHP301

CONFIGURE_ARGS=	--with-crypto
USE_OPENSSL=	yes
USE_PHP=	yes
USE_PHPEXT=	yes
USE_PHPIZE=	yes

.include <bsd.port.mk>
