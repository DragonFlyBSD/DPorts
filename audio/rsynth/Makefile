# Created by: faulkner@mpd.tandem.com
# $FreeBSD: audio/rsynth/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rsynth
PORTVERSION=	2.0
PORTREVISION=	4
CATEGORIES=	audio accessibility
MASTER_SITES=	ftp://svr-ftp.eng.cam.ac.uk/pub/comp.speech/synthesis/

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Speech synthesizer

LIB_DEPENDS=	libgdbm.so:${PORTSDIR}/databases/gdbm	\
		libaudio.so:${PORTSDIR}/audio/nas

NO_STAGE=	yes

GNU_CONFIGURE=	yes
USE_AUTOTOOLS=	autoconf

pre-configure:
	@${CP} ${FILESDIR}/freebsdplay.c ${WRKSRC}/config/freebsdplay.c

.include <bsd.port.mk>
