# Created by: ijliao
# $FreeBSD: ftp/pureadmin/Makefile 327729 2013-09-20 17:23:18Z bapt $

PORTNAME=	pureadmin
PORTVERSION=	0.4
PORTREVISION=	6
CATEGORIES=	ftp
MASTER_SITES=	SF/purify/Default/${PORTVERSION}

MAINTAINER=	c.petrik.sosa@gmail.com
COMMENT=	Management utility for the PureFTPd

USES=		pkgconfig gettext
USE_GNOME=	gnomehack libglade2
USE_FAM=	yes
USE_GMAKE=	yes
GNU_CONFIGURE=	yes
INSTALLS_ICONS=	yes

CPPFLAGS+=	-I${LOCALBASE}/include ${PTHREAD_CFLAGS}
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}

PORTDOCS=	index.txt introduction.txt main_window.txt \
		preferences.txt user_manager.txt

NO_STAGE=	yes
pre-configure:
	@${REINPLACE_CMD} -e '/install-data-local:/s|install-docs||' ${WRKSRC}/Makefile.in

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@cd ${WRKSRC}/docs/ && ${INSTALL_DATA} ${PORTDOCS} ${DOCSDIR}/
.endif

.include <bsd.port.mk>
