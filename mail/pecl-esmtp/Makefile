# Created by: chinsan <chinsan.tw@gmail.com>
# $FreeBSD: mail/pecl-esmtp/Makefile 340835 2014-01-23 16:00:14Z miwi $

PORTNAME=	esmtp
PORTVERSION=	0.3.1
PORTREVISION=	1
CATEGORIES=	mail www
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	PECL ESMTP client extension

LIB_DEPENDS=	esmtp:${PORTSDIR}/mail/libesmtp

USE_PHP=	yes
USE_PHPEXT=	yes
DEFAULT_PHP_VER=53

OPTIONS_DEFINE=	RE2C
OPTIONS_DEFAULT=	RE2C
RE2C_DESC=	Use re2c to regenerate PHP parsers

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MRE2C}
BUILD_DEPENDS+=	re2c:${PORTSDIR}/devel/re2c
.endif

post-patch:
	@${REINPLACE_CMD} -e '29,34 d; 45,50 d' ${WRKSRC}/config.m4

.include <bsd.port.mk>
