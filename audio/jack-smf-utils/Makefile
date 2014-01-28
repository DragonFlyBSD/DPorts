# Created by: Edward Tomasz Napierala <trasz@FreeBSD.org>
# $FreeBSD: audio/jack-smf-utils/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	jack-smf-utils
PORTVERSION=	1.0
PORTREVISION=	5
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	trasz@FreeBSD.org
COMMENT=	Standard MIDI File file player and recorder for JACK MIDI

LIB_DEPENDS=	libjack.so:${PORTSDIR}/audio/jack \
		liblash.so:${PORTSDIR}/audio/lash

USES=		pkgconfig
NO_STAGE=	yes
GNU_CONFIGURE=	yes
USE_GNOME=	glib20

PLIST_FILES=	bin/smfsh bin/jack-smf-player bin/jack-smf-recorder
MAN1=		jack-smf-player.1 jack-smf-recorder.1

.include <bsd.port.mk>
