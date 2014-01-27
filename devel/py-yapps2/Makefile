# Created by: xenophon+fbsdports@irtnog.org
# $FreeBSD: devel/py-yapps2/Makefile 340722 2014-01-22 17:00:46Z mat $

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

NO_STAGE=	yes
.include <bsd.port.mk>
