# Created by: Jean-Yves Lefort <jylefort@brutele.be>
# $FreeBSD: x11-wm/devilspie/Makefile 327786 2013-09-21 00:01:16Z bapt $

PORTNAME=	devilspie
PORTVERSION=	0.22
PORTREVISION=	6
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.burtonini.com/computing/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	A window manipulation tool

USE_GNOME=	libwnck
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
USES=		pkgconfig gettext
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

MAN1=		devilspie.1
PORTDOCS=	AUTHORS NEWS README TODO
PLIST_FILES=	bin/devilspie \
		share/locale/de/LC_MESSAGES/devilspie.mo

NO_STAGE=	yes
post-patch:
	@${REINPLACE_CMD} -e 's|-D.*_DISABLE_DEPRECATED||' \
		${WRKSRC}/src/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
.endif

.include <bsd.port.mk>
