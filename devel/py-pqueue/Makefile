# Created by: Hye-Shik Chang <perky@fallin.lv>
# $FreeBSD: devel/py-pqueue/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	pqueue
PORTVERSION=	0.2
CATEGORIES=	devel python
MASTER_SITES=	http://www.csse.monash.edu.au/hons/projects/1999/Andrew.Snare/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	PQueue-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Fibonacci-Heap based Priority-Queue Extension for Python

USE_BZIP2=	yes
USE_PYTHON=	yes
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

WRKSRC=		${WRKDIR}/PQueue

post-patch:
	${CP} ${FILESDIR}/setup.py ${WRKSRC}

.include <bsd.port.mk>
