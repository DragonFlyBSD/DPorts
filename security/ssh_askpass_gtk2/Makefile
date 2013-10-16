# Created by: mig
# $FreeBSD: security/ssh_askpass_gtk2/Makefile 327769 2013-09-20 22:55:24Z bapt $

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
USES=		pkgconfig

PLIST_FILES=	bin/ssh-askpass-fullscreen

NO_STAGE=	yes
post-patch:
	${REINPLACE_CMD} -e "s,gcc,${CC}," ${WRKSRC}/Makefile

do-install:
	cd ${WRKSRC};\
	${INSTALL_PROGRAM} ssh-askpass-fullscreen ${PREFIX}/bin/ssh-askpass-fullscreen;\

.include <bsd.port.mk>
