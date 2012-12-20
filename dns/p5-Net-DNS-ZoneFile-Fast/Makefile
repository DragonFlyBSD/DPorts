# Created by: Anton Berezin <tobez@FreeBSD.org>
# $FreeBSD: ports/dns/p5-Net-DNS-ZoneFile-Fast/Makefile,v 1.20 2012/11/17 05:57:10 svnexp Exp $

PORTNAME=	Net-DNS-ZoneFile-Fast
PORTVERSION=	1.17
CATEGORIES=	dns perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module to parse BIND8/9 zone files

BUILD_DEPENDS=	p5-Net-DNS>=0.65:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Net-DNS-SEC>=0.15:${PORTSDIR}/dns/p5-Net-DNS-SEC
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=	Net::DNS::ZoneFile::Fast.3

.include <bsd.port.mk>
