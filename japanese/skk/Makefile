# New ports collection makefile for:	skk
# Date created:		04 Mar 1997
# Whom:			Makoto Matsushita <matusita@jp.freebsd.org>
#
# $FreeBSD: ports/japanese/skk/Makefile,v 1.25 2012/11/17 05:58:40 svnexp Exp $
#

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

.include <bsd.port.mk>
