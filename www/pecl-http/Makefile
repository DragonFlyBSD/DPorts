# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: www/pecl-http/Makefile 313734 2013-03-09 17:26:27Z miwi $

PORTNAME=	http
PORTVERSION=	1.7.5
CATEGORIES=	www
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
DISTNAME=	pecl_${PORTNAME}-${PORTVERSION}
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Extended HTTP Support

LIB_DEPENDS=	curl.6:${PORTSDIR}/ftp/curl

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS+=	--with-http-curl-requests \
			--with-http-zlib-compression \
			--with-http-magic-mime

.include <bsd.port.mk>
