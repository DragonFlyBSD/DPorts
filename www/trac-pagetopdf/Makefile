# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-pagetopdf/Makefile 336656 2013-12-16 18:24:49Z glarkin $

PORTNAME=	pagetopdf
PORTVERSION=	0.2
PORTREVISION=	8
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	pagetopdfplugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
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
