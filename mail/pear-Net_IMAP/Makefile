# Ports collection makefile for:  pear-Net_IMAP
# Date created:			  12 march 2004
# Whom:				  Attila Nagy <bra@fsn.hu>
#
# $FreeBSD: ports/mail/pear-Net_IMAP/Makefile,v 1.7 2012/11/17 05:59:10 svnexp Exp $
#

PORTNAME=	Net_IMAP
PORTVERSION=	1.1.0
CATEGORIES=	mail net pear

MAINTAINER=	rafan@FreeBSD.org
COMMENT=	PEAR class that provides an implementation of the IMAP protocol

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket \
		${PEARDIR}/Auth/SASL.php:${PORTSDIR}/security/pear-Auth_SASL
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		IMAP.php IMAPProtocol.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
