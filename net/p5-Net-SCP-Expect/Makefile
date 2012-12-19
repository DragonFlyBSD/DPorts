# New ports collection makefile for:   p5-Net-SCP-Expect
# Date created:                        27 Feb 2006
# Whom:                                Simun Mikecin <numisemis@yahoo.com>
#
# $FreeBSD: ports/net/p5-Net-SCP-Expect/Makefile,v 1.6 2012/11/17 06:00:11 svnexp Exp $
#

PORTNAME=	Net-SCP-Expect
PORTVERSION=	0.16
PORTREVISION=	1
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	numisemis@yahoo.com
COMMENT=	Perl5 wrapper for scp that allows passwords via Expect

BUILD_DEPENDS=	p5-Expect>=1.14:${PORTSDIR}/lang/p5-Expect \
		p5-Net-IPv6Addr>=0:${PORTSDIR}/net-mgmt/p5-Net-IPv6Addr \
		p5-Term-ReadPassword>=0.01:${PORTSDIR}/devel/p5-Term-ReadPassword
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Net::SCP::Expect.3

.include <bsd.port.mk>
