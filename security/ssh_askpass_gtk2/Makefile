# New ports collection makefile for: ssh_askpass_gtk2
# Date created:        21 Aug 2003
# Whom:                mig
#
# $FreeBSD: ports/security/ssh_askpass_gtk2/Makefile,v 1.21 2012/11/17 06:01:20 svnexp Exp $
#

PORTNAME=	ssh_askpass_gtk2
PORTVERSION=	0.4
PORTREVISION=	7
CATEGORIES=	security
MASTER_SITES=	http://www.cgabriel.org/download/ssh-askpass-fullscreen/
DISTNAME=	ssh-askpass-fullscreen-${PORTVERSION}

MAINTAINER=	arved@FreeBSD.org
COMMENT=	A tiny GTK2 ssh askpass replacement

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

USE_GNOME=	gtk20

PLIST_FILES=	bin/ssh-askpass-fullscreen

post-patch:
	${REINPLACE_CMD} -e "s,gcc,${CC}," ${WRKSRC}/Makefile

do-install:
	cd ${WRKSRC};\
	${INSTALL_PROGRAM} ssh-askpass-fullscreen ${PREFIX}/bin/ssh-askpass-fullscreen;\

.include <bsd.port.mk>
