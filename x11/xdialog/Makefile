PORTNAME=	xdialog
PORTVERSION=	2.3.1
PORTREVISION=	9
CATEGORIES=	x11
MASTER_SITES=	http://xdialog.free.fr/
DISTNAME=	${PORTNAME:S/x/X/}-${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Drop in replacement for the "dialog" or "cdialog" programs
WWW=		http://xdialog.free.fr/

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		gnome localbase pkgconfig tar:bzip2
USE_GNOME=	gtk20
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-gtk2

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

NLS_USES=		gettext
NLS_CONFIGURE_ENABLE=	nls

post-patch:
	@${FIND} ${WRKSRC} -name "Makefile.in" | ${XARGS} ${REINPLACE_CMD} -e \
		's|m4 lib src|m4 src|g ; \
		 s|-I../lib||g ; \
		 s|-L../lib -lgetopt||g ; \
		 s| install-docDATA||g'
	@${REINPLACE_CMD} -e 's,Xdialog\\-%%version%%,xdialog,' \
		${WRKSRC}/doc/Xdialog.man

post-install-DOCS-on:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}/samples
	${INSTALL_DATA} ${WRKSRC}/doc/*.html ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/doc/*.png ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${WRKSRC}/samples/* ${STAGEDIR}${DOCSDIR}/samples

.include <bsd.port.mk>
