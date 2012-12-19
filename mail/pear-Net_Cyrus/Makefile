# Ports collection makefile for:  pear-Net_Cyrus
# Date created:			  12 March 2004
# Whom:				  Attila Nagy <bra@fsn.hu>
#
# $FreeBSD: ports/mail/pear-Net_Cyrus/Makefile,v 1.5 2012/11/17 05:59:10 svnexp Exp $
#

PORTNAME=	Net_Cyrus
PORTVERSION=	0.3.1
CATEGORIES=	mail net pear

MAINTAINER=	bra@fsn.hu
COMMENT=	PEAR class to administer Cyrus IMAP servers

BUILD_DEPENDS=	${PEARDIR}/Net/Socket.php:${PORTSDIR}/net/pear-Net_Socket \
		${PEARDIR}/Net/IMAP.php:${PORTSDIR}/mail/pear-Net_IMAP
RUN_DEPENDS:=	${BUILD_DEPENDS}

CATEGORY=	Net
FILES=		Cyrus.php

.include <bsd.port.pre.mk>
.include "${PORTSDIR}/devel/pear/bsd.pear.mk"
.include <bsd.port.post.mk>
