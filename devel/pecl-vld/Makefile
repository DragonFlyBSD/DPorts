# Created by: chinsan
# $FreeBSD: devel/pecl-vld/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	vld
PORTVERSION=	0.11.2
CATEGORIES=	devel pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	Dump the internal representation of PHP scripts

USE_PHP=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-vld

NO_STAGE=	yes
.include <bsd.port.mk>
