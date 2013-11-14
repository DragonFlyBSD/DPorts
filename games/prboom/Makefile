# Created by: Jordan DeLong <fracture@allusion.net>
# $FreeBSD: games/prboom/Makefile 332846 2013-11-05 13:04:51Z danilo $

PORTNAME=	prboom
PORTVERSION=	2.5.0
PORTREVISION=	3
CATEGORIES=	games
MASTER_SITES=	SF/${PORTNAME}/${PORTNAME}%20stable/${PORTVERSION}

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Multiplayer-capable and modified version of ID's classic DOOM game

LIB_DEPENDS=	libsmpeg.so:${PORTSDIR}/multimedia/smpeg

USES=		gmake
USE_SDL=	mixer net sdl

GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib

OPTIONS_DEFINE=	OPENGL
OPTIONS_DEFAULT=	OPENGL

DATADIR=	${DMDIR}
PLIST_SUB=	PORTVERSION=${PORTVERSION}

OPENGL_CONFIGURE_ENABLE=	gl
OPENGL_USE=	GL=yes

.include "${.CURDIR}/../doom-data/Makefile.include"

.include <bsd.port.mk>
