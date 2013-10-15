# Created by: ijliao
# $FreeBSD: audio/mp3asm/Makefile 327804 2013-09-21 11:06:03Z dinoex $

PORTNAME=	mp3asm
PORTVERSION=	0.1.3.1
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/0.1.3-1
DISTNAME=	${PORTNAME}-${PORTVERSION:R}-${PORTVERSION:E}

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	MP3 frame level editor

LICENSE=	GPLv2

NO_STAGE=	yes

USES=		gmake
USE_BZIP2=	yes
GNU_CONFIGURE=	yes
WRKSRC=		${WRKDIR}/${PORTNAME}-0.1

post-extract:
	@${RM} ${WRKSRC}/config.cache

post-patch:
	@${REINPLACE_CMD} -e \
		's|^CFLAGS=|#CFLAGS=|g' ${WRKSRC}/configure
	@${REINPLACE_CMD} -e \
		's|getprogname|_getprogname|g' ${WRKSRC}/src/mp3asm.c

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in Changelog README
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor
.endif

.include <bsd.port.mk>
