# Created by: jamundsen
# $FreeBSD: net/shmux/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	shmux
DISTVERSION=	1.0.2
PORTREVISION=	2
CATEGORIES=	net
MASTER_SITES=	http://web.taranis.org/shmux/dist/
EXTRACT_SUFX=	.tgz

MAINTAINER=	online@jamundsen.dyndns.org
COMMENT=	Utility to run commands on multiple hosts using shell commands

OPTIONS_DEFINE=		FPING PCRE
OPTIONS_DEFAULT=	FPING
FPING_DESC=	Use fping utility

GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--datadir=${PREFIX}/share/examples

ALL_TARGET=	${PORTNAME}

MAN1=		shmux.1
MANCOMPRESSED=	no

NO_STAGE=	yes
.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MFPING}
RUN_DEPENDS+=	fping:${PORTSDIR}/net/fping
.endif

.if ${PORT_OPTIONS:MPCRE}
LIB_DEPENDS+=	pcre.3:${PORTSDIR}/devel/pcre
CONFIGURE_ARGS+=	--with-pcre=${LOCALBASE}/lib
.else
CONFIGURE_ARGS+=	--with-pcre=no
.endif

.include <bsd.port.mk>
