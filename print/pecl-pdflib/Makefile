# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: print/pecl-pdflib/Makefile 332107 2013-10-30 13:32:02Z ale $

PORTNAME=	pdflib
PORTVERSION=	2.1.10
CATEGORIES=	print pear
MASTER_SITES=	http://pecl.php.net/get/
PKGNAMEPREFIX=	pecl-
EXTRACT_SUFX=	.tgz
DIST_SUBDIR=	PECL

MAINTAINER=	ale@FreeBSD.org
COMMENT=	A PECL extension to create PDF on the fly

LIB_DEPENDS=	pdf.6:${PORTSDIR}/print/pdflib

USE_PHP=	gd
USE_PHP_BUILD=	yes
USE_PHPEXT=	yes
PHP_MODNAME=	pdf

CONFIGURE_ARGS=	--with-pdflib=${LOCALBASE}

.include <bsd.port.mk>
