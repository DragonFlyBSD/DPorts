# Created by: Maxim Sobolev <sobomax@FreeBSD.org>
# $FreeBSD: misc/wmpal/Makefile 327745 2013-09-20 20:50:57Z bapt $

PORTNAME=	wmpal
PORTVERSION=	0.6.1
CATEGORIES=	misc windowmaker
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	One of the most useless dockapps in the world

USE_XORG=	xpm
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib -lX11

PORTDOCS=	README
PLIST_FILES=	bin/wmpal

NO_STAGE=	yes
.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's|"dino"|"daemon"|g' ${WRKSRC}/wmpal.c

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/README ${DOCSDIR}
.endif

.include <bsd.port.mk>
