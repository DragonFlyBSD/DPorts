# Created by: Gerrit Beine <gerrit.beine@gmx.de>
# $FreeBSD: www/trac-pagetopdf/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pagetopdf
PORTVERSION=	0.2
PORTREVISION=	9
CATEGORIES=	www devel python
MASTER_SITES=	http://www.gerritbeine.de/download/trac/
PKGNAMEPREFIX=	trac-
DISTNAME=	pagetopdfplugin-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Export trac wiki pages as PDFs

RUN_DEPENDS+=	tracd:${PORTSDIR}/www/trac \
		htmldoc:${PORTSDIR}/textproc/htmldoc

WRKSRC=			${WRKDIR}/${PORTNAME}plugin

USE_PYTHON=	2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

.include <bsd.port.mk>
