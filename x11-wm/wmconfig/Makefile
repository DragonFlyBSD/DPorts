# Created by: Tommy Scheunemann <net@arrishq.org>
# $FreeBSD: x11-wm/wmconfig/Makefile 332499 2013-11-02 15:22:51Z wg $

PORTNAME=	wmconfig
PORTVERSION=	1.4.2
CATEGORIES=	x11-wm
MASTER_SITES=	http://www.arrishq.net/files/

MAINTAINER=	net@arrishq.net
COMMENT=	Menu generation tool for X window managers

LICENSE=	GPLv2

USE_BZIP2=	yes
GNU_CONFIGURE=	yes

PORTDOCS=	AUTHORS ChangeLog COPYING README TODO

OPTIONS_DEFINE=	NLS DOCS

OPTIONS_SUB=	yes
NLS_CONFIGURE_ENABLE=nls
NLS_CPPFLAGS=	-I${LOCALBASE}/include
NLS_LDFLAGS=	-L${LOCALBASE}/lib
NLS_USES=	gettext

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
