# Created by: Thomas Gellekum <tg@FreeBSD.org>
# $FreeBSD: finance/ktoblzcheck/Makefile 326388 2013-09-05 11:39:11Z bapt $

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

post-patch:
	@${REINPLACE_CMD} -e "s/-lstdc++//g" ${WRKSRC}/src/lib/Makefile.in

.include <bsd.port.mk>
