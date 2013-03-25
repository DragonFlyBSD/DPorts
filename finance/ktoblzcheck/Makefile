# New ports collection makefile for:    ktoblzcheck
# Date created:         25 November 2003
# Whom:                 Thomas Gellekum <tg@FreeBSD.org>
#
# $FreeBSD: finance/ktoblzcheck/Makefile 314640 2013-03-19 13:04:30Z eadler $
#

PORTNAME=	ktoblzcheck
PORTVERSION=	1.40
CATEGORIES=	finance german
MASTER_SITES=	SF/${PORTNAME}

MAINTAINER=	jhale@FreeBSD.org
COMMENT=	Check bank codes of German banks

LICENSE=	GPLv2

USES=	pathfix
USE_AUTOTOOLS=	libtool
USE_LDCONFIG=	yes
MAKE_JOBS_SAFE=	yes

MAN1=		ktoblzcheck.1

OPTIONS_DEFINE=	PYTHON

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MPYTHON}
USE_PYTHON=	yes
PLIST_SUB+=	PYTHON=""
.else
CONFIGURE_ARGS+=--disable-python
PLIST_SUB+=	PYTHON="@comment "
.endif

.include <bsd.port.mk>
