# Created by: clsung
# $FreeBSD: dns/p5-Net-Domain-ExpireDate/Makefile 314732 2013-03-20 13:17:41Z tobez $

PORTNAME=	Net-Domain-ExpireDate
PORTVERSION=	1.11
CATEGORIES=	dns net perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:DESPAIR
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl module obtain expiration date of domain names

BUILD_DEPENDS=	p5-Net-Whois-Raw>=0:${PORTSDIR}/net/p5-Net-Whois-Raw
RUN_DEPENDS=	p5-Net-Whois-Raw>=0:${PORTSDIR}/net/p5-Net-Whois-Raw

PERL_CONFIGURE=	yes

MAN3=		Net::Domain::ExpireDate.3

.include <bsd.port.mk>
