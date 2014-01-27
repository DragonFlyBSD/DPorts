# Created by: Kazumasa Nishizawa <k_nishizawa@anet.ne.jp>
# $FreeBSD: audio/rio500/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	rio500
PORTVERSION=	0.7
PORTREVISION=	2
CATEGORIES=	audio
MASTER_SITES=	SF

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Utilities for Diamond Rio500

USE_GNOME=	glib12
NO_STAGE=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--with-devicepath='/dev' \
		--with-deviceentry='urio0' \
		--with-id3support


.include <bsd.port.pre.mk>

post-patch:
	${REINPLACE_CMD} -e "s,byteswap.h,sys/endian.h," \
		${WRKSRC}/lib/libfon.c \
		${WRKSRC}/lib/librio500.c
	${REINPLACE_CMD} -e "s,getopt.h,," ${WRKSRC}/include/Makefile.in

.include <bsd.port.post.mk>
