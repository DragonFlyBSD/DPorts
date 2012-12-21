# New ports collection makefile for:	py-graphviz
# Date created:		25 December 2001
# Whom:			Hye-Shik Chang <perky@fallin.lv>
#
# $FreeBSD: ports/graphics/py-graphviz/Makefile,v 1.27 2012/11/17 05:58:20 svnexp Exp $

PORTNAME=	graphviz
PORTVERSION=	1.1
PORTREVISION=	1
CATEGORIES=	graphics python
MASTER_SITES=	CHEESESHOP \
		http://networkx.lanl.gov/download/pygraphviz/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	pygraphviz-${PORTVERSION}

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	Python interface to GraphViz agraph

BUILD_DEPENDS=	dot:${PORTSDIR}/graphics/graphviz
RUN_DEPENDS=	dot:${PORTSDIR}/graphics/graphviz

USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	pygraphviz

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's+%%LOCALBASE%%+${LOCALBASE}+; \
		s+^docdirbase.*=.*+docdirbase = "${DOCSDIR:S/${PREFIX}\///}"+' ${WRKSRC}/setup.py

.include <bsd.port.mk>
