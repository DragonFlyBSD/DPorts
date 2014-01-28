# Created by: Marcus von Appen
# $FreeBSD: accessibility/py-papi/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	papi
PORTVERSION=	0.0.9
CATEGORIES=	accessibility devel python
MASTER_SITES=	SF/ocemp/${PORTNAME}/${PORTVERSION}
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	mva@FreeBSD.org
COMMENT=	ATK accessibility wrapper for python

USES=		pkgconfig
USE_GNOME=	atk
USE_PYTHON=	2
USE_PYDISTUTILS=yes
PYDISTUTILS_AUTOPLIST=	yes

EXAMPLES=	atkaction.py atkapplication.py atkcapi.c atktext.py atkvalue.py \
		msaaapplication.py msaacapi.cpp

OPTIONS_DEFINE=	EXAMPLES

.include <bsd.port.options.mk>

post-patch:
	${REINPLACE_CMD} -i "" -e 's|: docfiles|: []|g' ${WRKSRC}/setup.py

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	@${INSTALL} -d ${STAGEDIR}${EXAMPLESDIR}/
	@cd ${WRKSRC}/doc/examples && \
		${INSTALL_DATA} ${EXAMPLES} ${STAGEDIR}${EXAMPLESDIR}/
.endif

.include <bsd.port.mk>
