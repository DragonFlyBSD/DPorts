# Created by: Paul Schmehl <pauls@utdallas.edu>
# $FreeBSD: net/p5-IP-Anonymous/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	IP-Anonymous
PORTVERSION=	0.04
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	pauls@utdallas.edu
COMMENT=	Perl extension to provide anonymous IP addresses

RUN_DEPENDS=	p5-Crypt-Rijndael>=0:${PORTSDIR}/security/p5-Crypt-Rijndael

USES=		perl5
USE_PERL5=	configure

MAN3=		IP::Anonymous.3

NO_STAGE=	yes
.include <bsd.port.mk>
