PORTNAME=	xevil
DISTVERSION=	2.02.r2.20230728
CATEGORIES=	games

MAINTAINER=	olgeni@FreeBSD.org
COMMENT=	Fast-action, networked, kill-everything game
WWW=		https://github.com/lvella/xevil

LICENSE=	GPLv2+
LICENSE_FILE=	${WRKSRC}/gpl.txt

USES=		dos2unix gmake xorg
DOS2UNIX_GLOB=	*.cpp *.h config.mk Makefile
USE_GITHUB=	yes
GH_ACCOUNT=	lvella
GH_TAGNAME=	9ca85059
USE_XORG=	x11 xpm

MAKE_ARGS=	DEPTH="${WRKSRC}"
MAKE_ENV=	HOSTTYPE=FreeBSD
ALL_TARGET=	${OPSYS:tl}

PLIST_FILES=	bin/${PORTNAME}
PORTDOCS=	*

OPTIONS_DEFINE=	DOCS

post-patch:
	@${REINPLACE_CMD} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' ${WRKSRC}/config.mk

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/x11/${OPSYS:tu}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/readme.txt ${STAGEDIR}${DOCSDIR}
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/instructions
	${INSTALL_DATA} ${WRKSRC}/instructions/* ${STAGEDIR}${DOCSDIR}/instructions

.include <bsd.port.mk>
