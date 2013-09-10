# New ports collection makefile for:	p5-Net-SSH-Expect
# Date created:		2007-06-30
# Whom:			Tsung-Han Yeh <snowfly@yuntech.edu.tw>
#
# $FreeBSD: net/p5-Net-SSH-Expect/Makefile 326486 2013-09-06 10:47:10Z az $
#

PORTNAME=	Net-SSH-Expect
PORTVERSION=	1.09
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	SSH wrapper to execute remote commands

RUN_DEPENDS=	p5-Expect>=0:${PORTSDIR}/lang/p5-Expect
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::SSH::Expect.3

.include <bsd.port.mk>
