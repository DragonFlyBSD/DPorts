# New ports collection makefile for:	py-genshi
# Date created:		2007-01-23
# Whom:			Nicola Vitale <nivit@email.it>
#
# $FreeBSD: ports/textproc/py-genshi/Makefile,v 1.13 2012/11/17 06:02:17 svnexp Exp $
#

PORTNAME=	Genshi
PORTVERSION=	0.6
PORTREVISION=	0
#PORTEPOCH=	0
CATEGORIES=	textproc www python
MASTER_SITES=	http://ftp.edgewall.com/pub/${PORTNAME:tl}/ \
		http://nivi.interfree.it/distfiles/${PORTNAME:tl}/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	nivit@FreeBSD.org
COMMENT=	Python toolkit for stream-based generation of output for the web

USE_PYTHON=	yes
USE_PYDISTUTILS=	easy_install

DOCSDIR=	${PREFIX}/share/doc/${PKGNAMEPREFIX}${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/${PKGNAMEPREFIX}${PORTNAME}

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC}/doc/ && ${COPYTREE_SHARE} . ${DOCSDIR}
.endif

.if !defined(NOPORTEXAMPLES)
	${MKDIR} ${EXAMPLESDIR}
	cd ${WRKSRC}/examples/ && ${COPYTREE_SHARE} . ${EXAMPLESDIR}
.endif

.include <bsd.port.mk>
