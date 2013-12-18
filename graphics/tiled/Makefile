# Created by: Dmitry Marakasov <amdmi3@FreeBSD.org>
# $FreeBSD: graphics/tiled/Makefile 336650 2013-12-16 17:40:13Z amdmi3 $

PORTNAME=	tiled
PORTVERSION=	0.9.1
CATEGORIES=	graphics editors games
MASTER_SITES=	SF/tiled/tiled-qt/${PORTVERSION}
DISTNAME=	tiled-qt-${PORTVERSION}

MAINTAINER=	amdmi3@FreeBSD.org
COMMENT=	General purpose tile map editor

USES=		qmake
USE_QT4=	corelib gui opengl \
		linguist_build moc_build uic_build rcc_build
USE_LDCONFIG=	yes

PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|lrelease|&-qt4|' \
		${WRKSRC}/translations/translations.pro
	@${REINPLACE_CMD} -e 's|.*\(QT += opengl\)|\1|' \
		${WRKSRC}/src/tiled/tiled.pro
	@${REINPLACE_CMD} -e 's|/usr|${PREFIX}|' ${WRKSRC}/docs/tiled.desktop
	@${FIND} ${WRKSRC} -name "*.pro" -exec ${REINPLACE_CMD} -e 's|share/man|man|' {} \;

post-install:
	${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README.md ${STAGEDIR}${DOCSDIR}/

.include <bsd.port.mk>
