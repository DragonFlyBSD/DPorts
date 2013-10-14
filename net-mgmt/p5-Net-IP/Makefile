# Created by: Kimura Fuyuki <fuyuki@hadaly.org>
# $FreeBSD: net-mgmt/p5-Net-IP/Makefile 327757 2013-09-20 22:24:43Z bapt $

PORTNAME=	Net-IP
PORTVERSION=	1.26
CATEGORIES=	net-mgmt perl5 ipv6
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Perl extension for manipulating IPv4/IPv6 addresses

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::IP.3

NO_STAGE=	yes
post-configure:
	${PERL} -pi -e 's/-I\S+PERL\S+ //g if m{PERL_DL_NONLAZY}' ${WRKSRC}/Makefile

post-patch:
	${REINPLACE_CMD} "1853s#\\s+#\s*#g" ${WRKSRC}/IP.pm
	${REINPLACE_CMD} "76s#count#count   = 0#" ${WRKSRC}/ipcount

.include <bsd.port.mk>
