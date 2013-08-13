# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net-mgmt/p5-Net-Abuse-Utils/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Net-Abuse-Utils
PORTVERSION=	0.13
CATEGORIES=	net-mgmt perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	Net
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Routines useful for processing network abuse

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Email-Address>0:${PORTSDIR}/mail/p5-Email-Address \
		p5-Net-DNS>0:${PORTSDIR}/dns/p5-Net-DNS \
		p5-Net-Whois-IP>0:${PORTSDIR}/net/p5-Net-Whois-IP
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::Abuse::Utils.3

post-install:
	${INSTALL_SCRIPT} ${WRKSRC}/examples/ip-info.pl ${PREFIX}/sbin/

.include <bsd.port.mk>
