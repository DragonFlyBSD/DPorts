# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-pagetopdf/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	pagetopdf
PORTVERSION=	0.2
PORTREVISION=	8
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	pagetopdfplugin-${PORTVERSION}

MAINTAINER=	glarkin@FreeBSD.org
COMMENT=	Export trac wiki pages as PDFs

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		htmldoc:${PORTSDIR}/textproc/htmldoc

USE_PYTHON=	-2.7
USE_PYDISTUTILS=	easy_install
WRKSRC=			${WRKDIR}/${PORTNAME}plugin
PYDISTUTILS_PKGNAME=	TracPageToPDF
PLIST_FILES=		%%PYTHON_SITELIBDIR%%/%%PYEASYINSTALL_EGG%%

NO_STAGE=	yes
.include <bsd.port.mk>
