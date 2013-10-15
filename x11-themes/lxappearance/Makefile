# Created by: chinsan
# $FreeBSD: x11-themes/lxappearance/Makefile 329478 2013-10-05 16:52:12Z pawel $

PORTNAME=	lxappearance
PORTVERSION=	0.5.2
PORTREVISION=	1
CATEGORIES=	x11-themes gnome
MASTER_SITES=	SF/lxde/LXAppearance

MAINTAINER=	pawel@FreeBSD.org
COMMENT=	Desktop-independent theme switcher for GTK+

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
USES=		gmake pkgconfig
USE_GNOME=	gnomehack gtk20 intlhack

PORTDOCS=	AUTHORS README

OPTIONS_DEFINE=	DOCS NLS
OPTIONS_SUB=	yes

NLS_USES=	gettext

.include <bsd.port.options.mk>

post-patch:
.if ! ${PORT_OPTIONS:MNLS}
	@${REINPLACE_CMD} -e 's|man po|man|' \
		${WRKSRC}/Makefile.in
.endif

post-install:
	@${MKDIR} ${STAGEDIR}${DOCSDIR}
	${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${STAGEDIR}${DOCSDIR}

.include <bsd.port.mk>
