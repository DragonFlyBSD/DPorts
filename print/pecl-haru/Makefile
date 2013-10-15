# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: print/pecl-haru/Makefile 327765 2013-09-20 22:43:59Z bapt $

PORTNAME=	haru
PORTVERSION=	1.0.4
CATEGORIES=	print pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension to Haru PDF functions

BUILD_DEPENDS=	${LOCALBASE}/include/hpdf.h:${PORTSDIR}/print/libharu
RUN_DEPENDS:=	${LOCALBASE}/include/hpdf.h:${PORTSDIR}/print/libharu

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS+=	--with-haru=${LOCALBASE}
CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS+=	CFLAGS="${CFLAGS}" LDFLAGS="${LDFLAGS}"

NO_STAGE=	yes
.include <bsd.port.mk>
