# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: net-im/pidgin-bs/Makefile 327756 2013-09-20 22:13:34Z bapt $

PORTNAME=	pidgin-bs
PORTVERSION=	1.3.0
PORTREVISION=	7
CATEGORIES=	net-im
MASTER_SITES=	SF/${PORTNAME}/bot-sentry/${PORTVERSION}
DISTNAME=	bot-sentry-${PORTVERSION}

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Pidgin plugin to prevent instant message spam

LICENSE=	GPLv3

LIB_DEPENDS=	purple:${PORTSDIR}/net-im/libpurple
RUN_DEPENDS=	pidgin:${PORTSDIR}/net-im/pidgin

GNU_CONFIGURE=	yes
USES=		gettext gmake pkgconfig
USE_BZIP2=	yes
USE_GNOME=	gtk20
USE_LDCONFIG=	${PREFIX}/lib/pidgin

NO_STAGE=	yes
.include <bsd.port.mk>
