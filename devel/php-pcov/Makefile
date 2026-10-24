PORTNAME=	pcov
DISTVERSIONPREFIX=	v
DISTVERSION=	1.0.12
PORTREVISION=	1
CATEGORIES=	devel
PKGNAMEPREFIX=	${PHP_PKGNAMEPREFIX}

MAINTAINER=	einar@isnic.is
COMMENT=	Self contained php-code-coverage compatible driver for PHP
WWW=		https://github.com/krakjoe/pcov

LICENSE=	PHP301
LICENSE_FILE=	${WRKSRC}/LICENSE

LIB_DEPENDS=	libpcre2-8.so:devel/pcre2

USES=		php:ext localbase pkgconfig
USE_GITHUB=	yes
GH_ACCOUNT=	krakjoe
IGNORE_WITH_PHP=	86

.include <bsd.port.mk>
