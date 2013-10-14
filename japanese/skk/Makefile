# Created by: Makoto Matsushita <matusita@jp.freebsd.org>
# $FreeBSD: japanese/skk/Makefile 327737 2013-09-20 18:47:54Z bapt $

PORTNAME=	skk
PORTVERSION=	9.6
PORTREVISION=	3
CATEGORIES=	japanese elisp
MASTER_SITES=	# empty
DISTFILES=	# empty
EXTRACT_ONLY=	# empty

MAINTAINER=	ports@FreeBSD.org
COMMENT=The "meta-port" for the SKK Japanese-input software

RUN_DEPENDS=	${LOCALBASE}/share/skk/${SKKJISYO}:${PORTSDIR}/japanese/skk-jisyo \
		${LOCALBASE}/bin/skkdic-count:${PORTSDIR}/japanese/skk-tools \
		${LOCALBASE}/sbin/skkserv:${PORTSDIR}/japanese/skkserv

NO_BUILD=	yes

SKKJISYO_SIZE?=	L
SKKJISYO?=	SKK-JISYO.${SKKJISYO_SIZE}

do-install:	# empty

NO_STAGE=	yes
.include <bsd.port.mk>
