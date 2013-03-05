# Created by: Carl Makin <carl@stagecraft.cx>
# $FreeBSD: ports/comms/hamfax/Makefile,v 1.22 2012/12/25 19:20:26 svnexp Exp $

PORTNAME=	hamfax
PORTVERSION=	0.8.1
CATEGORIES=	comms audio hamradio
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}

MAINTAINER=	carl@stagecraft.cx
COMMENT=	QT application for sending and receiving facsimiles over radio

LIB_DEPENDS=	audiofile:${PORTSDIR}/audio/libaudiofile

USE_QT4=	gui moc_build
GNU_CONFIGURE=	yes
CONFIGURE_ARGS+=	CPPFLAGS="-I${LOCALBASE}/include" \
					LDFLAGS="-L${LOCALBASE}/lib"
USE_GMAKE=	yes
USE_BZIP2=	yes

MAKE_JOBS_SAFE=	yes

MAN1=		hamfax.1
.include <bsd.port.mk>
