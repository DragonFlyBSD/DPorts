# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: emulators/visualos/Makefile 315433 2013-03-28 03:28:30Z eadler $

PORTNAME=	VisualOS
PORTVERSION=	1.0.5
PORTREVISION=	9
CATEGORIES=	emulators gnome
MASTER_SITES=	SF/${PORTNAME:tl}/${PORTNAME}/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Visual simulator of an operating system to help understand an OSes

LICENSE=	GPLv2

USES=        pathfix
USE_GNOME=	gnomeprefix libglade
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		VisualOS.1

post-patch:
	@${REINPLACE_CMD} -e '/^#define _/d' ${WRKSRC}/src/signals.c

.include <bsd.port.mk>
