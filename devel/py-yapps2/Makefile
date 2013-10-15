# Created by: xenophon+fbsdports@irtnog.org
# $FreeBSD: devel/py-yapps2/Makefile 327724 2013-09-20 17:13:42Z bapt $

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
