# New ports collection makefile for:	gpsk31
# Date created:		2005-05-27
# Whom:				Søren Straarup <xride@x12.dk>
#
# $FreeBSD: ports/comms/gpsk31/Makefile,v 1.15 2012/11/17 05:54:59 svnexp Exp $

PORTNAME=	gpsk31
PORTVERSION=	0.3
PORTREVISION=	7
CATEGORIES=	comms hamradio
MASTER_SITES=	http://www.qsl.net/pg4i/download/

MAINTAINER=	xride@FreeBSD.org
COMMENT=	A gtk psk31 client

USE_GNOME=	gtk20
GNU_CONFIGURE=	yes

post-patch:
	@${REINPLACE_CMD} -e "s,-lpthread,${PTHREAD_LIBS},g" ${WRKSRC}/configure

MAN1=	gpsk31.1
.include <bsd.port.mk>
