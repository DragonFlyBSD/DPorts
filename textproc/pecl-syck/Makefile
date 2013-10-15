# Created by: Ditesh Shashikant Gathani <ditesh@gathani.org>
# $FreeBSD: textproc/pecl-syck/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	syck
PORTVERSION=	0.9.3
PORTREVISION=	1
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	miwi@FreeBSD.org
COMMENT=	A PECL extension which facilitates YAML parsing

BUILD_DEPENDS=	${LOCALBASE}/lib/libsyck.a:${PORTSDIR}/textproc/syck

USE_PHP=	spl hash
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes

CONFIGURE_ARGS=	--enable-syck

NO_STAGE=	yes
.include <bsd.port.mk>
