# Created by: Marcus von Appen
# $FreeBSD: accessibility/py-papi/Makefile 316309 2013-04-23 06:26:31Z bapt $

PORTNAME=	papi
PORTVERSION=	0.0.9
CATEGORIES=	accessibility devel python
MASTER_SITES=	SF/ocemp/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	ATK accessibility wrapper for python

USES=		pkgconfig
USE_GNOME=	atk
USE_PYTHON=	yes
USE_PYDISTUTILS=yes

EXAMPLES=	atkaction.py atkapplication.py atkcapi.c atktext.py atkvalue.py \
		msaaapplication.py msaacapi.cpp

post-patch:
	${REINPLACE_CMD} -i "" -e 's|: docfiles|: []|g' ${WRKSRC}/setup.py

post-install:
.if !defined(NOPORTEXAMPLES)
	@${INSTALL} -d ${EXAMPLESDIR}/
	@cd ${WRKSRC}/doc/examples && \
		${INSTALL_DATA} ${EXAMPLES} ${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
