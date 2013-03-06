# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: ports/net/pecl-oauth/Makefile,v 1.10 2013/02/01 07:57:37 svnexp Exp $

PORTNAME=	oauth
PORTVERSION=	1.2.3
CATEGORIES=	net pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A Php Interface to the OAuth Protocol

BUILD_DEPENDS=	${LOCALBASE}/include/curl/curl.h:${PORTSDIR}/ftp/curl

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

USE_PHP=	yes
USE_PHPEXT=	yes

.include <bsd.port.mk>
