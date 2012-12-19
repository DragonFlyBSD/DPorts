# ex:ts=8
# Ports collection Makefile for:	xmltools
# Date created:			Jan 4, 2002
# Whom:				ijliao
#
# $FreeBSD: ports/textproc/py-xmltools/Makefile,v 1.24 2012/11/17 06:02:18 svnexp Exp $
#

PORTNAME=	xmltools
PORTVERSION=	1.4.0
PORTREVISION=	8
CATEGORIES=	textproc python
MASTER_SITES=	LOGILAB
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	High level XML tools for Python

USE_GNOME=	pygtk2
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

.include <bsd.port.pre.mk>

RUN_DEPENDS=	${PYXML}

post-patch:
	${REINPLACE_CMD} 's/from.*import.*nested_scopes//' ${WRKSRC}/setup.py

.include <bsd.port.post.mk>
