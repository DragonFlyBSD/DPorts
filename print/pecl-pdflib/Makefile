# Created by: Alex Dupre <ale@FreeBSD.org>
# $FreeBSD: print/pecl-pdflib/Makefile 327765 2013-09-20 22:43:59Z bapt $

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

NO_STAGE=	yes
.include <bsd.port.mk>
