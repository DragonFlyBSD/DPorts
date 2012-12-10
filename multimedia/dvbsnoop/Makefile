# New ports collection makefile for:	dvbsnoop
# Date created:		2009 January 12
# Whom:			J.R. Oldroyd <fbsd@opal.com>
#
# $FreeBSD: ports/multimedia/dvbsnoop/Makefile,v 1.4 2012/11/17 05:59:48 svnexp Exp $
#

PORTNAME=	dvbsnoop
PORTVERSION=	1.4.50
CATEGORIES=	multimedia
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	fbsd@opal.com
COMMENT=	DVB stream analyzer / MPEG analyzer

DVB_HEADERS=	dmx.h frontend.h

GNU_CONFIGURE=	yes
CFLAGS+=	-I${WRKSRC}
USE_GMAKE=	yes

PLIST_FILES=	bin/${PORTNAME}
MAN1=		${PORTNAME}.1

.include <bsd.port.pre.mk>

post-patch:
	${MKDIR} ${WRKSRC}/linux/dvb
	cd ${FILESDIR}; ${CP} ${DVB_HEADERS} ${WRKSRC}/linux/dvb

.include <bsd.port.post.mk>
