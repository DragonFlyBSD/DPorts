# Created by: Hye-Shik Chang
# $FreeBSD: devel/py-fam/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	fam
PORTVERSION=	1.1.1
PORTREVISION=	2
CATEGORIES=	devel python
MASTER_SITES=	SF/python-${PORTNAME}/python-${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	python-fam-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Python Interface to the File Alteration Monitor

USES=		fam
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

pre-patch:
	${INSTALL_DATA} ${FILESDIR}/setup.py ${WRKSRC}

.include <bsd.port.mk>
