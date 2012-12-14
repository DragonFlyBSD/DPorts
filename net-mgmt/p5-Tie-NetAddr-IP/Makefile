# New ports collection makefile for:	net-mgmt/p5-Tie-NetAddr-IP
# Date created:				29 March 2001
# Whom:					Anton Berezin <tobez@tobez.org>
#
# $FreeBSD: ports/net-mgmt/p5-Tie-NetAddr-IP/Makefile,v 1.11 2012/11/17 06:00:36 svnexp Exp $
#

PORTNAME=	Tie-NetAddr-IP
PORTVERSION=	1.51
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Tie::NetAddr::IP - Implements a Hash where the key is a subnet

BUILD_DEPENDS=	p5-NetAddr-IP>0:${PORTSDIR}/net-mgmt/p5-NetAddr-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Tie::NetAddr::IP.3

.include <bsd.port.mk>
