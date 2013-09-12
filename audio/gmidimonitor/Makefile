# Created by: trasz <trasz@pin.if.uz.zgora.pl>
# $FreeBSD: audio/gmidimonitor/Makefile 326709 2013-09-08 08:27:08Z antoine $

PORTNAME=	gmidimonitor
PORTVERSION=	3.6
PORTREVISION=	1
CATEGORIES=	audio
MASTER_SITES=	http://download.gna.org/gmidimonitor/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	GTK+ application that shows MIDI events

LIB_DEPENDS=	jack.0:${PORTSDIR}/audio/jack \
		lash.2:${PORTSDIR}/audio/lash

USES=		pkgconfig
USE_BZIP2=	yes
USE_GNOME=	gtk20 libglade2

LICENSE=	GPLv2
LICENSE_FILE=	${WRKSRC}/COPYING

PLIST_FILES=	bin/gmidimonitor %%DATADIR%%/gmidimonitor.ui
PLIST_DIRS=	%%DATADIR%%

MAKE_JOBS_ARGS=	-j${MAKE_JOBS_NUMBER}

do-configure:
	@(cd ${WRKSRC} && ./waf configure --prefix=${PREFIX} --alsa=no)

do-build:
	@(cd ${WRKSRC} && ./waf ${MAKE_JOBS_ARGS})

do-install:
	@(cd ${WRKSRC} && ./waf install)

.include <bsd.port.mk>
