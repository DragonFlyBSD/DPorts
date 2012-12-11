# New ports collection makefile for:	Yapps2
# Date created:				27 April 2008
# Whom:					xenophon+fbsdports@irtnog.org
#
# $FreeBSD: ports/devel/py-yapps2/Makefile,v 1.3 2012/11/17 05:56:52 svnexp Exp $
#

PORTNAME=	yapps2
PORTVERSION=	2.1.1
CATEGORIES=	devel python
MASTER_SITES=	http://theory.stanford.edu/~amitp/yapps/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	yapps${PORTVERSION}

MAINTAINER=	xenophon+fbsdports@irtnog.org
COMMENT=	An easy-to-use parser generator that generates Python code

PORTSCOUT=	skipv:2-2.1.1-17.1
WRKSRC=		${WRKDIR}/Yapps-${PORTVERSION}
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_PKGNAME=	Yapps

.include <bsd.port.mk>
