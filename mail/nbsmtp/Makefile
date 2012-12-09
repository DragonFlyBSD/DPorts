# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: ports/mail/nbsmtp/Makefile,v 1.24 2012/11/17 05:59:07 svnexp Exp $

PORTNAME=	nbsmtp
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Simple program for outgoing SMTP delivery

LICENSE=	GPLv2

GNU_CONFIGURE=	yes
MAKE_JOBS_SAFE=	yes

CONFIGURE_ARGS+=	--enable-ssl --enable-ipv6

MAN5=		nbsmtprc.5
MAN8=		nbsmtp.8

PLIST_FILES=	bin/nbsmtp

.include <bsd.port.mk>
