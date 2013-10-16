# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: net/p5-Net-IP-RangeCompare/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Net-IP-RangeCompare
PORTVERSION=	4.025
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	Perl extension for IP Range Comparisons

RUN_DEPENDS=	p5-Data-IPV4-Range-Parse>=0.05:${PORTSDIR}/net/p5-Data-IPV4-Range-Parse \
		p5-Data-Range-Compare>=1.030:${PORTSDIR}/devel/p5-Data-Range-Compare

USES=		perl5
USE_PERL5=	configure

MAN3=		Net::IP::RangeCompare.3

NO_STAGE=	yes
.include <bsd.port.mk>
