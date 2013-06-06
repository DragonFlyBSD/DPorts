# Created by: Ted Stodgell <tstodgell@gmail.com>
# $FreeBSD: x11-themes/murrine-configurator/Makefile 317646 2013-05-08 09:15:08Z olivierd $
#

PORTNAME=	murrine-configurator
PORTVERSION=	0.5
PORTREVISION=	7
CATEGORIES=	x11-themes
MASTER_SITES=	http://cimi.netsons.org/media/download_gallery/murrine/
DISTNAME=	murrine-configurator-${PORTVERSION}

MAINTAINER=	tstodgell@gmail.com
COMMENT=	GUI gtkrc configuration tool for the Murrine GTK engine

RUN_DEPENDS=	${LOCALBASE}/bin/bash:${PORTSDIR}/shells/bash \
		${LOCALBASE}/lib/gtk-2.0/2.10.0/engines/libmurrine.so:${PORTSDIR}/x11-themes/gtk-murrine-engine \
		${LOCALBASE}/bin/zenity:${PORTSDIR}/x11/zenity

NO_BUILD=	yes
USE_BZIP2=	yes
USE_GNOME=	gtk20

do-install:
	@${INSTALL_SCRIPT} ${WRKSRC}/files/${PORTNAME} ${PREFIX}/bin
	${MKDIR} ${PREFIX}/share/pixmaps || ${TRUE}
	@${INSTALL_DATA} ${WRKSRC}/files/${PORTNAME}.png \
		${PREFIX}/share/pixmaps
	${MKDIR} ${PREFIX}/share/applications || ${TRUE}
	@${INSTALL_DATA} ${WRKSRC}/files/${PORTNAME}.desktop \
		${PREFIX}/share/applications

.include <bsd.port.mk>
