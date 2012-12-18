# Ports collection makefile for:	pecl-http
# Date created:		23 July 2008
# Whom:			Wen Heping <wenheping@gmail.com>
#
# $FreeBSD: ports/www/pecl-http/Makefile,v 1.13 2012/11/17 06:02:57 svnexp Exp $
#

PORTNAME=	http
PORTVERSION=	1.7.4
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
