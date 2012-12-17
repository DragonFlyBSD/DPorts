# New ports collection makefile for:	py-formencode
# Date created:		2005-11-16
# Whom:			Choe, Cheng-Dae
#
# $FreeBSD: ports/www/py-formencode/Makefile,v 1.17 2012/11/17 06:03:00 svnexp Exp $
#

PORTNAME=	formencode
PORTVERSION=	1.2.4
CATEGORIES=	www python
MASTER_SITES=	CHEESESHOP
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	FormEncode-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML form validation, generation, and conversion package

USE_PYTHON=		-2.7
USE_PYDISTUTILS=	easy_install
USE_GETTEXT=		yes

PYDISTUTILS_PKGNAME=	FormEncode

DOCSDIR=	${PREFIX}/share/doc/py-${PORTNAME}
EXAMPLESDIR=	${PREFIX}/share/examples/py-${PORTNAME}

PORTDOCS=	*

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	@(cd ${WRKSRC}/docs/ && ${COPYTREE_SHARE} . ${DOCSDIR})
.endif

.include <bsd.port.mk>
