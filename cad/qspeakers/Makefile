PORTNAME=	qspeakers
DISTVERSION=	1.8.6
CATEGORIES=	cad

MAINTAINER=	riggs@FreeBSD.org
COMMENT=	Open source loudspeaker enclosure designer
WWW=		http://brouits.free.fr/qspeakers/

LICENSE=	GPLv3
LICENSE_FILE=	${WRKSRC}/LICENSE

USES=		desktop-file-utils gl pkgconfig qt:6 qmake shared-mime-info
USE_GL=		gl
USE_QT=		base charts tools

USE_GITHUB=	yes
GH_ACCOUNT=	be1

BINARY_ALIAS=	lrelease=${LRELEASE}

.include <bsd.port.mk>
