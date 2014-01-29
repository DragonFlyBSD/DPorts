# Created by: buganini@gmail.com
# $FreeBSD: graphics/py-sane/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	sane
PORTVERSION=	2.0
CATEGORIES=	graphics python
MASTER_SITES=	http://effbot.org/media/downloads/ \
		http://www.pythonware.net/storage/
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}
DISTNAME=	Imaging-1.1.7

MAINTAINER=	buganini@gmail.com
COMMENT=	The Python binding for Sane

LIB_DEPENDS=	sane.1:${PORTSDIR}/graphics/sane-backends
RUN_DEPENDS=	${PYTHON_PKGNAMEPREFIX}imaging>=1.1.7:${PORTSDIR}/graphics/py-imaging

DIST_SUBDIR=	python
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes

WRKSRC=		${WRKDIR}/${DISTNAME}/Sane

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/setup.py

.include <bsd.port.mk>
