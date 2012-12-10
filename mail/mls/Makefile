# Created by: The Anarcat <anarcat@anarcat.ath.cx>
# $FreeBSD: ports/mail/mls/Makefile,v 1.8 2012/11/20 19:16:29 svnexp Exp $

PORTNAME=	mls
PORTVERSION=	1.3
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	http://www.marki-online.net/MLS/ \
		http://marki.host.sk/MLS/
EXTRACT_SUFX=	.tgz

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Program for generating various statistics on emails

MAN1=		mls.1
MANCOMPRESSED=	yes
PLIST_FILES=	bin/mls

MAKE_ARGS+=	DESTDIR="${PREFIX}" CC="${CC}" CFLAGS="${CFLAGS}"
ALL_TARGET=	mls

.include <bsd.port.mk>
