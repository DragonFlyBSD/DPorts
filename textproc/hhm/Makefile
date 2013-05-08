# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: textproc/hhm/Makefile 316230 2013-04-22 13:27:47Z bapt $

PORTNAME=	hhm
PORTVERSION=	0.1.1
CATEGORIES=	textproc
MASTER_SITES=	${MASTER_SITE_SAVANNAH}
MASTER_SITE_SUBDIR=	${PORTNAME}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	HTML Help Maker

LIB_DEPENDS=	lzxcomp.1:${PORTSDIR}/archivers/liblzxcomp

WRKSRC=		${WRKDIR}/${PORTNAME}-${PORTVERSION}

PLIST_FILES=	bin/hhm

post-patch:
	${MV} ${WRKSRC}/Makefile ${WRKSRC}/Makefile.prev
	${CP} ${FILESDIR}/Makefile ${WRKSRC}/Makefile
	${REINPLACE_CMD} -e 's!^typedef unsigned.*$$!!' ${WRKSRC}/hhm.c

.include <bsd.port.mk>
