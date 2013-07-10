# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: graphics/icat/Makefile 322530 2013-07-08 18:42:15Z ehaupt $

PORTNAME=	icat
PORTVERSION=	0.4
CATEGORIES=	graphics

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Displays images in 256-color capable terminals

USES=		gmake
USE_DOS2UNIX=	Makefile
USE_EFL=	imlib2
USE_GITHUB=	yes
GH_ACCOUNT=	atextor
GH_TAGNAME=	v${PORTVERSION}
GH_COMMIT=	e8bee81

MAKE_JOBS_SAFE=	yes

CFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

WRKSRC=		${WRKDIR}/${GH_ACCOUNT}-${PORTNAME}-${GH_COMMIT}

PLIST_FILES=	bin/icat

CONFLICTS=	sleuthkit-[0-9]*

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

.include <bsd.port.mk>
