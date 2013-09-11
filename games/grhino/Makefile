# Created by: UMENO Takashi <umeno@rr.iij4u.or.jp>
# $FreeBSD: games/grhino/Makefile 326137 2013-09-03 12:13:23Z bapt $

PORTNAME=	grhino
PORTVERSION=	0.16.1
PORTREVISION=	1
CATEGORIES=	games gnome
MASTER_SITES=	SF/rhino/GRhino/${PORTVERSION}

MAINTAINER=	umeno@rr.iij4u.or.jp
COMMENT=	GRhino Othello/Reversi Program

USES=		gettext pkgconfig perl5
USE_GNOME=	gnomeprefix libgnomeui
USE_PERL5=	build
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
INSTALLS_OMF=	yes
PLIST_SUB+=	VERSION=${PORTVERSION}

post-patch:
	@${REINPLACE_CMD} -e 's|-lpthread|${PTHREAD_LIBS}|g ; \
		 s|DATADIRNAME=lib|DATADIRNAME=share|g' ${WRKSRC}/configure

.include <bsd.port.mk>
