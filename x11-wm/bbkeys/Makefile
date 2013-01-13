# Created by: Patrick Seal <patseal@hyperhost.net>
# $FreeBSD: ports/x11-wm/bbkeys/Makefile,v 1.30 2012/12/17 10:24:49 svnexp Exp $

PORTNAME=	bbkeys
PORTVERSION=	0.9.1
PORTREVISION=	1
CATEGORIES=	x11-wm
MASTER_SITES=	SF

MAINTAINER=	A.J.Caines@halplant.com
COMMENT=	Keygrabber for the Blackbox window manager

LICENSE=	MIT

BUILD_DEPENDS=	blackbox:${PORTSDIR}/x11-wm/blackbox

USE_PERL5_BUILD=	yes
USE_XORG=	x11 xext
GNU_CONFIGURE=	yes
CPPFLAGS+=	`pkg-config --cflags xft`
LDFLAGS+=	`pkg-config --libs xft`

MAN1=		bbkeys.1
MAN5=		bbkeysrc.5
PORTDOCS=	AUTHORS BUGS ChangeLog NEWS README TODO

PLIST_FILES=	bin/bbkeys %%DATADIR%%/bbkeysrc %%DATADIR%%/defaultStyle
PLIST_DIRS=	%%DATADIR%%

OPTIONS_DEFINE=	DOCS

.include <bsd.port.options.mk>

post-patch:
	@${REINPLACE_CMD} -e 's#: install-docDATA#:#' ${WRKSRC}/Makefile.in

post-install:
.if ${PORT_OPTIONS:MDOCS}
	@${MKDIR} ${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S#^#${WRKSRC}/#} ${DOCSDIR}
.endif

.include <bsd.port.mk>
