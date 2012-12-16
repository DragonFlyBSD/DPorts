# New ports collection makefile for:	py-setproctitle
# Date created:		2010-03-12
# Whom:			Sofian Brabez <sbrabez@gmail.com>
#
# $FreeBSD: ports/devel/py-setproctitle/Makefile,v 1.10 2012/11/17 05:56:50 svnexp Exp $
#

PORTNAME=	setproctitle
PORTVERSION=	1.1.6
CATEGORIES=	devel python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	sbz@FreeBSD.org
COMMENT=	Allow customization of the process title

LICENSE=	BSD

USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

PLIST_FILES=	%%PYTHON_SITELIBDIR%%/${PORTNAME}.so

PORTDOCS=	COPYRIGHT HISTORY.rst README.rst

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for f in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
