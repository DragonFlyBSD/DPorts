# Created by: Christopher N. Harrell <cnh@ivmg.net>
# $FreeBSD: net-mgmt/p5-NetAddr-IP/Makefile 319175 2013-05-27 08:48:15Z tobez $

PORTNAME=	NetAddr-IP
PORTVERSION=	4.069
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	tobez@FreeBSD.org
COMMENT=	Perl module for working with IP addresses and blocks thereof

PERL_CONFIGURE=	yes

MAN3=		NetAddr::IP.3 \
	NetAddr::IP::InetBase.3 \
	NetAddr::IP::Lite.3 \
	NetAddr::IP::Util.3 \
	NetAddr::IP::UtilPP.3

post-patch:
	${PERL} -ni -e 'print unless /^=head1/../^=cut/' ${WRKSRC}/Lite/Util/Makefile.PL

.include <bsd.port.mk>
