# Created by: Andrew Wingorodov (Wingborn) <programmer@coolsoft.ru>
# $FreeBSD: audio/amrcoder/Makefile 334754 2013-11-24 18:32:02Z bapt $

PORTNAME=	amrcoder
PORTVERSION=	1.0
CATEGORIES=	audio
MASTER_SITES=	http://ftp.us.sinuspl.net/pub/src/ \
		http://ftp.uni-erlangen.de/pub/FreeBSD/ports/distfiles/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	AMR encoder/decoder for Mbuni MMS Gateway (www.mbuni.org)

USES=		uidfix

post-extract:
	@${RM} ${WRKSRC}/*.o

post-patch:
	${REINPLACE_CMD} -e 's|-O4||' ${WRKSRC}/${MAKEFILE}

.include <bsd.port.mk>
