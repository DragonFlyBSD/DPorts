# Created by: ijliao
# $FreeBSD: ports/security/tinc/Makefile,v 1.50 2013/01/26 16:45:51 svnexp Exp $

PORTNAME=	tinc
PORTVERSION=	1.0.19
CATEGORIES=	security
MASTER_SITES=	http://www.tinc-vpn.org/packages/ \
		ftp://ftp.wiretapped.net/pub/security/network-security/tinc/ \
		http://www.mirrors.wiretapped.net/security/network-security/tinc/

MAINTAINER=	dinoex@FreeBSD.org
COMMENT=	A Virtual Private Network (VPN) daemon

LIB_DEPENDS=	lzo2:${PORTSDIR}/archivers/lzo2

LICENSE=	GPLv3

USE_OPENSSL=	yes
GNU_CONFIGURE=	yes
CPPFLAGS+=	-I${LOCALBASE}/include
LDFLAGS+=	-L${LOCALBASE}/lib
CONFIGURE_ARGS=	--localstatedir=/var
USE_RC_SUBR=	tincd

PLIST_FILES=	sbin/tincd
MAN5=	tinc.conf.5
MAN8=	tincd.8
INFO=	tinc

.include <bsd.port.mk>
