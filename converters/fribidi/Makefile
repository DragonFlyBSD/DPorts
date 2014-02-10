# Created by: ijliao
# $FreeBSD: head/converters/fribidi/Makefile 342384 2014-02-03 04:11:38Z miwi $

PORTNAME=	fribidi
PORTVERSION=	0.19.2
PORTREVISION=	1
CATEGORIES=	converters
MASTER_SITES=	http://fribidi.org/download/

MAINTAINER=	gnome@FreeBSD.org
COMMENT=	A Free Implementation of the Unicode Bidirectional Algorithm

USES=	pathfix gmake
USE_LDCONFIG=	yes
GNU_CONFIGURE=	yes
CONFIGURE_ARGS=	--without-glib

.include <bsd.port.pre.mk>

.if !defined(WITH_DEBUG)
CONFIGURE_ARGS+=--disable-debug
.endif

post-patch:
	@${SED} -e 's|%%LOCALBASE%%|${LOCALBASE}|g' < \
	    	${FILESDIR}/fribidi-config > ${WRKDIR}/fribidi-config

post-install:
	${INSTALL_SCRIPT} ${WRKDIR}/fribidi-config ${STAGEDIR}${PREFIX}/bin

.include <bsd.port.post.mk>
