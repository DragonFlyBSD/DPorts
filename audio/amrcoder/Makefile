# Created by: Andrew Wingorodov (Wingborn) <programmer@coolsoft.ru>
# $FreeBSD: audio/amrcoder/Makefile 327706 2013-09-20 14:36:35Z bapt $

PORTNAME=	amrcoder
PORTVERSION=	1.0
CATEGORIES=	audio
MASTER_SITES=	http://ftp.us.sinuspl.net/pub/src/ \
		http://ftp.uni-erlangen.de/pub/FreeBSD/ports/distfiles/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AMR encoder/decoder for Mbuni MMS Gateway (www.mbuni.org)

MAN1=		amrdecoder.1 amrencoder.1

NO_STAGE=	yes
MANCOMPRESSED=	yes

post-extract:
	@${RM} ${WRKSRC}/*.o

post-patch:
	${REINPLACE_CMD} -e 's|-O4||' ${WRKSRC}/${MAKEFILE}

.include <bsd.port.mk>
