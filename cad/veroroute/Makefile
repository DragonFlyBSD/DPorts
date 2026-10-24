PORTNAME=	veroroute
DISTVERSION=	2.40
PORTEPOCH=	1
CATEGORIES=	cad
MASTER_SITES=	SF/${PORTNAME}/

MAINTAINER=	yuri@FreeBSD.org
COMMENT=	PCB (printed circuit board) design software
WWW=		https://sourceforge.net/projects/veroroute/

LICENSE=	GPLv3+
LICENSE_FILE=	${WRKSRC}/../licenses/license_GPLv3.txt

USES=		compiler:c++11-lang gl qmake qt:6
USE_GL=		gl
USE_QT=		base

WRKSRC=		${WRKDIR}/VeroRoute
WRKSRC_SUBDIR=	Src

post-install:
	@${STRIP_CMD} ${STAGEDIR}${PREFIX}/bin/veroroute

.include <bsd.port.mk>
