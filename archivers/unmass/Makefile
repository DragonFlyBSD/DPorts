# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: archivers/unmass/Makefile 336818 2013-12-18 11:53:20Z ehaupt $

PORTNAME=	unmass
PORTVERSION=	0.9
CATEGORIES=	archivers
MASTER_SITES=	http://mirex.mypage.sk/FILES/ \
		CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Extract game archives such as wad, dar, mea exe's, and many more

LICENSE=	GPLv2

USES=		gmake dos2unix
GNU_CONFIGURE=	yes

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}/kdev

PLIST_FILES=	bin/unmass

post-patch:
.for f in ma.cpp massfs.h utools.h
	@${REINPLACE_CMD} -e 's|<malloc\.h>|<stdlib.h>|' ${WRKSRC}/src/${f}
.endfor

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/src/${PORTNAME}_kdev \
		${STAGEDIR}${PREFIX}/bin/${PORTNAME}

.include <bsd.port.mk>
