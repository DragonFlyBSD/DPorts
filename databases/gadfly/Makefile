# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: databases/gadfly/Makefile 339634 2014-01-13 21:00:02Z rene $

PORTNAME=	gadfly
PORTVERSION=	1.0.0
PORTREVISION=	4
CATEGORIES=	databases
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	SQL database written in Python

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/kjbuckets.so:${PORTSDIR}/devel/py-kjbuckets

USE_PYTHON=		2
USE_PYDISTUTILS=	yes
PYDISTUTILS_AUTOPLIST=	yes

OPTIONS_DEFINE=	DOCS EXAMPLES

.include <bsd.port.options.mk>

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/COPYRIGHT.txt ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/CHANGES.txt ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/*.txt ${STAGEDIR}${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/doc/build_html.py ${STAGEDIR}${DOCSDIR}
.endif
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${STAGEDIR}${EXAMPLESDIR}/kjParsing
	@${INSTALL_DATA} ${WRKSRC}/doc/demo/kjParsing/*.py \
		${STAGEDIR}${EXAMPLESDIR}/kjParsing
.endif

.include <bsd.port.mk>
