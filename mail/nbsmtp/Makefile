# Created by: Anders Nordby <anders@fix.no>
# $FreeBSD: mail/nbsmtp/Makefile 323578 2013-07-24 08:19:07Z ehaupt $

PORTNAME=	nbsmtp
PORTVERSION=	1.00
PORTREVISION=	1
CATEGORIES=	mail
MASTER_SITES=	CRITICAL

MAINTAINER=	ehaupt@FreeBSD.org
COMMENT=	Simple program for outgoing SMTP delivery

LICENSE=	GPLv2

GNU_CONFIGURE=	yes

CONFIGURE_ARGS+=	--enable-ssl --enable-ipv6

MAN5=		nbsmtprc.5
MAN8=		nbsmtp.8

PLIST_FILES=	bin/nbsmtp

.include <bsd.port.mk>
