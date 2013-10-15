# Created by: Yonatan <onatan@gmail.com>
# $FreeBSD: archivers/wzip/Makefile 327699 2013-09-20 13:11:20Z bapt $

PORTNAME=	wzip
PORTVERSION=	1.1.1
CATEGORIES=	archivers
MASTER_SITES=	${MASTER_SITE_DEBIAN_POOL}
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	onatan@gmail.com
COMMENT=	Preprocessor for lossy data compression

NO_STAGE=	yes
ALL_TARGET=	${PORTNAME}
WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}
MAN1=		${PORTNAME}.1
PLIST_FILES=	bin/${PORTNAME}

post-patch:
	@${REINPLACE_CMD} 's|gcc|${CC}|' ${WRKSRC}/${MAKEFILE}

do-install:
	${INSTALL_PROGRAM} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin
	${INSTALL_MAN} ${WRKSRC}/${MAN1} ${MANPREFIX}/man/man1

.include <bsd.port.mk>
