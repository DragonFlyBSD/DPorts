# Created by: TAOKA Fumiyoshi
# $FreeBSD: graphics/py-pyproj/Makefile 332992 2013-11-06 13:43:12Z wg $

PORTNAME=	pyproj
PORTVERSION=	1.9.3
CATEGORIES=	graphics python geography
MASTER_SITES=	GOOGLE_CODE
PKGNAMEPREFIX=	${PYTHON_PKGNAMEPREFIX}

MAINTAINER=	fmysh@iijmio-mail.jp
COMMENT=	Pyrex wrapper to provide python interfaces to PROJ.4

WRKSRC=		${WRKDIR}/${DISTNAME:C/[a-z]$//}
USE_PYTHON=	yes
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

PORTDOCS=	Changelog README LICENSE_proj4
PORTEXAMPLES=	datum_shift.py geodtest.py sample.out \
		test.py test2.py test_transform.py

OPTIONS_DEFINE=	DOCS EXAMPLES

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_MAN} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}
	${INSTALL_DATA} ${PORTEXAMPLES:S,^,${WRKSRC}/test/,} ${STAGEDIR}${EXAMPLESDIR}

.include <bsd.port.mk>
