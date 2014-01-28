# Created by: Alexey Dokuchaev <danfe@FreeBSD.org>
# $FreeBSD: graphics/delaboratory/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	delaboratory
PORTVERSION=	0.8
CATEGORIES=	graphics
MASTER_SITES=	GOOGLE_CODE

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Unique image postprocessing application

LICENSE=	GPLv3

USES=		gmake
MAKE_ARGS=	CXX="${CXX}" WXCONFIG="${WX_CONFIG}"
USE_WX=		2.8+

PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} -e 's,-Ofast.*},${CXXFLAGS}, ; \
		s,CXXFLAGS_WX +=,& ${CXXFLAGS} -I${LOCALBASE}/include,' \
			${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.mk>
