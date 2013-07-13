# Created by: Emanuel Haupt <ehaupt@FreeBSD.org>
# $FreeBSD: net-im/pidgin-bs/Makefile 322530 2013-07-08 18:42:15Z ehaupt $

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
USES=		gettext gmake
USE_BZIP2=	yes
USE_GNOME=	gtk20
USE_LDCONFIG=	${PREFIX}/lib/pidgin
MAKE_JOBS_SAFE=	yes

.include <bsd.port.pre.mk>

.if ${OSVERSION} < 700000
BROKEN=		configure fails on 6.x
.endif

.include <bsd.port.post.mk>
