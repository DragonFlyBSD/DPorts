# $FreeBSD: devel/fossil/Makefile 327915 2013-09-23 06:05:10Z bapt $

PORTNAME=	fossil
PORTVERSION=	20130911114349
PORTEPOCH=	1
CATEGORIES=	devel www
MASTER_SITES=	http://www.fossil-scm.org/download/
DISTNAME=	${PORTNAME}-src-${PORTVERSION}

MAINTAINER=	bapt@FreeBSD.org
COMMENT=	DSCM with built-in wiki, http interface and server, tickets database

LICENSE=	BSD

PLIST_FILES=	bin/fossil

HAS_CONFIGURE=	yes

OPTIONS_DEFINE=	JSON STATIC
JSON_DESC=	JSON API support

JSON_CONFIGURE_ON=	--json
STATIC_CONFIGURE_ON=	--static

.include <bsd.port.mk>
