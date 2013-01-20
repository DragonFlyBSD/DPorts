# Created by: clsung
# $FreeBSD: ports/dns/p5-Net-Domain-ExpireDate/Makefile,v 1.30 2013/01/15 12:52:10 svnexp Exp $

PORTNAME=	Net-Domain-ExpireDate
PORTVERSION=	1.10
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module obtain expiration date of domain names

BUILD_DEPENDS=	p5-Net-Whois-Raw>=0:${PORTSDIR}/net/p5-Net-Whois-Raw
RUN_DEPENDS=	p5-Net-Whois-Raw>=0:${PORTSDIR}/net/p5-Net-Whois-Raw

PERL_CONFIGURE=	yes

MAN3=		Net::Domain::ExpireDate.3

.include <bsd.port.mk>
