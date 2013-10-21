# Created by: Dmitry Marakasov <amdmi3@amdmi3.ru>
# $FreeBSD: games/outerspace/Makefile 330701 2013-10-17 23:57:30Z amdmi3 $

PORTNAME=	outerspace
PORTVERSION=	0.2.2
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SF/ospace/OSLauncher/${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	On-line strategy game

RUN_DEPENDS=	${PYTHON_SITELIBDIR}/pygame/__init__.py:${PORTSDIR}/devel/py-game

USE_PYTHON=	2.5+
NO_BUILD=	yes

SUB_FILES=	outerspace
SUB_LIST=	PROGRAM_DIR="${PREFIX}/lib/${PORTNAME}"

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/share/outerspace|${PREFIX}/lib/${PORTNAME}/res|' ${WRKSRC}/outerspace

do-install:
	${MKDIR} ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} oslauncher ${STAGEDIR}${PREFIX}/lib/${PORTNAME})
	@(cd ${WRKSRC} && ${COPYTREE_SHARE} res ${STAGEDIR}${PREFIX}/lib/${PORTNAME})
	${INSTALL_DATA} ${WRKSRC}/outerspace ${STAGEDIR}${PREFIX}/lib/${PORTNAME}
	${INSTALL_SCRIPT} ${WRKDIR}/outerspace ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
