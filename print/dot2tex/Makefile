# New ports collection makefile for:	dot2tex
# Date created:		2010-09-14
# Whom:			Romain Tartiere <romain@FreeBSD.org>
#
# $FreeBSD: ports/print/dot2tex/Makefile,v 1.3 2012/11/17 06:00:48 svnexp Exp $
#

PORTNAME=	dot2tex
PORTVERSION=	2.8.7
PORTREVISION=	1
CATEGORIES=	print
MASTER_SITES=	${MASTER_SITE_GOOGLE_CODE}

MAINTAINER=	romain@FreeBSD.org
COMMENT=	A Graphviz to LaTeX converter

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pyparsing.py:${PORTSDIR}/devel/py-parsing \
		dot:${PORTSDIR}/graphics/graphviz

USE_PYDISTUTILS=yes
USE_PYTHON=	yes
# The .tar.gz sucks!
USE_ZIP=	yes

.include <bsd.port.mk>
