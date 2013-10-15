# Created by: Florian Smeets <flo@smeets.im>
# $FreeBSD: textproc/pecl-wbxml/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	wbxml
PORTVERSION=	1.0.3
CATEGORIES=	textproc pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	flo@FreeBSD.org
COMMENT=	A PECL extension that provides WBXML conversion capabilities

LIB_DEPENDS=	wbxml2.0:${PORTSDIR}/textproc/wbxml2

CONFIGURE_ARGS=	--with-wbxml=${LOCALBASE} \
		--with-libexpat-dir=${LOCALBASE}
USE_PHP=	yes
USE_PHPEXT=	yes

NO_STAGE=	yes
.include <bsd.port.mk>
