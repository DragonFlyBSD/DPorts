# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: math/py-gnuplot/Makefile 337851 2013-12-28 11:12:56Z wg $

PORTNAME=	gnuplot
PORTVERSION=	1.8
PORTREVISION=	5
CATEGORIES=	math python
MASTER_SITES=	SF/${PORTNAME}-py/Gnuplot-py/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	gnuplot-py-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python interface to gnuplot plotting program

BUILD_DEPENDS=	${PYNUMPY}
RUN_DEPENDS=	gnuplot:${PORTSDIR}/math/gnuplot \
		${PYNUMPY}

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

PORTDOCS=	*

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@(cd ${WRKSRC}/doc && ${COPYTREE_SHARE} . ${STAGEDIR}${DOCSDIR})

.include <bsd.port.mk>
