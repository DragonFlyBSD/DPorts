# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: editors/gmanedit/Makefile 326090 2013-09-02 21:16:30Z bapt $

PORTNAME=	gmanedit
PORTVERSION=	0.4.2
PORTREVISION=	6
CATEGORIES=	editors gnome
MASTER_SITES=	SF/${PORTNAME}2/${PORTNAME}/${PORTNAME}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A GNOME manpages editor

USES=        pathfix gettext gmake pkgconfig
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		gmanedit.1

post-patch:
	@${REINPLACE_CMD} -e '/<argz\.h>/d' ${WRKSRC}/src/callbacks.c

.include <bsd.port.mk>
