# New ports collection makefile for:	bomberclone
# Date created:				5 May 2003
# Whom:					Edwin Groothuis
#
# $FreeBSD: games/bomberclone/Makefile 300896 2012-07-14 13:54:48Z beat $
#

PORTNAME=	bomberclone
PORTVERSION=	0.11.8
PORTREVISION=	8
CATEGORIES=	games
MASTER_SITES=	SF

MAINTAINER=	edwin@mavetju.org
COMMENT=	Reimplementation of Atomic Bomber Man

USE_SDL=	image mixer sdl
GNU_CONFIGURE=	yes
USE_BZIP2=	yes
USE_GMAKE=	yes
CONFIGURE_ARGS=	--target=""
LDFLAGS+=	-L${LOCALBASE}/lib ${PTHREAD_LIBS}
CXXFLAGS+=	${PTHREAD_CFLAGS} -I${LOCALBASE}/include

post-extract:
	${FIND} ${WRKSRC} -type d -name CVS | ${XARGS} ${RM} -rf ;

.include <bsd.port.mk>
