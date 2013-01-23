# New ports collection makefile for:	gtkdiff
# Date created:				17 November 1999
# Whom:					Maxim Sobolev <sobomax@FreeBSD.org>
#
# $FreeBSD: ports/textproc/gtkdiff/Makefile,v 1.36 2012/11/17 06:01:57 svnexp Exp $
#

PORTNAME=	gtkdiff
PORTVERSION=	1.8.0
PORTREVISION=	9
CATEGORIES=	textproc gnome
MASTER_SITES=	TUCOWS

MAINTAINER=	cy@FreeBSD.org
COMMENT=	A frontend for diff(1)

USE_GNOME=	gnomehack gnomeprefix gnomelibs
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gtkdiff.1 gtkdiff-rcs.1

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g' ${WRKSRC}/configure

.include <bsd.port.mk>
